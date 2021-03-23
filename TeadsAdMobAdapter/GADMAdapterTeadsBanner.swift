//
//  GADMAdapterTeadsBanner.swift
//  TeadsAdMobAdapter
//
//  Created by Gwendal Madouas on 21/11/2019.
//  Copyright © 2019 teads. All rights reserved.
//

import Foundation
import TeadsSDK
import GoogleMobileAds

/// Class adapting Teads banner to work with Google Mobile Ads mediation.
@objc public class GADMAdapterTeadsBanner: NSObject, GADCustomEventBanner {

    // MARK: - Members
    private var currentBanner: TFACustomAdView?

    // MARK: - GADCustomEventBanner Protocol

    @objc required public override init() {
        super.init()
    }

    @objc public weak var delegate: GADCustomEventBannerDelegate?

    @objc public func requestAd(_ adSize: GADAdSize,
                                parameter serverParameter: String?,
                                label serverLabel: String?,
                                request: GADCustomEventRequest) {
        // Check PID
        guard let rawPid = serverParameter, let pid = Int(rawPid) else {
            let error = NSError.from(code: .pidNotFound,
                                     description: "No valid PID has been provided to load Teads banner ad.")
            delegate?.customEventBanner(self, didFailAd: error)
            return
        }

        // Prepare ad settings
        let adSettings = try? TeadsAdSettings.instance(fromAdmobParameters: request.additionalParameters)

        // Load banner
        let banner = TFACustomAdView(withPid: pid, andDelegate: self)
        banner.addContextInfo(infoKey: TeadsAdSettings.integrationTypeKey, infoValue: TeadsAdSettings.integrationAdmob)
        banner.addContextInfo(infoKey: TeadsAdSettings.integrationVersionKey, infoValue: GADMobileAds.sharedInstance().sdkVersion)
        banner.frame = CGRect(origin: CGPoint.zero, size: CGSizeFromGADAdSize(adSize))
        banner.load(teadsAdSettings: adSettings)
        currentBanner = banner

    }

    private func updateRatio(_ ratio: CGFloat) {
        if let width = currentBanner?.frame.width.positive {
            currentBanner?.frame = CGRect(origin: CGPoint.zero, size: CGSize(width: width, height: width / ratio))
        }
    }
}

// MARK: - TFAAdDelegate Protocol

extension GADMAdapterTeadsBanner: TFAAdDelegate {

    public func didReceiveAd(_ ad: TFAAdView, adRatio: CGFloat) {
        updateRatio(adRatio)

        delegate?.customEventBanner(self, didReceiveAd: ad)
    }

    public func didFailToReceiveAd(_ ad: TFAAdView, adFailReason: AdFailReason) {
        let error = NSError.from(code: .loadingFailure,
                                 description: adFailReason.errorMessage)
        delegate?.customEventBanner(self, didFailAd: error)
    }

    public func adClose(_ ad: TFAAdView, userAction: Bool) {
        // Nothing to do (required method)
    }

    public func adError(_ ad: TFAAdView, errorMessage: String) {
        // Nothing to do (required method)
    }

    public func adBrowserDidOpen(_ ad: TFAAdView) {
        delegate?.customEventBannerWasClicked(self)
        delegate?.customEventBannerWillPresentModal(self)
    }

    public func adBrowserDidClose(_ ad: TFAAdView) {
        delegate?.customEventBannerWillDismissModal(self)
        delegate?.customEventBannerDidDismissModal(self)
    }

    public func adDidOpenFullscreen(_ ad: TFAAdView) {
        // TODO: What to do ?
    }

    public func adDidCloseFullscreen(_ ad: TFAAdView) {
        // TODO: What to do ?
    }

    public func adPlaybackChange(_ ad: TFAAdView, state: TFAAdView.TeadsAdPlaybackState) {
        // TODO: What to do ?
    }

    public func adDidChangeVolume(_ ad: TFAAdView, muted: Bool) {
        // TODO: What to do ?
    }

    public func didUpdateRatio(_ ad: TFAAdView, ratio: CGFloat) {
        updateRatio(ratio)
    }

    public func adBrowserWillOpen(_ ad: TFAAdView) -> UIViewController? {
        delegate?.customEventBannerWillPresentModal(self)
        return delegate?.viewControllerForPresentingModalView
    }

    // TODO: add support for these optional callbacks
    // - (void)customEventBannerWillLeaveApplication:(id<GADCustomEventBanner>)customEvent;
    // We should handle a new TFAAdDelegate.adWillLeaveApplication to handle app to app opening
}

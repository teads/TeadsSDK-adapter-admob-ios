//
//  GADMAdapterTeadsInterstitial.swift
//  TeadsAdMobAdapter
//
//  Created by Gwendal Madouas on 21/11/2019.
//  Copyright © 2019 teads. All rights reserved.
//

import Foundation
import TeadsSDK
import GoogleMobileAds

/// Class adapting Teads interstitial to work with Google Mobile Ads mediation.
@objc public class GADMAdapterTeadsInterstitial: NSObject, GADCustomEventInterstitial {

    // MARK: - Members

    private var currentInterstitial: TFAInterstitialAd?

    // MARK: - GADCustomEventInterstitial Protocol

    @objc required public override init() {
        super.init()
    }

    @objc public weak var delegate: GADCustomEventInterstitialDelegate?

    @objc public func requestAd(withParameter serverParameter: String?, label serverLabel: String?, request: GADCustomEventRequest) {

        // Check PID
        guard let rawPid = serverParameter, let pid = Int(rawPid) else {
            let error = NSError.from(code: .pidNotFound,
                                     description: "No valid PID has been provided to load Teads interstitial ad.")
            delegate?.customEventInterstitial(self, didFailAd: error)
            return
        }

        // Prepare ad settings
        let adSettings = try? TeadsAdSettings.instance(fromAdmobParameters: request.additionalParameters)

        // Prepare ad settings
        let interstitial = TFAInterstitialAd(withPid: pid, andDelegate: self)
        interstitial.addContextInfo(infoKey: TeadsAdSettings.integrationTypeKey, infoValue: TeadsAdSettings.integrationAdmob)
        interstitial.addContextInfo(infoKey: TeadsAdSettings.integrationVersionKey, infoValue: GADRequest.sdkVersion())
        interstitial.load(settings: adSettings)
        currentInterstitial = interstitial
    }

    @objc public func present(fromRootViewController rootViewController: UIViewController) {
        guard let currentInterstitial = currentInterstitial, currentInterstitial.isLoaded else {
            return
        }

        currentInterstitial.show()
    }
}

// MARK: - TFAInterstitialAdDelegate Protocol

extension GADMAdapterTeadsInterstitial: TFAInterstitialAdDelegate {
    public func interstitialDidReceiveAd(_ ad: TFAInterstitialAd) {
        delegate?.customEventInterstitialDidReceiveAd(self)
    }

    public func interstitial(_ ad: TFAInterstitialAd, didFailToReceiveAdWithError error: String) {

        let error = NSError.from(code: .loadingFailure,
                                 description: error)
        delegate?.customEventInterstitial(self, didFailAd: error)
    }

    public func interstitialWillOpen(_ ad: TFAInterstitialAd) {
        delegate?.customEventInterstitialWillPresent(self)
    }

    public func interstitialWillClose(_ ad: TFAInterstitialAd) {
        delegate?.customEventInterstitialWillDismiss(self)
    }

    public func interstitialDidOpen(_ ad: TFAInterstitialAd) {
        // TODO: What to do ?
    }

    public func interstitialDidClose(_ ad: TFAInterstitialAd) {
        delegate?.customEventInterstitialDidDismiss(self)
    }

    public func interstitialBrowserDidOpen(_ ad: TFAInterstitialAd) {
        // TODO: What to do ?
    }

    public func interstitialBrowserDidClose(_ ad: TFAInterstitialAd) {
        // TODO: What to do ?
    }

    public func interstitialWillLeaveApplication(_ ad: TFAInterstitialAd) {
        delegate?.customEventInterstitialWillLeaveApplication(self)
    }

    // TODO: What to do ?
    //- (void)customEventInterstitialWasClicked:(nonnull id<GADCustomEventInterstitial>)customEvent;
    //- (void)customEventInterstitialWillLeaveApplication:(nonnull id<GADCustomEventInterstitial>)customEvent;
}

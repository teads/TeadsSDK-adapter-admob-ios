//
//  GADMAdapterTeadsNative.swift
//  TeadsAdMobAdapter
//
//  Created by Thibaud Saint-Etienne on 27/04/2020.
//  Copyright © 2020 teads. All rights reserved.
//

import Foundation
import TeadsSDK
import GoogleMobileAds

@objc public class GADMAdapterTeadsNative: NSObject, GADCustomEventNativeAd {

    // MARK: - Members
    private var currentNative: TeadsAdPlacement?
    private var currentNativeAd: TeadsNativeAd?
    private var mediatedNativeAd: GADMediatedUnifiedNativeAd?
    public weak var delegate: GADCustomEventNativeAdDelegate?

    @objc public required override init() {
        super.init()
    }

    // MARK: - GADCustomEventNativeAd Protocol
    public func request(withParameter serverParameter: String, request: GADCustomEventRequest, adTypes: [Any], options: [Any], rootViewController: UIViewController) {

        // Check PID
        guard let pid = Int(serverParameter) else {
            let error = NSError.from(code: .pidNotFound,
                                     description: "No valid PID has been provided to load Teads banner ad.")
            delegate?.customEventNativeAd(self, didFailToLoadWithError: error)
            return
        }

        // Prepare ad settings
        let adSettings = try? TeadsAdSettings.instance(fromAdmobParameters: request.additionalParameters)

        // Load native ad
        currentNative = TeadsAdPlacement(placementId: pid, delegate: self)
        currentNative?.requestAd(TeadsNativeAdRequest(template: .admob, settings: adSettings))

    }

    public func handlesUserClicks() -> Bool {
        // Let the Teads SDK track clicks
        return true
    }

    public func handlesUserImpressions() -> Bool {
        // Let the Teads SDK track impressions
        return true
    }

}

extension GADMAdapterTeadsNative: TeadsAdPlacementDelegate {

    public func adPlacement(_ adPlacement: TeadsAdPlacement, didReceiveNativeAd nativeAd: TeadsNativeAd) {
        // Bind the mediated Teads ad with admob
        currentNativeAd = nativeAd
        currentNativeAd?.delegate = self
        mediatedNativeAd = GADMAdapterTeadsMediatedNativeAd(teadsNativeAd: nativeAd, nativeAdViewAdOptions: nil)
        guard let mediatedNativeAd = mediatedNativeAd else {
            return
        }
        delegate?.customEventNativeAd(self, didReceive: mediatedNativeAd)
    }

    public func adPlacement(_ adPlacement: TeadsAdPlacement, didFailToReceiveAd adFailReason: AdFailReason) {
        delegate?.customEventNativeAd(self, didFailToLoadWithError: NSError(domain: "teads.placement", code: adFailReason.errorCode.rawValue, userInfo: [NSLocalizedDescriptionKey: adFailReason.errorMessage]))
    }

}

extension GADMAdapterTeadsNative: TeadsNativeAdDelegate {

    public func nativeAdDidRecordAdClick(_ nativeAd: TeadsNativeAd) {
        guard let mediatedNativeAd = mediatedNativeAd else {
            return
        }
        GADMediatedUnifiedNativeAdNotificationSource.mediatedNativeAdDidRecordClick(mediatedNativeAd)
    }

    public func nativeAdDidRecordAdImpression(_ nativeAd: TeadsNativeAd) {
        guard let mediatedNativeAd = mediatedNativeAd else {
            return
        }
        GADMediatedUnifiedNativeAdNotificationSource.mediatedNativeAdDidRecordImpression(mediatedNativeAd)
    }

    public func nativeAdDidRecordAdLeftApplication(_ nativeAd: TeadsNativeAd) {
        guard let mediatedNativeAd = mediatedNativeAd else {
            return
        }
        GADMediatedUnifiedNativeAdNotificationSource.mediatedNativeAdWillLeaveApplication(mediatedNativeAd)
    }

}

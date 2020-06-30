//
//  GADMAdapterTeadsRewardedVideo.swift
//  TeadsAdMobAdapter
//
//  Created by Gwendal Madouas on 21/11/2019.
//  Copyright © 2019 teads. All rights reserved.
//

import Foundation
import GoogleMobileAds
import TeadsSDK

/// Class adapting Teads rewarded ad to work with Google Mobile Ads mediation.
@objc public class GADMAdapterTeadsRewardedVideo: NSObject, GADMRewardBasedVideoAdNetworkAdapter {

    // MARK: - Members

    private var currentRewardedVideo: TFARewardedAd?
    private weak var adConnector: GADMRewardBasedVideoAdNetworkConnector?

    // MARK: - GADMRewardBasedVideoAdNetworkAdapter Protocol

    public static func adapterVersion() -> String! {
        // Grab version of adapter framework bundle
        return Bundle(for: self).object(forInfoDictionaryKey: "CFBundleShortVersionString") as? String ?? ""
    }

    public static func networkExtrasClass() -> GADAdNetworkExtras.Type! {
        return GADAdNetworkExtras.self
    }

    public required init!(rewardBasedVideoAdNetworkConnector connector: GADMRewardBasedVideoAdNetworkConnector!) {
        guard let connector = connector else { return nil }
        super.init()

        adConnector = connector
    }

    public required init!(rewardBasedVideoAdNetworkConnector connector: GADMRewardBasedVideoAdNetworkConnector!, credentials: [[AnyHashable: Any]]!) {
        guard let connector = connector else { return nil }
        super.init()

        adConnector = connector
    }

    public required init!(gadmAdNetworkConnector connector: GADMRewardBasedVideoAdNetworkConnector!) {
        guard let connector = connector else { return nil }
        super.init()

        adConnector = connector
    }

    public func setUp() {
        // Initialize Teads SDK here if needed (e.g., for SDK singleton or video preloading)
        // If something goes wrong with SDK initialization, call:
        // --> self.adConnector?.adapter(:didFailToSetUpRewardBasedVideoAdWithError:)

        adConnector?.adapterDidSetUpRewardBasedVideoAd(self)
    }

    public func requestRewardBasedVideoAd() {
        // Check PID

        guard let rawPid = self.adConnector?.credentials()?[GADCustomEventParametersServer] as? String, let pid = Int(rawPid) else {
            let error = NSError.from(code: .pidNotFound,
                                     description: "No valid PID has been provided to load rewarded ad.")
            adConnector?.adapter(self, didFailToLoadRewardBasedVideoAdwithError: error)
            return
        }

        // Prepare ad settings
        var adSettings: TeadsAdSettings?
        if let customEvent = self.adConnector?.networkExtras() as? GADCustomEventExtras {
            adSettings = try? TeadsAdSettings.instance(fromAdmobParameters: customEvent.allExtras())
        }

        // Load rewarded ad
        let rewardedVideo = TFARewardedAd(withPid: pid, andDelegate: self)
        rewardedVideo.addContextInfo(infoKey: TeadsAdSettings.integrationTypeKey, infoValue: TeadsAdSettings.integrationAdmob)
        rewardedVideo.addContextInfo(infoKey: TeadsAdSettings.integrationVersionKey, infoValue: GADRequest.sdkVersion())
        rewardedVideo.load(settings: adSettings)
        currentRewardedVideo = rewardedVideo
    }

    public func presentRewardBasedVideoAd(withRootViewController viewController: UIViewController!) {
        currentRewardedVideo?.show()
    }

    public func stopBeingDelegate() {
        currentRewardedVideo?.delegate = nil
        currentRewardedVideo = nil
    }
}

// MARK: - TFARewardedAdDelegate Protocol

extension GADMAdapterTeadsRewardedVideo: TFARewardedAdDelegate {

    public func rewardedAdDidReceive(_ rewardedAd: TFARewardedAd) {
        adConnector?.adapterDidReceiveRewardBasedVideoAd(self)
    }

    public func rewarded(_ rewardedAd: TFARewardedAd, didFailToReceiveAdWithError: String) {
        let error = NSError.from(code: .loadingFailure,
                                 description: didFailToReceiveAdWithError)
        adConnector?.adapter(self, didFailToLoadRewardBasedVideoAdwithError: error)
    }

    public func rewarded(_ rewardedAd: TFARewardedAd, didRewardUserWith reward: TFAReward?) {
        guard let reward = reward else { return }

        let amount = NSDecimalNumber(value: reward.amount)
        let adReward = GADAdReward(rewardType: reward.type ?? "", rewardAmount: amount)
        adConnector?.adapter(self, didRewardUserWith: adReward)
    }

    public func rewardedAdDidOpen(_ rewardedAd: TFARewardedAd) {
        adConnector?.adapterDidOpenRewardBasedVideoAd(self)
    }

    public func rewardedAdDidStartPlaying(_ rewardedAd: TFARewardedAd) {
        adConnector?.adapterDidStartPlayingRewardBasedVideoAd(self)
    }

    public func rewardedAdDidCompletePlaying(_ rewardedAd: TFARewardedAd) {
        adConnector?.adapterDidCompletePlayingRewardBasedVideoAd(self)
    }

    public func rewardedAdWillLeaveApplication(_ rewardedAd: TFARewardedAd) {
        adConnector?.adapterWillLeaveApplication(self)
    }

    public func rewardedAdDidClose(_ rewardedAd: TFARewardedAd) {
        adConnector?.adapterDidCloseRewardBasedVideoAd(self)
        currentRewardedVideo?.delegate = nil
        currentRewardedVideo = nil
    }

    public func rewardedAdBrowserDidOpen(_ rewardedAd: TFARewardedAd) {
        adConnector?.adapterDidGetAdClick(self)
    }
}

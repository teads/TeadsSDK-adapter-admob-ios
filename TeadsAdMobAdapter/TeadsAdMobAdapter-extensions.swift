//
//  TeadsAdapterExtras-extension.swift
//  TeadsAdMobAdapter
//
//  Created by Paul Nicolas on 13/05/2020.
//  Copyright © 2020 teads. All rights reserved.
//

import Foundation
import TeadsSDK
import GoogleMobileAds

extension TeadsAdSettings: GADAdNetworkExtras {
    @nonobjc internal class func instance(fromAdmobParameters dictionary: [AnyHashable: Any]?) throws -> TeadsAdSettings {
        let adSettings = try TeadsAdSettings.instance(from: dictionary ?? Dictionary())
        adSettings.addExtras(TeadsAdSettings.integrationAdmob, for: TeadsAdSettings.integrationTypeKey)
        adSettings.addExtras(GADMobileAds.sharedInstance().sdkVersion, for: TeadsAdSettings.integrationVersionKey)
        return adSettings
    }
}

@objc public class GADMAdapterTeads: NSObject {
    @objc public static let defaultLabel = "Teads"

    @objc public class func customEventExtra(with teadsAdSettings: TeadsAdSettings, for label: String = defaultLabel) -> GADCustomEventExtras {
        let customEventExtras = GADCustomEventExtras()
        if let parameters = try? teadsAdSettings.toDictionary() {
            customEventExtras.setExtras(parameters, forLabel: label)
        }
        return customEventExtras
    }
}

extension CGFloat {
    var positive: CGFloat? {
        return self > 0 ? self : nil
    }
}

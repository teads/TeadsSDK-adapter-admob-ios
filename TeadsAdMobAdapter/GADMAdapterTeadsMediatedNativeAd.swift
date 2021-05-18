//
//  GADMAdapterTeadsMediatedNativeAd.swift
//  TeadsAdMobAdapter
//
//  Created by Thibaud Saint-Etienne on 29/04/2020.
//  Copyright © 2020 teads. All rights reserved.
//

import Foundation
import TeadsSDK
import GoogleMobileAds

class GADMAdapterTeadsMediatedNativeAd: NSObject {
    var teadsNativeAd: TeadsNativeAd
    var mappedImages = [GADNativeAdImage]()
    var mappedIcon: GADNativeAdImage?
    var extras = [String: Any]()

    init(teadsNativeAd: TeadsNativeAd) {
        self.teadsNativeAd = teadsNativeAd
        super.init()

        teadsNativeAd.imageUrl?.loadImage(async: false, success: { [weak self] image in
            self?.mappedImages = [GADNativeAdImage(image: image)]
        })

        teadsNativeAd.iconUrl?.loadImage(async: false, success: { [weak self] image in
            self?.mappedIcon = GADNativeAdImage(image: image)
        })

    }
}

extension GADMAdapterTeadsMediatedNativeAd: GADMediatedUnifiedNativeAd {
    var advertiser: String? {
        return teadsNativeAd.sponsored?.text
    }

    var headline: String? {
        return teadsNativeAd.title?.text
    }

    var images: [GADNativeAdImage]? {
        return mappedImages
    }

    var body: String? {
        return teadsNativeAd.content?.text
    }

    var icon: GADNativeAdImage? {
        return mappedIcon
    }

    var callToAction: String? {
        return teadsNativeAd.callToAction?.text
    }

    var starRating: NSDecimalNumber? {
        guard let stringValue = teadsNativeAd.rating?.text else {
            return nil
        }
        return NSDecimalNumber(string: stringValue)
    }

    var store: String? {
        return nil
    }

    var price: String? {
        return teadsNativeAd.price?.text
    }

    var extraAssets: [String: Any]? {
        return extras
    }

    var mediaView: UIView? {
        // Used to return the mediaView if video content
        // Set to nil as we only handle images atm
        return nil
    }

    var hasVideoContent: Bool {
        // Return false as we only handle images atm
        return false
    }

    var adChoicesView: UIView? {
        // AdChoices is completely handle from the SDK side because this doesn't work here atm
        return nil
    }

    func didRender(in view: UIView, clickableAssetViews: [GADNativeAssetIdentifier: UIView], nonclickableAssetViews: [GADNativeAssetIdentifier: UIView], viewController: UIViewController) {

        teadsNativeAd.registerContainer(in: view)

        clickableAssetViews.forEach { (key, assetView) in
            switch key {
            case .headlineAsset:
                guard let headline = teadsNativeAd.title else {
                    break
                }
                teadsNativeAd.register(asset: headline, in: assetView)
            case .callToActionAsset:
                guard let callToAction = teadsNativeAd.callToAction else {
                    break
                }
                teadsNativeAd.register(asset: callToAction, in: assetView)
            case .iconAsset:
                guard let icon = teadsNativeAd.iconUrl else {
                    break
                }
                teadsNativeAd.register(asset: icon, in: assetView)
            case .bodyAsset:
                guard let body = teadsNativeAd.content else {
                    break
                }
                teadsNativeAd.register(asset: body, in: assetView)
            case .priceAsset:
                guard let price = teadsNativeAd.price else {
                    break
                }
                teadsNativeAd.register(asset: price, in: assetView)
            case .imageAsset:
                guard let image = teadsNativeAd.imageUrl else {
                    break
                }
                teadsNativeAd.register(asset: image, in: assetView)
            case .starRatingAsset:
                guard let starRating = teadsNativeAd.rating else {
                    break
                }
                teadsNativeAd.register(asset: starRating, in: assetView)
            case .advertiserAsset:
                guard let advertiser = teadsNativeAd.sponsored else {
                    break
                }
                teadsNativeAd.register(asset: advertiser, in: assetView)
            case .mediaViewAsset:
                guard let mediaView = teadsNativeAd.imageUrl else {
                    break
                }
                teadsNativeAd.register(asset: mediaView, in: assetView)
            default:
                break
            }
        }
    }
}

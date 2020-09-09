# Teads - iOS AdMob Mediation Adapter
> Mediation adapter to be used in conjunction with AdMob to deliver Teads ads on iOS devices.

If you want to display Teads ads in your iOS application through AdMob mediation, you’re at the right place.

## Requirements

- ![Platform: iOS 9+](https://img.shields.io/badge/Platform-iOS%209%2B-blue.svg?style=flat)
- ![Xcode: 11.0+](https://img.shields.io/badge/Xcode-11.0+-blue.svg?style=flat)
- ![GoogleMobileAdsSDK: 7.59.0+](https://img.shields.io/badge/GoogleMobileAdsSDK-7.59.0+-blue.svg?style=flat)
- ![Teads SDK: 4.7.7+](https://img.shields.io/badge/Teads%20SDK-4.7.7+-blue.svg?style=flat)

## Features

- [x] Displaying Teads banners

## Installation

Before installing Teads adapter, you need to implement [Google Mobile Ads](https://developers.google.com/admob/ios/quick-start) in your application.

#### CocoaPods

If your project is managing dependencies through [CocoaPods](https://cocoapods.org/), you just need to add this pod in your `Podfile`.

It will install Teads adapter and Teads SDK.

1. Add pod named `GoogleMobileAdsMediationTeads` in your Podfile:

```ruby
platform :ios, '9.0'
pod 'GoogleMobileAdsMediationTeads'
```

2. Run `pod install --repo-update` to install the adapter in your project.
3. Follow the [Define Custom Event](https://support.teads.tv/support/solutions/articles/36000166678-admob-google-ad-manager-ios#defining_a_custom_event) step to finish the integration.
4. You’re done.

#### Manually

1. Integrate latest version of Teads SDK to your project using this [Quick Start Guide](https://support.teads.tv/support/solutions/articles/36000165909-ios).
2. Download latest release of [`TeadsAdMobAdapter`](https://github.com/teads/TeadsSDK-iOS/releases).
3. Drop adapter files in your iOS project.
4. Follow the [Define Custom Event](https://support.teads.tv/support/solutions/articles/36000166678-admob-google-ad-manager-ios#defining_a_custom_event) step to finish the integration.
5. You’re done.

## Integration Documentation

Integration instructions are available on [Teads SDK Documentation](https://support.teads.tv/support/solutions/articles/36000166678-admob-google-ad-manager-ios).

## Changelog

See [CHANGELOG](CHANGELOG.md). 

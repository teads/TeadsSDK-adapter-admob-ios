#ifndef TARGET_OS_SIMULATOR
#include <TargetConditionals.h>
#endif
#if TARGET_OS_SIMULATOR
// Generated by Apple Swift version 5.0.1 (swiftlang-1001.0.82.4 clang-1001.0.46.5)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import GoogleMobileAds;
@import ObjectiveC;
@import TeadsSDK;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="TeadsAdMobAdapter",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@protocol GADCustomEventBannerDelegate;
@class GADCustomEventRequest;

/// Class adapting Teads banner to work with Google Mobile Ads mediation.
SWIFT_CLASS("_TtC17TeadsAdMobAdapter22GADMAdapterTeadsBanner")
@interface GADMAdapterTeadsBanner : NSObject <GADCustomEventBanner>
@property (nonatomic, weak) id <GADCustomEventBannerDelegate> _Nullable delegate;
- (void)requestBannerAd:(GADAdSize)adSize parameter:(NSString * _Nullable)serverParameter label:(NSString * _Nullable)serverLabel request:(GADCustomEventRequest * _Nonnull)request;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class TFAAdView;
@class AdFailReason;

@interface GADMAdapterTeadsBanner (SWIFT_EXTENSION(TeadsAdMobAdapter)) <TFAAdDelegate>
- (void)didReceiveAd:(TFAAdView * _Nonnull)ad adRatio:(CGFloat)adRatio;
- (void)didFailToReceiveAd:(TFAAdView * _Nonnull)ad adFailReason:(AdFailReason * _Nonnull)adFailReason;
- (void)adClose:(TFAAdView * _Nonnull)ad userAction:(BOOL)userAction;
- (void)adError:(TFAAdView * _Nonnull)ad errorMessage:(NSString * _Nonnull)errorMessage;
- (void)adBrowserDidOpen:(TFAAdView * _Nonnull)ad;
- (void)adBrowserDidClose:(TFAAdView * _Nonnull)ad;
- (void)adDidOpenFullscreen:(TFAAdView * _Nonnull)ad;
- (void)adDidCloseFullscreen:(TFAAdView * _Nonnull)ad;
- (void)adPlaybackChange:(TFAAdView * _Nonnull)ad state:(enum TeadsAdPlaybackState)state;
- (void)adDidChangeVolume:(TFAAdView * _Nonnull)ad muted:(BOOL)muted;
@end

@class UIView;
@class GADCustomEventExtras;
@class TeadsAdSettings;

/// Class encapsulating extra parameters for Teads custom events.
SWIFT_CLASS("_TtC17TeadsAdMobAdapter22GADMAdapterTeadsExtras")
@interface GADMAdapterTeadsExtras : NSObject <GADAdNetworkExtras>
/// Enable test mode
@property (nonatomic) BOOL debugMode;
/// Enable location reporting
@property (nonatomic) BOOL reportLocation;
/// Enable light mode for endscreen
@property (nonatomic) BOOL lightEndscreenMode;
/// Enable media preloading
@property (nonatomic) BOOL mediaPreloadEnabled;
/// Brand safety url
@property (nonatomic, copy) NSString * _Nullable pageUrl;
@property (nonatomic, copy) NSString * _Nullable consent;
@property (nonatomic, copy) NSString * _Nullable subjectToGDPR;
@property (nonatomic) BOOL audioSessionIsApplicationManaged;
@property (nonatomic) BOOL enableValidationMode;
/// U.S privacy string
@property (nonatomic, copy) NSString * _Nullable usPrivacy;
@property (nonatomic, weak) UIView * _Nullable adContainer SWIFT_DEPRECATED_MSG("adContainer should not be used from version 4.3.0, this property will be remove in the next major update. There is no need to search for a replacement. The metric associated for this context is no longer helpful on Teads side.");
/// Convenient initializer creating an instance of <code>GADMAdapterTeadsExtras</code> from <code>GADRequest</code> <code>additionalParameters</code>.
/// <ul>
///   <li>
///     Doc for <a href="https://developers.google.com/admob/ios/api/reference/Classes/GADRequest#-registeradnetworkextras">GADRequest</a>
///   </li>
/// </ul>
/// \param parameters <code>GADRequest</code> additional parameters.
///
- (nonnull instancetype)initWithRequestAdditionalParameters:(NSDictionary * _Nonnull)parameters;
/// Creates an instance of <code>GADCustomEventExtras</code> used when sending ad network extras for
/// custom event requests (interstitial and banners) through <code>GADRequest</code>.
/// <ul>
///   <li>
///     Doc for <a href="https://developers.google.com/admob/ios/api/reference/Classes/GADRequest#-registeradnetworkextras">GADRequest</a>
///   </li>
///   <li>
///     Doc for <a href="https://developers.google.com/admob/ios/api/reference/Classes/GADCustomEventExtras#-setextrasforlabel">GADCustomEventExtras</a>
///   </li>
/// </ul>
/// \param label Custom event label defined on AdMob dashboard for the ad network.
///
///
/// returns:
/// A <code>GADCustomEventExtras</code> containing extra parameters.
- (GADCustomEventExtras * _Nonnull)getCustomEventExtrasForCustomEventLabel:(NSString * _Nonnull)label SWIFT_WARN_UNUSED_RESULT;
/// Creates an instance of <code>TeadsAdSettings</code> configured from ad network extra parameters.
/// <ul>
///   <li>
///     Doc for <a href="https://developers.google.com/admob/ios/api/reference/Classes/GADRequest#-registeradnetworkextras">GADRequest</a>
///   </li>
/// </ul>
///
/// returns:
/// A <code>TeadsAdSettings</code> containing settings to configure Teads ads.
- (TeadsAdSettings * _Nonnull)getTeadsAdSettings SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol GADCustomEventInterstitialDelegate;
@class UIViewController;

/// Class adapting Teads interstitial to work with Google Mobile Ads mediation.
SWIFT_CLASS("_TtC17TeadsAdMobAdapter28GADMAdapterTeadsInterstitial")
@interface GADMAdapterTeadsInterstitial : NSObject <GADCustomEventInterstitial>
@property (nonatomic, weak) id <GADCustomEventInterstitialDelegate> _Nullable delegate;
- (void)requestInterstitialAdWithParameter:(NSString * _Nullable)serverParameter label:(NSString * _Nullable)serverLabel request:(GADCustomEventRequest * _Nonnull)request;
- (void)presentFromRootViewController:(UIViewController * _Nonnull)rootViewController;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class TFAInterstitialAd;

@interface GADMAdapterTeadsInterstitial (SWIFT_EXTENSION(TeadsAdMobAdapter)) <TFAInterstitialAdDelegate>
- (void)interstitialDidReceiveAd:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitial:(TFAInterstitialAd * _Nonnull)ad didFailToReceiveAdWithError:(NSString * _Nonnull)error;
- (void)interstitialWillOpen:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialWillClose:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialDidOpen:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialDidClose:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialBrowserDidOpen:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialBrowserDidClose:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialWillLeaveApplication:(TFAInterstitialAd * _Nonnull)ad;
@end

@protocol GADMRewardBasedVideoAdNetworkConnector;

/// Class adapting Teads rewarded ad to work with Google Mobile Ads mediation.
SWIFT_CLASS("_TtC17TeadsAdMobAdapter29GADMAdapterTeadsRewardedVideo")
@interface GADMAdapterTeadsRewardedVideo : NSObject <GADMRewardBasedVideoAdNetworkAdapter>
+ (NSString * _Null_unspecified)adapterVersion SWIFT_WARN_UNUSED_RESULT;
+ (Class <GADAdNetworkExtras> _Null_unspecified)networkExtrasClass SWIFT_WARN_UNUSED_RESULT;
- (null_unspecified instancetype)initWithRewardBasedVideoAdNetworkConnector:(id <GADMRewardBasedVideoAdNetworkConnector> _Null_unspecified)connector OBJC_DESIGNATED_INITIALIZER;
- (null_unspecified instancetype)initWithRewardBasedVideoAdNetworkConnector:(id <GADMRewardBasedVideoAdNetworkConnector> _Null_unspecified)connector credentials:(NSArray<NSDictionary *> * _Null_unspecified)credentials OBJC_DESIGNATED_INITIALIZER;
- (null_unspecified instancetype)initWithGADMAdNetworkConnector:(id <GADMRewardBasedVideoAdNetworkConnector> _Null_unspecified)connector OBJC_DESIGNATED_INITIALIZER;
- (void)setUp;
- (void)requestRewardBasedVideoAd;
- (void)presentRewardBasedVideoAdWithRootViewController:(UIViewController * _Null_unspecified)viewController;
- (void)stopBeingDelegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class TFARewardedAd;
@class TFAReward;

@interface GADMAdapterTeadsRewardedVideo (SWIFT_EXTENSION(TeadsAdMobAdapter)) <TFARewardedAdDelegate>
- (void)rewardedAdDidReceive:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewarded:(TFARewardedAd * _Nonnull)rewardedAd didFailToReceiveAdWithError:(NSString * _Nonnull)didFailToReceiveAdWithError;
- (void)rewarded:(TFARewardedAd * _Nonnull)rewardedAd didRewardUserWith:(TFAReward * _Nullable)reward;
- (void)rewardedAdDidOpen:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdDidStartPlaying:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdDidCompletePlaying:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdWillLeaveApplication:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdDidClose:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdBrowserDidOpen:(TFARewardedAd * _Nonnull)rewardedAd;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#else
// Generated by Apple Swift version 5.0.1 (swiftlang-1001.0.82.4 clang-1001.0.46.5)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import GoogleMobileAds;
@import ObjectiveC;
@import TeadsSDK;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="TeadsAdMobAdapter",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@protocol GADCustomEventBannerDelegate;
@class GADCustomEventRequest;

/// Class adapting Teads banner to work with Google Mobile Ads mediation.
SWIFT_CLASS("_TtC17TeadsAdMobAdapter22GADMAdapterTeadsBanner")
@interface GADMAdapterTeadsBanner : NSObject <GADCustomEventBanner>
@property (nonatomic, weak) id <GADCustomEventBannerDelegate> _Nullable delegate;
- (void)requestBannerAd:(GADAdSize)adSize parameter:(NSString * _Nullable)serverParameter label:(NSString * _Nullable)serverLabel request:(GADCustomEventRequest * _Nonnull)request;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class TFAAdView;
@class AdFailReason;

@interface GADMAdapterTeadsBanner (SWIFT_EXTENSION(TeadsAdMobAdapter)) <TFAAdDelegate>
- (void)didReceiveAd:(TFAAdView * _Nonnull)ad adRatio:(CGFloat)adRatio;
- (void)didFailToReceiveAd:(TFAAdView * _Nonnull)ad adFailReason:(AdFailReason * _Nonnull)adFailReason;
- (void)adClose:(TFAAdView * _Nonnull)ad userAction:(BOOL)userAction;
- (void)adError:(TFAAdView * _Nonnull)ad errorMessage:(NSString * _Nonnull)errorMessage;
- (void)adBrowserDidOpen:(TFAAdView * _Nonnull)ad;
- (void)adBrowserDidClose:(TFAAdView * _Nonnull)ad;
- (void)adDidOpenFullscreen:(TFAAdView * _Nonnull)ad;
- (void)adDidCloseFullscreen:(TFAAdView * _Nonnull)ad;
- (void)adPlaybackChange:(TFAAdView * _Nonnull)ad state:(enum TeadsAdPlaybackState)state;
- (void)adDidChangeVolume:(TFAAdView * _Nonnull)ad muted:(BOOL)muted;
@end

@class UIView;
@class GADCustomEventExtras;
@class TeadsAdSettings;

/// Class encapsulating extra parameters for Teads custom events.
SWIFT_CLASS("_TtC17TeadsAdMobAdapter22GADMAdapterTeadsExtras")
@interface GADMAdapterTeadsExtras : NSObject <GADAdNetworkExtras>
/// Enable test mode
@property (nonatomic) BOOL debugMode;
/// Enable location reporting
@property (nonatomic) BOOL reportLocation;
/// Enable light mode for endscreen
@property (nonatomic) BOOL lightEndscreenMode;
/// Enable media preloading
@property (nonatomic) BOOL mediaPreloadEnabled;
/// Brand safety url
@property (nonatomic, copy) NSString * _Nullable pageUrl;
@property (nonatomic, copy) NSString * _Nullable consent;
@property (nonatomic, copy) NSString * _Nullable subjectToGDPR;
@property (nonatomic) BOOL audioSessionIsApplicationManaged;
@property (nonatomic) BOOL enableValidationMode;
/// U.S privacy string
@property (nonatomic, copy) NSString * _Nullable usPrivacy;
@property (nonatomic, weak) UIView * _Nullable adContainer SWIFT_DEPRECATED_MSG("adContainer should not be used from version 4.3.0, this property will be remove in the next major update. There is no need to search for a replacement. The metric associated for this context is no longer helpful on Teads side.");
/// Convenient initializer creating an instance of <code>GADMAdapterTeadsExtras</code> from <code>GADRequest</code> <code>additionalParameters</code>.
/// <ul>
///   <li>
///     Doc for <a href="https://developers.google.com/admob/ios/api/reference/Classes/GADRequest#-registeradnetworkextras">GADRequest</a>
///   </li>
/// </ul>
/// \param parameters <code>GADRequest</code> additional parameters.
///
- (nonnull instancetype)initWithRequestAdditionalParameters:(NSDictionary * _Nonnull)parameters;
/// Creates an instance of <code>GADCustomEventExtras</code> used when sending ad network extras for
/// custom event requests (interstitial and banners) through <code>GADRequest</code>.
/// <ul>
///   <li>
///     Doc for <a href="https://developers.google.com/admob/ios/api/reference/Classes/GADRequest#-registeradnetworkextras">GADRequest</a>
///   </li>
///   <li>
///     Doc for <a href="https://developers.google.com/admob/ios/api/reference/Classes/GADCustomEventExtras#-setextrasforlabel">GADCustomEventExtras</a>
///   </li>
/// </ul>
/// \param label Custom event label defined on AdMob dashboard for the ad network.
///
///
/// returns:
/// A <code>GADCustomEventExtras</code> containing extra parameters.
- (GADCustomEventExtras * _Nonnull)getCustomEventExtrasForCustomEventLabel:(NSString * _Nonnull)label SWIFT_WARN_UNUSED_RESULT;
/// Creates an instance of <code>TeadsAdSettings</code> configured from ad network extra parameters.
/// <ul>
///   <li>
///     Doc for <a href="https://developers.google.com/admob/ios/api/reference/Classes/GADRequest#-registeradnetworkextras">GADRequest</a>
///   </li>
/// </ul>
///
/// returns:
/// A <code>TeadsAdSettings</code> containing settings to configure Teads ads.
- (TeadsAdSettings * _Nonnull)getTeadsAdSettings SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol GADCustomEventInterstitialDelegate;
@class UIViewController;

/// Class adapting Teads interstitial to work with Google Mobile Ads mediation.
SWIFT_CLASS("_TtC17TeadsAdMobAdapter28GADMAdapterTeadsInterstitial")
@interface GADMAdapterTeadsInterstitial : NSObject <GADCustomEventInterstitial>
@property (nonatomic, weak) id <GADCustomEventInterstitialDelegate> _Nullable delegate;
- (void)requestInterstitialAdWithParameter:(NSString * _Nullable)serverParameter label:(NSString * _Nullable)serverLabel request:(GADCustomEventRequest * _Nonnull)request;
- (void)presentFromRootViewController:(UIViewController * _Nonnull)rootViewController;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class TFAInterstitialAd;

@interface GADMAdapterTeadsInterstitial (SWIFT_EXTENSION(TeadsAdMobAdapter)) <TFAInterstitialAdDelegate>
- (void)interstitialDidReceiveAd:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitial:(TFAInterstitialAd * _Nonnull)ad didFailToReceiveAdWithError:(NSString * _Nonnull)error;
- (void)interstitialWillOpen:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialWillClose:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialDidOpen:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialDidClose:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialBrowserDidOpen:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialBrowserDidClose:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialWillLeaveApplication:(TFAInterstitialAd * _Nonnull)ad;
@end

@protocol GADMRewardBasedVideoAdNetworkConnector;

/// Class adapting Teads rewarded ad to work with Google Mobile Ads mediation.
SWIFT_CLASS("_TtC17TeadsAdMobAdapter29GADMAdapterTeadsRewardedVideo")
@interface GADMAdapterTeadsRewardedVideo : NSObject <GADMRewardBasedVideoAdNetworkAdapter>
+ (NSString * _Null_unspecified)adapterVersion SWIFT_WARN_UNUSED_RESULT;
+ (Class <GADAdNetworkExtras> _Null_unspecified)networkExtrasClass SWIFT_WARN_UNUSED_RESULT;
- (null_unspecified instancetype)initWithRewardBasedVideoAdNetworkConnector:(id <GADMRewardBasedVideoAdNetworkConnector> _Null_unspecified)connector OBJC_DESIGNATED_INITIALIZER;
- (null_unspecified instancetype)initWithRewardBasedVideoAdNetworkConnector:(id <GADMRewardBasedVideoAdNetworkConnector> _Null_unspecified)connector credentials:(NSArray<NSDictionary *> * _Null_unspecified)credentials OBJC_DESIGNATED_INITIALIZER;
- (null_unspecified instancetype)initWithGADMAdNetworkConnector:(id <GADMRewardBasedVideoAdNetworkConnector> _Null_unspecified)connector OBJC_DESIGNATED_INITIALIZER;
- (void)setUp;
- (void)requestRewardBasedVideoAd;
- (void)presentRewardBasedVideoAdWithRootViewController:(UIViewController * _Null_unspecified)viewController;
- (void)stopBeingDelegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class TFARewardedAd;
@class TFAReward;

@interface GADMAdapterTeadsRewardedVideo (SWIFT_EXTENSION(TeadsAdMobAdapter)) <TFARewardedAdDelegate>
- (void)rewardedAdDidReceive:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewarded:(TFARewardedAd * _Nonnull)rewardedAd didFailToReceiveAdWithError:(NSString * _Nonnull)didFailToReceiveAdWithError;
- (void)rewarded:(TFARewardedAd * _Nonnull)rewardedAd didRewardUserWith:(TFAReward * _Nullable)reward;
- (void)rewardedAdDidOpen:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdDidStartPlaying:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdDidCompletePlaying:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdWillLeaveApplication:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdDidClose:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdBrowserDidOpen:(TFARewardedAd * _Nonnull)rewardedAd;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif

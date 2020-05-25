Pod::Spec.new do |s|

    s.name                      = 'GoogleMobileAdsMediationTeadsPrevious'
    s.version                   = '4.7.0'
    s.summary                   = "AdMob Adapter for Teads' iOS SDK"
    s.module_name			    = s.name
    s.description               = <<-DESC
                                Use this adapter to include AdMob as a demand source in your mediation waterfall
                                DESC
    s.homepage                  = 'https://github.com/teads/TeadsSDK-adapter-admob-ios'
    s.documentation_url         = "https://support.teads.tv/support/solutions/articles/36000166678-admob-google-ad-manager"
    s.license                   = { :type => 'Copyright', :text => 'Copyright Teads 2020' }
    s.authors                   = { 'Teads' => 'support-sdk@teads.tv'}

    s.source                    = { :git => 'https://github.com/teads/TeadsSDK-adapter-admob-ios.git', :branch => 'master', :tag => "v#{s.version}Previous"}
    s.platform                  = 'ios'
    s.ios.deployment_target     = '9.0'
    s.static_framework          = true
    s.requires_arc              = true
    s.ios.vendored_frameworks   = 'TeadsAdMobAdapterPrevious/TeadsAdMobAdapter.framework'
    s.preserve_paths 		    = 'TeadsAdMobAdapterPrevious/TeadsAdMobAdapter.framework'
    s.framework 			    = 'TeadsAdMobAdapter'

    s.dependency                'TeadsSDKPrevious', "#{s.version}"
    s.dependency                'Google-Mobile-Ads-SDK', '>= 7.31'

end

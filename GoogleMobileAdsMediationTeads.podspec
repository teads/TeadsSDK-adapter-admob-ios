Pod::Spec.new do |s|

    s.name                      = 'GoogleMobileAdsMediationTeads'
    s.version                   = '4.7.5'
    s.summary                   = "AdMob Adapter for Teads' iOS SDK"
    s.module_name               = 'TeadsAdMobAdapter'
    s.description               = <<-DESC
                                Use this adapter to include AdMob as a demand source in your mediation waterfall
                                DESC
    s.homepage                  = 'https://github.com/teads/TeadsSDK-adapter-admob-ios'
    s.documentation_url         = "https://support.teads.tv/support/solutions/articles/36000166678-admob-google-ad-manager"
    s.license                   = { :type => 'Copyright', :text => 'Copyright Teads 2020' }
    s.authors                   = { 'Teads' => 'support-sdk@teads.tv'}

    s.source                    = { :git => 'https://github.com/teads/TeadsSDK-adapter-admob-ios.git', :branch => 'master', :tag => "v#{s.version}"}
    s.platform                  = 'ios'
    s.ios.deployment_target     = '9.0'
    s.static_framework          = true
    s.requires_arc              = true
    s.source_files              = 'TeadsAdMobAdapter/**/*{.swift}'
    s.swift_versions            = ['4.3', '5.0', '5.1']

    s.dependency                'TeadsSDK', s.version.to_s
    s.dependency                'Google-Mobile-Ads-SDK', '>= 7.59'

end

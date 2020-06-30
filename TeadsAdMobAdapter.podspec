Pod::Spec.new do |s|

	s.name      			= "TeadsAdMobAdapter"
	s.version      			= "4.7.3"
	s.summary      			= "Teads' AdMob Adapter"
	s.platform	            = :ios
	s.module_name			= s.name
	s.description			= 'Mediation adapter to be used in conjunction with AdMob to deliver Teads ads on iOS devices.'

	s.ios.deployment_target		= "9.0"
	s.homepage                   = 'https://github.com/teads/TeadsSDK-adapter-admob-ios'
    s.documentation_url         = "https://support.teads.tv/support/solutions/articles/36000166678-admob-google-ad-manager"
    s.license                   = { :type => 'Copyright', :text => 'Copyright Teads 2020' }
    s.authors                   = { 'Teads' => 'support-sdk@teads.tv'}
	s.source                    = { :git => 'https://github.com/teads/TeadsSDK-adapter-admob-ios.git', :branch => 'master', :tag => "v#{s.version}"}

	s.source_files 			    = 'TeadsAdMobAdapter/**/*{.swift}'
	s.swift_versions 		    = ['4.3', '5.0', '5.1']
	s.ios.dependency 		    'TeadsSDK'
	s.ios.dependency		    'Google-Mobile-Ads-SDK', '>= 7.59'
	s.static_framework 		    = true

end

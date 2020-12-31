#
#  Be sure to run `pod spec lint Sigmob-iOS-SDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "SigmobAd-iOS"
  spec.version      = "2.24.0"
  spec.summary      = "WindSDK is a SDK from Sigmob providing AD service."
  
  spec.description      = <<-DESC
  Sigmob provides ADs which include splash、RewardVideo etc.
                       DESC

  spec.homepage     = "http://www.sigmob.com/"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { "Codi" => "codi.zhao@sigmob.com" }
  spec.platform     = :ios, "8.0"
  spec.ios.deployment_target = '8.0'
  spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.source       = { :git => "https://github.com/Sigmob/iOS-SDK.git", :tag => "#{spec.version}" }
  
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
  spec.requires_arc = true
  spec.default_subspec = 'WindSDK'

  # 默认的核心模块
  spec.subspec 'WindSDK' do |ss|
    ss.frameworks = 'ImageIO','StoreKit', 'CFNetwork', 'CoreMedia', 'AdSupport', 'CoreMotion', 'MediaPlayer', 'CoreGraphics', 'AVFoundation', 'CoreLocation', 'CoreTelephony', 'SafariServices', 'MobileCoreServices', 'SystemConfiguration'
    ss.weak_framework = 'WebKit', 'UIKit', 'Foundation'
    ss.libraries = 'c++', 'z', 'sqlite3'
    ss.vendored_frameworks =  'WindSDK/WindSDK.framework'
    ss.resource = 'WindSDK/Sigmob.bundle'
  end


  spec.subspec 'SigmobAdmobAdapter' do |ss|
     ss.ios.deployment_target = '9.0'
     ss.vendored_libraries = 'WindSDK/Admob/*.a'
     ss.dependency 'SigmobAd-iOS/WindSDK'
     ss.dependency 'Google-Mobile-Ads-SDK', '7.65.0'
  end

  spec.subspec 'SigmobAppLovinAdapter' do |ss|
     ss.ios.deployment_target = '9.0'
     ss.vendored_libraries = 'WindSDK/Applovin/*.a'
     ss.dependency 'SigmobAd-iOS/WindSDK'
     ss.dependency 'AppLovinSDK', '6.14.2'
  end

  spec.subspec 'SigmobFacebookAdapter' do |ss|
     ss.ios.deployment_target = '9.0'
     ss.vendored_libraries = 'WindSDK/Facebook/*.a'
     ss.dependency 'SigmobAd-iOS/WindSDK'
     ss.dependency 'FBAudienceNetwork', '6.0.0'
  end

  spec.subspec 'SigmobGDTAdapter' do |ss|
    ss.ios.deployment_target = '9.0'
    ss.vendored_libraries = 'WindSDK/GDT/*.a'
    ss.dependency 'SigmobAd-iOS/WindSDK'
    ss.dependency 'GDTMobSDK', '4.11.12'
  end


  spec.subspec 'SigmobIronSourceAdapter' do |ss|
    ss.ios.deployment_target = '9.0'
    ss.vendored_libraries = 'WindSDK/Ironsource/*.a'
    ss.dependency 'SigmobAd-iOS/WindSDK'
    ss.dependency 'IronSourceSDK', '7.0.1.0'
  end
  

  spec.subspec 'SigmobMintegralAdapter' do |ss|
    ss.ios.deployment_target = '9.0'
    ss.vendored_libraries = 'WindSDK/Mintegral/*.a'
    ss.dependency 'SigmobAd-iOS/WindSDK'
    ss.dependency 'MintegralAdSDK/RewardVideoAd', '6.6.0'
    ss.dependency 'MintegralAdSDK/InterstitialVideoAd', '6.6.0'
  end

  spec.subspec 'SigmobTouTiaoAdapter' do |ss|
     ss.ios.deployment_target = '9.0'
     ss.vendored_libraries = 'WindSDK/Toutiao/*.a'
     ss.dependency 'Bytedance-UnionAD', '3.2.5.2'
     ss.dependency 'SigmobAd-iOS/WindSDK'
  end


  spec.subspec 'SigmobVungleAdapter' do |ss|
    ss.ios.deployment_target = '9.0'
    ss.vendored_libraries = 'WindSDK/Vungle/*.a'
    ss.dependency 'SigmobAd-iOS/WindSDK'
    ss.dependency 'VungleSDK-iOS', '6.8.0'
  end


  spec.subspec 'SigmobUnityAdsAdapter' do |ss|
    ss.ios.deployment_target = '9.0'
    ss.vendored_libraries = 'WindSDK/UnityAds/*.a'
    ss.dependency 'UnityAds', '3.4.8'
    ss.dependency 'SigmobAd-iOS/WindSDK'
  end

  spec.subspec 'SigmobTapjoyAdapter' do |ss|
    ss.ios.deployment_target = '9.0'
    ss.vendored_libraries = 'WindSDK/Tapjoy/*.a'
    ss.dependency 'TapjoySDK', '12.7.0'
    ss.dependency 'SigmobAd-iOS/WindSDK'
  end

  spec.subspec 'SigmobKSAdapter' do |ss|
    ss.ios.deployment_target = '9.0'
    ss.vendored_libraries = 'WindSDK/SigmobKS/*.a'
    ss.dependency 'KSAdSDK', '3.3.5'
    ss.dependency 'SigmobAd-iOS/WindSDK'
  end


end

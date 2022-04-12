#
#  Be sure to run `pod spec lint Sigmob-iOS-SDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "SigmobAd-iOS"
  spec.version      = "4.1.0"
  spec.summary      = "WindSDK is a SDK from Sigmob providing AD service."
  spec.description      = <<-DESC
  SigmobAd-iOS provides ADs which include native、banner、splash、RewardVideo etc.
                       DESC

  spec.homepage     = "http://www.sigmob.com/"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { "Codi" => "codi.zhao@sigmob.com" }
  spec.platform     = :ios, "9.0"
  spec.ios.deployment_target = '9.0'
  spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.source       = { :http => "http://sdkres.sigmob.cn/wind/ios/4.1.0_0a5d8775f5edb86a541aaa6a22cee302/wind_release_ios_4.1.0_20220330.zip" }
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
  spec.requires_arc = true
  spec.default_subspec = 'WindSDK'

  # 默认的核心模块
  spec.subspec 'WindSDK' do |ss|
    ss.frameworks = 'ImageIO','StoreKit', 'CFNetwork', 'CoreMedia', 'AdSupport', 'CoreMotion', 'MediaPlayer', 'CoreGraphics', 'AVFoundation', 'CoreLocation', 'CoreTelephony', 'SafariServices', 'MobileCoreServices', 'SystemConfiguration', 'AudioToolbox'
    ss.weak_framework = 'WebKit', 'UIKit', 'Foundation'
    ss.libraries = 'c++', 'z', 'sqlite3'
    ss.vendored_frameworks = ['wind-sdk-ios/WindSDK.xcframework']
    ss.preserve_paths = 'wind-sdk-ios/WindSDK.xcframework'
    ss.dependency 'SigmobAd-iOS/WindFoundation'
  end

  spec.subspec 'WindFoundation' do |ss|
     ss.vendored_frameworks = ['wind-sdk-ios/WindFoundation.xcframework']
     ss.preserve_paths = 'wind-sdk-ios/WindFoundation.xcframework'
  end


end

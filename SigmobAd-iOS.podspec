#
#  Be sure to run `pod spec lint Sigmob-iOS-SDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "SigmobAd-iOS"
  spec.version      = "4.15.10"
  spec.summary      = "SigmobAd-iOS is a SDK from Sigmob providing AD service."
  spec.description      = <<-DESC
  SigmobAd-iOS provides ADs which include native、splash、RewardVideo、Interstitial etc.
                       DESC

  spec.homepage     = "https://www.sigmob.com/"
  spec.license      = { :type => 'MIT', :file => 'wind-sdk-ios/LICENSE' }
  spec.author       = { "Codi" => "codi.zhao@sigmob.com" }
  spec.platform     = :ios, "9.0"
  spec.ios.deployment_target = '9.0'
  spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.source       = { :http => 'https://sdkres.sigmob.cn/wind/ios/4.15.10_d0c8fc59c853e490edd130a92385b468/wind_release_ios_4.15.10_20250120.zip' }
  spec.xcconfig = { 'VALID_ARCHS' => 'arm64 x86_64','VALID_ARCHS[sdk=iphoneos*]' => 'arm64','VALID_ARCHS[sdk=iphonesimulator*]' => 'x86_64', 'OTHER_LDFLAGS' => ['-lObjC'] }
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.requires_arc = true
  spec.default_subspec = 'WindSDK'

  # 默认的核心模块
  spec.subspec 'WindSDK' do |ss|
    ss.frameworks = 'ImageIO','StoreKit', 'CFNetwork', 'CoreMedia', 'AdSupport', 'CoreMotion', 'MediaPlayer', 'CoreGraphics', 'AVFoundation', 'CoreLocation', 'CoreTelephony', 'SafariServices', 'MobileCoreServices', 'SystemConfiguration', 'AudioToolbox'
    ss.weak_framework = 'WebKit', 'UIKit', 'Foundation'
    ss.libraries = 'c++', 'z', 'sqlite3'
    ss.vendored_frameworks = 'wind-sdk-ios/*.xcframework'
    ss.preserve_paths = 'wind-sdk-ios/*.xcframework'
  end


end

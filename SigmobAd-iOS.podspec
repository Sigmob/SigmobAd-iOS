#
#  Be sure to run `pod spec lint Sigmob-iOS-SDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "SigmobAd-iOS"
  spec.version      = "5.1.0"
  spec.summary      = "SigmobAd-iOS is a SDK from Sigmob providing AD service."
  spec.description      = <<-DESC
  SigmobAd-iOS provides ADs which include native、splash、RewardVideo、Interstitial etc.
                       DESC

  spec.homepage     = "https://www.sigmob.com/"
  spec.license      = { :type => 'MIT', :file => 'wind-sdk-ios/LICENSE' }
  spec.author       = { "Codi" => "codi.zhao@sigmob.com" }
  spec.platform     = :ios, "11.0"
  spec.ios.deployment_target = '11.0'
  spec.swift_versions = ['5.0']
  spec.user_target_xcconfig = { 'OTHER_LDFLAGS' => ['-lObjC'], 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.source       = { :http => 'https://sdkres.sigmob.cn/wind/ios/5.1.0_b2258d9003bba9854c144b162b02ee34/wind_release_ios_5.1.0_20260701.zip' }
  spec.xcconfig = { 'VALID_ARCHS' => 'arm64 x86_64','VALID_ARCHS[sdk=iphoneos*]' => 'arm64','VALID_ARCHS[sdk=iphonesimulator*]' => 'x86_64', 'OTHER_LDFLAGS' => ['-lObjC'] }
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
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

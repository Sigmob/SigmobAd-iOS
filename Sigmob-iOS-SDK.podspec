#
#  Be sure to run `pod spec lint Sigmob-iOS-SDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "SigmobAd-iOS"
  spec.version      = "2.14.0"
  spec.summary      = "WindSDK is a SDK from Sigmob providing AD service."
  
  spec.description      = <<-DESC
  Sigmob provides ADs which include splash、RewardVideo etc.
                       DESC

  spec.homepage     = "http://www.sigmob.com/"
  #

  spec.license      = { :type => 'MIT', :file => 'LICENSE' }

  spec.author       = { "Codi" => "codi.zhao@sigmob.com" }
  
  spec.platform     = :ios, "8.0"


  spec.source       = { :git => "https://github.com/Sigmob/iOS-SDK", :tag => "#{spec.version}" }


  spec.frameworks = 'StoreKit', 'CFNetwork', 'CoreMedia', 'AdSupport', 'CoreMotion', 'MediaPlayer', 'CoreGraphics', 'AVFoundation', 'CoreLocation', 'CoreTelephony', 'SafariServices', 'MobileCoreService', 'SystemConfiguration'
  
  spec.weak_framework = 'WebKit', 'UIKit', 'Foundation'
  
  spec.libraries = 'c++', 'z', 'sqlite3'

  spec.vendored_frameworks =  'Sigmob/WindSDK.framework'

  spec.resource = 'Sigmob/Sigmob.bundle'

  spec.requires_arc = true

end

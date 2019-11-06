#
#  Be sure to run `pod spec lint Sigmob-iOS-SDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  s.name         = "SigmobAd-iOS"
  s.version      = "2.14.0"
  s.summary      = "WindSDK is a SDK from Sigmob providing AD service."
  
  s.description      = <<-DESC
  Sigmob provides ADs which include splash、RewardVideo etc.
                       DESC

  s.homepage     = "http://www.sigmob.com/"
  #

  s.license      = { :type => 'MIT', :file => 'LICENSE' }

  s.author       = { "Codi" => "codi.zhao@sigmob.com" }
  
  s.platform     = :ios, "8.0"


  s.source       = { :git => "https://github.com/Sigmob/iOS-SDK.git", :tag => "#{spec.version}" }


  s.frameworks = 'StoreKit', 'CFNetwork', 'CoreMedia', 'AdSupport', 'CoreMotion', 'MediaPlayer', 'CoreGraphics', 'AVFoundation', 'CoreLocation', 'CoreTelephony', 'SafariServices', 'MobileCoreServices', 'SystemConfiguration'
  
  s.weak_framework = 'WebKit', 'UIKit', 'Foundation'
  
  s.libraries = 'c++', 'z', 'sqlite3'

  s.vendored_frameworks =  'Sigmob/WindSDK.framework'

  s.resource = 'Sigmob/Sigmob.bundle'

  s.requires_arc = true

end

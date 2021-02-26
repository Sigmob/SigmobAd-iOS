# SigmobAd-iOS

## How To Get Started

+ [Download SigmobAd-iOS](http://www.sigmob.com/)

+ Check out the [documentation](http://docs.sigmob.cn/#/sdk/SDK%E6%8E%A5%E5%85%A5/ios/) for a comprehensive look at all of the APIs available in SigmobAd-iOS


## Installation with CocoaPods

[CocoaPods](https://cocoapods.org) is a dependency manager for Objective-C, which automates and simplifies the process of using 3rd-party libraries like Bytedance-UnionAD in your projects. You can install it with the following command:
```ruby
$ gem install cocoapods
```

### Podfile

To integrate Bytedance-UnionAD into your Xcode project using CocoaPods, specify it in your **Podfile**:
```ruby
source 'https://github.com/CocoaPods/Specs.git'
platform :ios, '8.0'

target 'TargetName' do
pod 'SigmobAd-iOS', '2.25.3'
end
```
Then, run the following command:
```ruby
$ pod install
```

Pod access is only supported after **version 1982**

If you want to get Bytedance-UnionAD before version 1982 ，Please go to [union](http://ad.toutiao.com/union/media) for more information.



从**2.23.0**之后的版本，所支持的聚合的SDK都可以通过cocoapods依赖。



#### 渠道支持列表

Sigmob 做为聚合SDK目前支持开屏广告和激励视频广告，同时支持热插拔模式。我们为每个广告渠道提供了一个静态库.a文件的适配器。

<font Color=red>如果需要使用某个渠道，需要将对应的渠道SDK和我们提供的.a适配器一同加入到工程。</font>

支持的渠道列表：

| 渠道名     | version | 适配器                      |
| ---------- | ------- | --------------------------- |
| Admob      | 7.65.0  | libGoogleMobileAdsAdapter.a |
| AppLovin   | 6.14.2  | libAppLovinAdapter.a        |
| Facebook   | 6.0.0   | libFacebookAdapter.a        |
| IronSource | 7.0.1   | libIronSourceAdapter.a      |
| Mintegral  | 6.6.0   | libMobvistaAdapter.a        |
| Bytedance  | 3.2.5.3 | libWMAdAdapter.a            |
| Vungle     | 6.8.0   | libVungleAdapter.a          |
| unityads   | 3.4.8   | libUnityAdsAdapter.a        |
| Tapjoy     | 12.7.0  | libTapjoyAdapter.a          |
| 快手       | 3.3.3   | libSigmobKSAdapter.a        |

#### 渠道接入



在SDK版本在2.23.0以上版本，支持cocoapod方式引入WindSDK所支持的Adapter。
在podfile文件中添加:

```
#核心库,必须添加
pod 'SigmobAd-iOS'
#各平台的Adapter
#pod 'SigmobAd-iOS/Sigmob(平台名)Adapter'
#例如 穿山甲 按照您需要支持的平台，按需引入即可
pod 'SigmobAd-iOS/SigmobTouTiaoAdapter'
```



下面是所有Adapter的pod代码列表

| network    | podCode                                    |
| ---------- | ------------------------------------------ |
| SigmobSDK  | pod 'SigmobAd-iOS'                         |
| 穿山甲     | pod 'SigmobAd-iOS/SigmobTouTiaoAdapter'    |
| Facebook   | pod 'SigmobAd-iOS/SigmobFacebookAdapter'   |
| Admob      | pod 'SigmobAd-iOS/SigmobAdmobAdapter'      |
| Applovin   | pod 'SigmobAd-iOS/SigmobAppLovinAdapter'   |
| Mintegral  | pod 'SigmobAd-iOS/SigmobMintegralAdapter'  |
| 腾讯广告   | pod 'SigmobAd-iOS/SigmobGDTAdapter'        |
| IronSource | pod 'SigmobAd-iOS/SigmobIronSourceAdapter' |
| Vungle     | pod 'SigmobAd-iOS/SigmobVungleAdapter'     |
| UnityAds   | pod 'SigmobAd-iOS/SigmobUnityAdsAdapter'   |
| Tapjoy     | pod 'SigmobAd-iOS/SigmobTapjoyAdapter'     |
| 快手       | pod 'SigmobAd-iOS/SigmobKSAdapter'         |

当导入某个适配器时，会自动通过pod下载对应渠道的SDK，由于Adapter和第三方广告SDK会存在版本兼容问题，所以我们建议通过pod Adapter的方式去依赖第三方广告SDK来确保不会有任何的版本兼容问题。





如果您想要引入特定版本的SDK则需要在所有pod 语句后面添加 '2.23.0'(版本号) 例如:

```
pod 'SigmobAd-iOS', '2.23.0'
pod 'SigmobAd-iOS/SigmobAdmobAdapter', '2.23.0'
pod 'SigmobAd-iOS/SigmobTouTiaoAdapter', '2.23.0'
pod 'SigmobAd-iOS/SigmobFacebookAdapter', '2.23.0'
```

**注**:需要版本是2.23.0之后





## Author

Codi

## License

SigmobAd-iOS is available under the MIT license. See the LICENSE file for more info.



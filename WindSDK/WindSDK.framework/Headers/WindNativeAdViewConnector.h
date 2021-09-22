//
//  WindNativeAdViewConnector.h
//  WindSDK
//
//  Created by Codi on 2021/7/28.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WindSDK/WindSDKDefines.h>

@class WADStrategy;
@class WindNativeAdView;
@protocol WindDislikeCustomEvent;

@protocol WindNativeAdViewConnector <NSObject>

/**
 广告曝光回调
 */
- (void)adapterNativeAdViewWillExpose:(UIView *)nativeAdView strategy:(WADStrategy *)strategy;

/**
 广告点击回调
 */
- (void)adapterNativeAdViewDidClick:(UIView *)nativeAdView strategy:(WADStrategy *)strategy;

/**
 广告详情页关闭回调
 */
- (void)adapterNativeAdDetailViewClosed:(UIView *)nativeAdView strategy:(WADStrategy *)strategy;


/**
 广告详情页面即将展示回调
 */
- (void)adapterNativeAdDetailViewWillPresentScreen:(UIView *)nativeAdView strategy:(WADStrategy *)strategy;


/**
 视频广告播放状态更改回调

 @param status 视频广告播放状态
 @param userInfo 视频广告信息
 */
- (void)adapterNativeAdView:(UIView *)nativeAdView playerStatusChanged:(WindMediaPlayerStatus)status userInfo:(NSDictionary *)userInfo strategy:(WADStrategy *)strategy;


- (void)adapterNativeAdView:(UIView *)nativeAdView dislikeWithReason:(NSArray<id<WindDislikeCustomEvent>> *)filterWords strategy:(WADStrategy *)strategy;




@end

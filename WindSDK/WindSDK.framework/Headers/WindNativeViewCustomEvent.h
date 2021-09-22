//
//  WindNativeViewCustomEvent.h
//  WindSDK
//
//  Created by Codi on 2021/7/27.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WindSDK/WindMediationNativeAd.h>
#import <WindSDK/WindNativeAdViewConnector.h>

extern NSString* const kWindNativeAdKeyVideoDuration;

@protocol WindNativeViewCustomEvent<NSObject>

- (instancetype)initWithFrame:(CGRect)frame connector:(id<WindNativeAdViewConnector>)connector;

- (void)setNativeAd:(id<WindMediationNativeAd>)nativeAd options:(NSDictionary *)options;

/*
 *  viewControllerForPresentingModalView
 *  详解：开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 */
- (void)setViewController:(UIViewController *)viewController;

- (void)setClickableViews:(NSArray<UIView *> *)clickableViews;

/**
 注销数据对象，在 tableView、collectionView 等场景需要复用 WindNativeAdView 时，
 需要在合适的时机，例如 cell 的 prepareForReuse 方法内执行 unregisterDataObject 方法，
 将广告对象与 WindNativeAdView 解绑
 */
- (void)unregisterDataObject;

- (UIView *)mediaView;
- (UIView *)logoImageView;
- (UIButton *)dislikeButton;
- (UIImageView *)mainImageView;
- (UIImageView *)leftImageView;
- (UIImageView *)midImageView;
- (UIImageView *)rightImageView;


//****************************************************************************************************

/**
 * 视频广告时长，单位 s
 */
- (CGFloat)videoDuration;

/**
 * 视频广告已播放时长，单位 s
 */
- (CGFloat)videoPlayTime;

/**
 播放视频
 */
- (void)play;

/**
 暂停视频，调用 pause 后，需要被暂停的视频广告对象，不会再自动播放，需要调用 play 才能恢复播放。
 */
- (void)pause;

/**
 停止播放
 */
- (void)stop;

/**
 播放静音开关
 @param flag 是否静音
 */
- (void)muteEnable:(BOOL)flag;

/**
 自定义播放按钮

 @param image 自定义播放按钮图片，不设置为默认图
 @param size 自定义播放按钮大小，不设置为默认大小 44 * 44
 */
- (void)setPlayButtonImage:(UIImage *)image size:(CGSize)size;

@end

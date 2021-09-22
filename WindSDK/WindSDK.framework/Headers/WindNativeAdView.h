//
//  WindNativeView.h
//  WindSDK
//
//  Created by Codi on 2021/7/27.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WindSDK/WindSDKDefines.h>
#import <WindSDK/WindNativeViewCustomEvent.h>

@class WindNativeAd;
@class WindDislikeWords;

@protocol WindNativeAdViewDelegate <NSObject>

@optional
/**
 广告曝光回调

 @param nativeAdView WindNativeAdView 实例
 */
- (void)nativeAdViewWillExpose:(WindNativeAdView *)nativeAdView;


/**
 广告点击回调

 @param nativeAdView WindNativeAdView 实例
 */
- (void)nativeAdViewDidClick:(WindNativeAdView *)nativeAdView;


/**
 广告详情页关闭回调

 @param nativeAdView WindNativeAdView 实例
 */
- (void)nativeAdDetailViewClosed:(WindNativeAdView *)nativeAdView;


/**
 当点击应用下载或者广告调用系统程序打开时调用
 
 @param nativeAdView WindNativeAdView 实例
 */
- (void)nativeAdViewApplicationWillEnterBackground:(WindNativeAdView *)nativeAdView;


/**
 广告详情页面即将展示回调

 @param nativeAdView WindNativeAdView 实例
 */
- (void)nativeAdDetailViewWillPresentScreen:(WindNativeAdView *)nativeAdView;


/**
 视频广告播放状态更改回调

 @param nativeAdView WindNativeAdView 实例
 @param status 视频广告播放状态
 @param userInfo 视频广告信息
 */
- (void)nativeAdView:(WindNativeAdView *)nativeAdView playerStatusChanged:(WindMediaPlayerStatus)status userInfo:(NSDictionary *)userInfo;


/**
 点击dislike回调
 开发者需要在这个回调中移除视图，否则，会出现用户点击叉无效的情况
 
 @param filterWords : 选择不喜欢的原因
 */
- (void)nativeAdView:(WindNativeAdView *)nativeAdView dislikeWithReason:(NSArray<WindDislikeWords *> *)filterWords;



@end


@interface WindNativeAdView : UIView

@property (nonatomic, strong, readonly) WindNativeAd *nativeAd;


/**
 广告 View 时间回调对象
 */
@property (nonatomic, weak) id<WindNativeAdViewDelegate> delegate;

/*
 *  viewControllerForPresentingModalView
 *  详解：开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 */
@property (nonatomic, weak) UIViewController *viewController;


/**
 视频组件
 */
@property (nonatomic, strong, readonly) UIView *mediaView;

/**
 广告平台logo组件
 */
@property (nonatomic, strong, readonly) UIView *logoView;

/**
 dislike组件
 */
@property (nonatomic, strong, readonly) UIButton *dislikeButton;

/**
 单图广告对应的图片组件
 */
@property (nonatomic, strong, readonly) UIImageView *mainImageView;

/**
 3张小图对应的图片组建leftImageView、midImageView、rightImageView
 */
@property (nonatomic, strong, readonly) UIImageView *leftImageView;
@property (nonatomic, strong, readonly) UIImageView *midImageView;
@property (nonatomic, strong, readonly) UIImageView *rightImageView;

- (instancetype)initWithFrame:(CGRect)frame;

/**
 每次获取物料信息后需要刷新调用refreshData:方法
 */
- (void)refreshData:(WindNativeAd *)nativeAd;

/**
 在物料加载成功方法里获取相关广告信息赋值后，需调用 setClickableViews:绑定点击的View
 */
- (void)setClickableViews:(NSArray<UIView *> *)clickableViews; //for TencentAd

- (void)setPlaceholderImage:(UIImage *)placeholderImage;

/**
 注销数据对象，在 tableView、collectionView 等场景需要复用 WindNativeAdView 时，
 需要在合适的时机，例如 cell 的 prepareForReuse 方法内执行 unregisterDataObject 方法，
 将广告对象与 WindNativeAdView 解绑
 */
- (void)unregisterDataObject;



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
 自定义播放按钮

 @param image 自定义播放按钮图片，不设置为默认图
 @param size 自定义播放按钮大小，不设置为默认大小 44 * 44
 */
//- (void)setPlayButtonImage:(UIImage *)image size:(CGSize)size;

@end


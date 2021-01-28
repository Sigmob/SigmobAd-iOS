//
//  WindSplashAd.h
//  WindSDK
//
//  Created by happyelements on 2018/7/30.
//  Copyright © 2018 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WindSplashAd;

extern NSString * const kSMSplashExtraAdSize;
extern NSString * const kSMSplashExtraRootViewController;

@protocol WindSplashAdDelegate <NSObject>

@optional
/**
 *  开屏广告素材加载成功
 */
- (void)onSplashAdDidLoad:(WindSplashAd *)splashAd;

/**
 *  开屏广告成功展示
 */
-(void)onSplashAdSuccessPresentScreen:(WindSplashAd *)splashAd;

/**
 *  开屏广告展示失败
 */
-(void)onSplashAdFailToPresent:(WindSplashAd *)splashAd withError:(NSError *)error;


/**
 *  开屏广告点击回调
 */
- (void)onSplashAdClicked:(WindSplashAd *)splashAd;


/**
 *  开屏广告点击跳过
 */
- (void)onSplashAdSkiped:(WindSplashAd *)splashAd;

/**
 *  开屏广告将要关闭回调
 */
- (void)onSplashAdWillClosed:(WindSplashAd *)splashAd;

/**
 *  开屏广告关闭回调
 */
- (void)onSplashAdClosed:(WindSplashAd *)splashAd;

@end

@interface WindSplashAd : NSObject

@property (nonatomic,weak) id<WindSplashAdDelegate> delegate;


// If nil, window will not appear on any screen.
// changing the UIWindowScene may be an expensive operation and should not be done in performance-sensitive code
@property(nonatomic, weak) UIWindowScene *windowScene API_AVAILABLE(ios(13.0));

/**
 *  拉取广告超时时间，默认为3秒
 *  详解：拉取广告超时时间，开发者调用loadAd方法以后会立即展示app的启动图，然后在该超时时间内，如果广告拉
 *  取成功，则立马展示开屏广告，否则放弃此次广告展示机会。
 */
@property (nonatomic, assign) int fetchDelay;

/**
 *  取消关闭动画 default = NO
 */
@property (nonatomic, assign) BOOL cancelClosedAnimate;


/**
 *  开屏广告的背景色
 *  可以设置开屏图片来作为开屏加载时的默认图片
 */
@property (nonatomic, copy) UIColor *backgroundColor;

@property (nonatomic,strong, readonly) NSString *placementId;

@property (nonatomic,strong) NSString *userId;

/**
 初始化splash ad对象（如果是加载和播放分开处理，请使用该构造函数）
 @param placementId 广告位ID
 @param extra 各个平台需要的扩展参数，可以根据聚合的平台设置，
 详细参考在线文档：http://docs.sigmob.cn/#/sdk/SDK%E6%8E%A5%E5%85%A5/ios/
 */
- (instancetype)initWithPlacementId:(NSString *)placementId
                              extra:(NSDictionary *)extra;

/**
 *  发起拉取广告请求，只拉取不展示
 *  详解：广告素材及广告图片拉取成功后会回调onSplashAdDidLoad方法，当拉取失败时会回调onSplashAdFailToPresent方法
 */
- (void)loadAd;

/**
 *  展示广告，调用此方法前需调用isAdValid方法判断广告素材是否有效
 *  详解：广告展示成功时会回调onSplashAdSuccessPresentScreen方法，展示失败时会回调onSplashAdFailToPresent方法
 */
- (void)showAdInWindow:(UIWindow *)window withBottomView:(UIView *)bottomView;


/**
 *  广告发起请求并展示在Window中, 同时在屏幕底部设置应用自身的Logo页面
 *  详解：[logo会自动读取应用图标]，请中高度位100，宽度为屏幕宽度
 *
 @param window 容器
 @param title 设置标题
 @param desc 设置描述信息
 */
- (void)showAdInWindow:(UIWindow *)window title:(NSString *)title desc:(NSString *)desc;



/**
 * 返回广告是否可展示
 * 对于并行请求，在调用showAdInWindow前时需判断下
 * @return 当广告已经加载完成且未曝光时，为YES，否则为NO
 */
- (BOOL)isAdReady;


/**
 初始化splash ad对象（如果是加载后自动播放，请使用该构造函数）
 @param placementId 广告位ID
 */
- (instancetype)initWithPlacementId:(NSString *)placementId;

/**
 *  广告发起请求并展示在Window中
 *  详解：[可选]发起拉取广告请求,并将获取的广告以全屏形式展示在传入的Window参数中
 */
-(void)loadAdAndShow;


/**
 *  广告发起请求并展示在Window中, 同时在屏幕底部设置应用自身的Logo页面或是自定义View
 *  详解：[可选]发起拉取广告请求,并将获取的广告以半屏形式展示在传入的Window的上半部，剩余部分展示传入的bottomView
 *       请注意bottomView需设置好宽高，所占的空间不能过大，并保证广告界面的高度大于360
 *  @param bottomView 自定义底部View，可以在此View中设置应用Logo
 *
 */
-(void)loadAdAndShowWithBottomView:(UIView *)bottomView;



/**
 *  广告发起请求并展示在Window中, 同时在屏幕底部设置应用自身的Logo页面
 *  详解：[logo会自动读取应用图标]
 *
 @param title 设置标题
 @param description 设置描述信息
 */
- (void)loadADAndShowWithTitle:(NSString *)title description:(NSString *)description;

@end

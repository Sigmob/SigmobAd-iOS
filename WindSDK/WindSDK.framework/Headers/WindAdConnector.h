//
//  WindAdConnector.h
//  WindSDK
//
//  Created by Codi on 2021/1/7.
//  Copyright © 2021 Codi. All rights reserved.
//

#ifndef WindAdConnector_h
#define WindAdConnector_h

#import <Foundation/Foundation.h>

@class WADStrategy;
@class WindDislikeWords;


@protocol WindAdConnector <NSObject>


@optional

/**
 *
 *  初始化成功
 */
- (void)adapterDidSuccessedSetUp;

/**
 *  初始化失败
 */
- (void)adapterDidFailToSetUp:(NSError *)error;

/**
 *  广告加载成功
 */
- (void)adapterDidAdLoadSuccessed:(WADStrategy *)strategy;

/**
 *  广告加载失败
 */
- (void)adapterDidAdLoadFailed:(WADStrategy *)strategy error:(NSError *)error;


//**************************** RewardVideo intersitital splash ****************************

/**
 *  广告成功展示
 */
-(void)adapterDidSuccessPresentScreen:(WADStrategy *)strategy;

/**
 *  广告展示失败
 */
-(void)adapterDidFailToPresent:(WADStrategy *)strategy error:(NSError *)error ;

/**
 *  广告点击回调
 */
- (void)adapterDidClicked:(WADStrategy *)strategy;


/**
 *  广告点击跳过
 */
- (void)adapterDidSkiped:(WADStrategy *)strategy;

/**
 *  广告将要关闭回调
 */
- (void)adapterDidWillClosed:(WADStrategy *)strategy options:(NSDictionary *)options;

/**
 *  广告关闭回调
 */
- (void)adapterDidClosed:(WADStrategy *)strategy options:(NSDictionary *)options;


//************************************************** Banner **************************************************
/**
 *  一个新的广告配展示（针对Banner有效）
 */

- (void)adapterAdViewWillBecomeVisible:(WADStrategy *)strategy;



/**
 This method is called when the user clicked dislike button and chose dislike reasons.
 @param filterwords : the array of reasons for dislike.
 */
- (void)adapterDisliked:(WADStrategy *)strategy reason:(NSArray<WindDislikeWords *> *)filterwords;


@end

#endif /* WindAdConnector_h */

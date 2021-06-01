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
@class WindAdRequest;



@protocol WindAdConnector <NSObject>

@required

- (WindAdRequest *)adRequest;

- (NSString *)loadId;

@optional

/**
 *
 *  初始化成功
 */
- (void)adapterDidSuccessedSetUp;

/**
 *  初始化失败
 */
- (void)adapterDidFailToSetUp:(WADStrategy *)strategy error:(NSError *)error;

/**
 *  广告加载成功
 */
- (void)adapterDidAdLoadSuccessed:(WADStrategy *)strategy;

/**
 *  广告加载失败
 */
- (void)adapterDidAdLoadFailed:(WADStrategy *)strategy error:(NSError *)error;

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
 *  广告视频部分播放完成
 *  @param error : error代表播放错误
 */
- (void)adapterAdDidPlayFinish:(WADStrategy *)strategy didFailWithError:(NSError *)error;



@end

#endif /* WindAdConnector_h */

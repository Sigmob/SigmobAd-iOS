//
//  WindNativeAdsManager.h
//  WindSDK
//
//  Created by Codi on 2021/7/14.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WindAdRequest;
@class WindNativeAd;
@class WindNativeAdsManager;

@protocol WindNativeAdsManagerDelegate <NSObject>

@optional

- (void)nativeAdsManagerSuccessToLoad:(WindNativeAdsManager *)adsManager;

- (void)nativeAdsManager:(WindNativeAdsManager *)adsManager didFailWithError:(NSError *)error;

@end


@interface WindNativeAdsManager : NSObject

@property (nonatomic, weak) id<WindNativeAdsManagerDelegate> delegate;

@property (nonatomic, strong, readonly) NSString *placementId;

- (instancetype)initWithRequest:(WindAdRequest *)request;

/**
 It is recommended to request no more than 3 ads.
 */
- (void)loadAdDataWithCount:(NSInteger)count;

/**
 Get all ads when call methord: nativeAdsManagerSuccessToLoad
 */
- (NSArray<WindNativeAd *> *)getAllNativeAds;

@end


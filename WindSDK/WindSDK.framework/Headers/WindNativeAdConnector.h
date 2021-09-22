//
//  WindNativeAdConnector.h
//  WindSDK
//
//  Created by Codi on 2021/7/26.
//  Copyright © 2021 Codi. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <WindSDK/WindAdBaseConnector.h>
#import <WindSDK/WindMediationNativeAd.h>


@class WindNativeAd;

@protocol WindNativeAdConnector <WindAdBaseConnector>


@required

- (WindAdRequest *)adRequest;

- (NSString *)loadId;

- (NSUInteger)loadAdCount;

@optional
/**
 *  广告加载失败
 */
- (void)adapterDidAdLoadFailed:(WADStrategy *)strategy error:(NSError *)error;

- (void)adapterDidAdLoadSuccess:(WADStrategy *)strategy nativeAdList:(NSArray<id<WindMediationNativeAd>> *)nativeAdDataArray;

@end

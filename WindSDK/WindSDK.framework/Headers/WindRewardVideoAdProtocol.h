//
//  WindRewardVideoAdProtocol.h
//  WindSDK
//
//  Created by Codi on 2020/5/20.
//  Copyright © 2020 Codi. All rights reserved.
//

#ifndef WindRewardVideoAdProtocol_h
#define WindRewardVideoAdProtocol_h
#import "WindProtocol.h"

@class WindRewardInfo;

@protocol WindRewardVideoAdConnector;

// Your adapter must conform to this protocol to provide reward based video ads.
@protocol WindRewardVideoAdAdapter<WindAdAdapter>

@required

- (instancetype)initWithWADRewardVideoAdConnector:(id<WindRewardVideoAdConnector>)connector;

- (void)loadAd:(NSString *)placementId strategy:(WADStrategy *)strategy;

@end


@protocol WindRewardVideoAdConnector<WindAdRequestProtocol>

@optional

- (void)adapterDidSetUpRewardVideoAd:(id<WindRewardVideoAdAdapter>)rewardVideoAdAdapter;

- (void)adapter:(id<WindRewardVideoAdAdapter>)rewardVideoAdAdapter didFailToSetUpRewardVideoAd:(NSError *)error;

- (void)adapterDidAdClick:(id<WindRewardVideoAdAdapter>)adapter placementId:(NSString *)placementId strategy:(WADStrategy *)stragegy;

- (void)adapterDidReceiveRewardVideoAd:(id<WindRewardVideoAdAdapter>)rewardVideoAdAdapter placementId:(NSString *)placementId strategy:(WADStrategy *)stragegy;

- (void)adapterDidStartPlayingRewardVideoAd:(id<WindRewardVideoAdAdapter>)rewardVideoAdAdapter placementId:(NSString *)placementId strategy:(WADStrategy *)stragegy;

- (void)adapterDidCloseRewardVideoAd:(id<WindRewardVideoAdAdapter>)rewardVideoAdAdapter rewardInfo:(WindRewardInfo *)info placementId:(NSString *)placementId strategy:(WADStrategy *)stragegy;

- (void)adapter:(id<WindRewardVideoAdAdapter>)rewardVideoAdAdapter didFailToLoadRewardVideoAdwithError:(NSError *)error placementId:(NSString *)placementId strategy:(WADStrategy *)stragegy;

- (void)adapter:(id<WindRewardVideoAdAdapter>)rewardVideoAdAdapter didPlayRewardVideoAdwithError:(NSError *)error placementId:(NSString *)placementId strategy:(WADStrategy *)stragegy;

- (void)adapterDidCompletePlayingRewardVideoAd:(id<WindRewardVideoAdAdapter>)rewardVideoAdAdapter placementId:(NSString *)placementId strategy:(WADStrategy *)stragegy;

- (void)adapterRewardedVideoAdServerDidSucceed:(id<WindRewardVideoAdAdapter>)rewardVideoAdAdapter placementId:(NSString *)placementId strategy:(WADStrategy *)stragegy;

- (void)adapterRewardedVideoAdServerDidFail:(id<WindRewardVideoAdAdapter>)rewardVideoAdAdapter placementId:(NSString *)placementId strategy:(WADStrategy *)stragegy;

@end


#endif /* WindRewardVideoAdProtocol_h */

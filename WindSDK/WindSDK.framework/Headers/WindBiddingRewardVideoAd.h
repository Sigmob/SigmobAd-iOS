//
//  WindBiddingRewardVideoAd.h
//  WindSDK
//
//  Created by Codi on 2021/6/8.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WindAdRequest;
@class WindRewardInfo;
@class WindBiddingRewardVideoAd;

@protocol WindBiddingRewardVideoAdDelegate<NSObject>

/**
 This method is called when video ad material loaded successfully.
 */
- (void)rewardVideoAdDidLoad:(WindBiddingRewardVideoAd *)rewardVideoAd;

/**
 This method is called when video ad materia failed to load.
 @param error : the reason of error
 */
- (void)rewardVideoAdDidLoad:(WindBiddingRewardVideoAd *)rewardVideoAd didFailWithError:(NSError *)error;

/**
 This method is called when video ad slot will be showing.
 */
- (void)rewardVideoAdWillVisible:(WindBiddingRewardVideoAd *)rewardVideoAd;

/**
 This method is called when video ad slot has been shown.
 */
- (void)rewardVideoAdDidVisible:(WindBiddingRewardVideoAd *)rewardVideoAd;

/**
 This method is called when video ad is clicked.
 */
- (void)rewardVideoAdDidClick:(WindBiddingRewardVideoAd *)rewardVideoAd;

/**
 This method is called when video ad is clicked skip button.
 */
- (void)rewardVideoAdDidClickSkip:(WindBiddingRewardVideoAd *)rewardVideoAd;

/**
 This method is called when video ad is about to close.
 */
- (void)rewardVideoAdDidClose:(WindBiddingRewardVideoAd *)rewardVideoAd reward:(WindRewardInfo *)reward;

/**
 This method is called when video ad play completed or an error occurred.
 @param error : the reason of error
 */
- (void)rewardVideoAdDidPlayFinish:(WindBiddingRewardVideoAd *)rewardVideoAd didFailWithError:(NSError *)error;

/**
 This method is called when return ads from sigmob ad server.
 */
- (void)rewardVideoAdServerResponse:(WindBiddingRewardVideoAd *)rewardVideoAd isFillAd:(BOOL)isFillAd;



@end

@interface WindBiddingRewardVideoAd : NSObject

@property (nonatomic, weak) id<WindBiddingRewardVideoAdDelegate> delegate;

@property (nonatomic, strong, readonly) NSString *placementId;

@property (nonatomic, getter=isAdReady, readonly) BOOL ready;


- (instancetype)initWithPlacementId:(NSString *)placementId request:(WindAdRequest *)request;

- (void)loadAdData:(NSString *)bidToken;

/**
 Display video ad.
 @param rootViewController : root view controller for displaying ad.
 @param extras : Extended parameters for displaying ad.
 */
- (void)showAdFromRootViewController:(UIViewController *)rootViewController
                             options:(NSDictionary<NSString *, NSString *> *)extras;

@end

//
//  WindBiddingIntersititialAd.h
//  WindSDK
//
//  Created by Codi on 2021/6/4.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WindAdRequest;
@class WindBiddingIntersititialAd;


@protocol WindBiddingIntersititialAdDelegate<NSObject>

/**
 This method is called when video ad material loaded successfully.
 */
- (void)intersititialAdDidLoad:(WindBiddingIntersititialAd *)intersititialAd;

/**
 This method is called when video ad materia failed to load.
 @param error : the reason of error
 */
- (void)intersititialAdDidLoad:(WindBiddingIntersititialAd *)intersititialAd didFailWithError:(NSError *)error;

/**
 This method is called when video ad slot will be showing.
 */
- (void)intersititialAdWillVisible:(WindBiddingIntersititialAd *)intersititialAd;

/**
 This method is called when video ad slot has been shown.
 */
- (void)intersititialAdDidVisible:(WindBiddingIntersititialAd *)intersititialAd;

/**
 This method is called when video ad is clicked.
 */
- (void)intersititialAdDidClick:(WindBiddingIntersititialAd *)intersititialAd;

/**
 This method is called when video ad is clicked skip button.
 */
- (void)intersititialAdDidClickSkip:(WindBiddingIntersititialAd *)intersititialAd;

/**
 This method is called when video ad is about to close.
 */
- (void)intersititialAdDidClose:(WindBiddingIntersititialAd *)intersititialAd;

/**
 This method is called when video ad play completed or an error occurred.
 @param error : the reason of error
 */
- (void)intersititialAdDidPlayFinish:(WindBiddingIntersititialAd *)intersititialAd didFailWithError:(NSError *)error;

/**
 This method is called when return ads from sigmob ad server.
 */
- (void)intersititialAdServerResponse:(WindBiddingIntersititialAd *)intersititialAd isFillAd:(BOOL)isFillAd;



@end


@interface WindBiddingIntersititialAd : NSObject

@property (nonatomic, weak) id<WindBiddingIntersititialAdDelegate> delegate;

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

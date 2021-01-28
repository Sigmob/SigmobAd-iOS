//
//  WindInterstitialAdProtocol.h
//  WindSDK
//
//  Created by happyelements on 2019/11/21.
//  Copyright © 2019 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WindProtocol.h"


@class WADStrategy;

@protocol WindInterstitialAdAdapter;

@protocol WindInterstitialAdConnector<WindAdRequestProtocol>

@required

- (void)adapterDidSetUpInterstitialAd:(id<WindInterstitialAdAdapter>)interstitialAdAdapter;
- (void)adapter:(id<WindInterstitialAdAdapter>)interstitialAdAdapter didFailToSetUpInterstitialAd:(NSError *)error;
- (void)adapterDidReceiveAd:(id<WindInterstitialAdAdapter>)interstitialAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapter:(id<WindInterstitialAdAdapter>)interstitialAdAdapter didFailToLoadInterstitialAdWithError:(NSError *)error strategy:(WADStrategy *)stragegy;
- (void)adapterDidPresentAd:(id<WindInterstitialAdAdapter>)interstitialAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapterDidClickAd:(id<WindInterstitialAdAdapter>)interstitialAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapterDidSkipAd:(id<WindInterstitialAdAdapter>)interstitialAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapterDidCloseAd:(id<WindInterstitialAdAdapter>)interstitialAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapterDidVideoPlayEnd:(id<WindInterstitialAdAdapter>)interstitialAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapter:(id<WindInterstitialAdAdapter>)interstitialAdAdapter didVideoPlayError:(NSError *)error strategy:(WADStrategy *)stragegy;
- (void)adapterDidAdServerSuccess:(id<WindInterstitialAdAdapter>)interstitialAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapterDidAdServerFailed:(id<WindInterstitialAdAdapter>)interstitialAdAdapter strategy:(WADStrategy *)stragegy;

@end

//******************************************************************************************************

@protocol WindInterstitialAdAdapter <WindAdAdapter>

@required

- (instancetype)initWithInterstitialAdConnector:(id<WindInterstitialAdConnector>)connector;

- (void)loadAd:(NSString *)placementId strategy:(WADStrategy *)strategy;

@end



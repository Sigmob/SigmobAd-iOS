//
//  WindFullscreenVideoAdProtocol.h
//  WindSDK
//
//  Created by happyelements on 2019/11/21.
//  Copyright © 2019 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WindProtocol.h"


@class WADStrategy;

@protocol WindFullscreenVideoAdAdapter;

@protocol WindFullscreenVideoAdConnector<WindAdRequestProtocol>

@required

- (void)adapterDidSetUpFullscreenVideoAd:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter;
- (void)adapter:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter didFailToSetUpFullscreenVideoAd:(NSError *)error;
- (void)adapterDidReceiveAd:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapter:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter didFailToLoadFullscreenVideoAdWithError:(NSError *)error strategy:(WADStrategy *)stragegy;
- (void)adapterDidPresentAd:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapterDidClickAd:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapterDidSkipAd:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapterDidCloseAd:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapterDidVideoPlayEnd:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapter:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter didVideoPlayError:(NSError *)error strategy:(WADStrategy *)stragegy;
- (void)adapterDidAdServerSuccess:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter strategy:(WADStrategy *)stragegy;
- (void)adapterDidAdServerFailed:(id<WindFullscreenVideoAdAdapter>)fullscreenVideoAdAdapter strategy:(WADStrategy *)stragegy;

@end

//******************************************************************************************************

@protocol WindFullscreenVideoAdAdapter <WindAdAdapter>

@required

- (instancetype)initWithFullscreenVideoAdConnector:(id<WindFullscreenVideoAdConnector>)connector;

- (void)loadAd:(NSString *)placementId strategy:(WADStrategy *)strategy;

@end



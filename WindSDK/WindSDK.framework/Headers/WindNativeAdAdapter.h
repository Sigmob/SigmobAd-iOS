//
//  WindNativeAdAdapter.h
//  WindSDK
//
//  Created by Codi on 2021/7/26.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WindSDK/WindAdBaseAdapter.h>

@class WADStrategy;
@protocol WindAdBaseAdapter;
@protocol WindNativeAdConnector;

@protocol WindNativeAdAdapter <WindAdBaseAdapter>

- (instancetype)initWithAdConnector:(id<WindNativeAdConnector>)connector;

- (void)loadAd:(WADStrategy *)strategy;

@end

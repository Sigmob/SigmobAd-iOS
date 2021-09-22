//
//  WindAdAdapter.h
//  WindSDK
//
//  Created by Codi on 2021/1/7.
//  Copyright © 2021 Codi. All rights reserved.
//

#ifndef WindAdAdapter_h
#define WindAdAdapter_h

#import <UIKit/UIKit.h>
#import <WindSDK/WindAdBaseAdapter.h>

@class WADStrategy;
@protocol WindAdConnector;


@protocol WindAdAdapter <WindAdBaseAdapter>

@required

- (instancetype)initWithAdConnector:(id<WindAdConnector>)connector;

- (BOOL)isReadyWithStrategy:(WADStrategy *)strategy;

@optional

- (void)destory;

- (void)loadAd:(WADStrategy *)strategy;

- (void)presentAdWithViewController:(UIViewController *)controller
                           strategy:(WADStrategy *)strategy
                            options:(NSDictionary *)options;

@end





#endif /* WindAdAdapter_h */

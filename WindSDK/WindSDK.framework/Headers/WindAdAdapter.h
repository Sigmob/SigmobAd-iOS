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

@class WADStrategy;
@protocol WindAdConnector;

@protocol WindAdAdapter <NSObject>

@required
- (instancetype)initWithAdConnector:(id<WindAdConnector>)connector;

+ (BOOL)isInitilized;

- (void)setup:(WADStrategy *)strategy options:(NSDictionary *)options;

- (BOOL)isReadyWithStrategy:(WADStrategy *)strategy;

- (NSUInteger)adapterVersion;

- (NSString *)sdkVersion;

@optional

- (void)destory;

- (void)loadAd:(WADStrategy *)strategy;

- (void)presentAdWithViewController:(UIViewController *)controller
                           strategy:(WADStrategy *)strategy
                            options:(NSDictionary *)options;

@end


#endif /* WindAdAdapter_h */

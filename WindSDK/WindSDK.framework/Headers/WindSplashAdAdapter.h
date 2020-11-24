//
//  WindSplashAdAdapter.h
//  WindSDK
//
//  Created by happyelements on 2018/8/1.
//  Copyright © 2018 Codi. All rights reserved.
//


#import <UIKit/UIKit.h>

@class WADStrategy;
@protocol WindSplashAdConnector;
@protocol WindSplashAdAdapter<NSObject>

@required

- (instancetype)initWithWADSplashAdConnector:(id<WindSplashAdConnector>)connector;

- (void)setup:(NSDictionary *)options;

-(void)loadAdAndShow:(WADStrategy *)strategy logoView:(UIView *)bottomView options:(NSDictionary *)options;


-(void)show:(WADStrategy *)strategy
     window:(UIWindow *)window
bottomView:(UIView *)bottomView
    options:(NSDictionary *)options;


- (BOOL)isReadyWithStrategy:(WADStrategy *)strategy;

- (NSUInteger)adapterVersion;

- (NSString *)sdkVersion;


@end

//
//  WindSplashAdAdapter.h
//  WindSDK
//
//  Created by happyelements on 2018/8/1.
//  Copyright © 2018 Codi. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "WindAdAdapter.h"

@class WADStrategy;
@protocol WindSplashAdConnector;

@protocol WindSplashAdAdapter<WindAdAdapter>

-(void)loadAdAndShow:(WADStrategy *)strategy
            logoView:(UIView *)bottomView
             options:(NSDictionary *)options;

-(void)show:(WADStrategy *)strategy
     window:(UIWindow *)window
bottomView:(UIView *)bottomView
    options:(NSDictionary *)options;



@end

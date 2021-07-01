//
//  Header.h
//  WindSDK
//
//  Created by happyelements on 2018/8/1.
//  Copyright © 2018 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WADStrategy;

@protocol WindSplashAdConnector<WindAdConnector>

@required
- (UIViewController *)showInWindowTopViewController:(UIWindow *)window;

@optional
/**
 *  广告即将关闭
 */
- (void)adapterWillClose:(WADStrategy *)strategy;
/**
 *  广告已关闭
 */
- (void)adapterDidClose:(WADStrategy *)strategy;

@end

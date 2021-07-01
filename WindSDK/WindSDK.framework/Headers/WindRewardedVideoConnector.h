//
//  WindRewardedVideoConnector.h
//  WindSDK
//
//  Created by Codi on 2021/4/20.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WindRewardInfo;


@protocol WindRewardedVideoConnector <WindAdConnector>


/**
 *  广告关闭回调
 */
- (void)adapterDidClosed:(WADStrategy *)strategy reward:(WindRewardInfo *)reward;



@end

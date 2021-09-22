//
//  WindAdBaseConnector.h
//  WindSDK
//
//  Created by Codi on 2021/7/26.
//  Copyright © 2021 Codi. All rights reserved.
//

#ifndef WindAdBaseConnector_h
#define WindAdBaseConnector_h

#import <Foundation/Foundation.h>
@class WADStrategy;

@protocol WindAdBaseConnector <NSObject>

/**
 *
 *  初始化成功
 */
- (void)adapterDidSuccessedSetUp;

/**
 *  初始化失败
 */
- (void)adapterDidFailToSetUp:(WADStrategy *)strategy error:(NSError *)error;

@end

#endif

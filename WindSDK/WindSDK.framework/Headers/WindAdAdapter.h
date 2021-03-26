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
#import "WindAdConnector.h"

@class WADStrategy;

@protocol WindAdBaseAdappter <NSObject>

@optional
- (instancetype)initWithAdConnector:(id<WindAdConnector>)connector;

@required
- (void)setup:(NSDictionary *)options;

- (BOOL)isReadyWithStrategy:(WADStrategy *)strategy;

- (NSUInteger)adapterVersion;

- (NSString *)sdkVersion;

@end


#endif /* WindAdAdapter_h */

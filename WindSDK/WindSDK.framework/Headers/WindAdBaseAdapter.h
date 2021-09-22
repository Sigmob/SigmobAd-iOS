//
//  WindAdBaseAdapter.h
//  WindSDK
//
//  Created by Codi on 2021/7/26.
//  Copyright © 2021 Codi. All rights reserved.
//

@class WADStrategy;

@protocol WindAdBaseAdapter <NSObject>

+ (BOOL)isInitilized;

- (void)setup:(WADStrategy *)strategy options:(NSDictionary *)options;

- (NSUInteger)adapterVersion;

- (NSString *)sdkVersion;


@end

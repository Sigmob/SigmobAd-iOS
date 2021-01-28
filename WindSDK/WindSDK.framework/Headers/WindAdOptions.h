//
//  WindAdOptions.h
//  WindSDK
//
//  Created by happyelements on 2018/4/8.
//  Copyright © 2018 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WindAdOptions : NSObject

/// Sigmob平台申请的appId
@property (copy, nonatomic, readonly) NSString* appId;
/// Sigmob平台申请的appKey
@property (copy, nonatomic, readonly) NSString* appKey;
/// 声明是否使用的是聚合 default = NO
@property (nonatomic, assign, readonly) BOOL usedMediation;


- (instancetype)initWithAppId:(NSString *)appId appKey:(NSString *)appKey usedMediation:(BOOL)usedMediation;

// 非单例
+ (instancetype)options NS_UNAVAILABLE;;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

//
//  WADStrategyOptions.h
//  WindSDK
//
//  Created by happyelements on 2018/4/9.
//  Copyright © 2018 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SMGCDTimer;

static NSString *const WindAdsSDKChannelSigmob = @"sigmob";


@interface WADOptions : NSObject
@property (nonatomic,copy) NSString *appId;
@property (nonatomic,copy) NSString *apiKey;
@property (nonatomic,copy) NSString *placementId;
@property (nonatomic,copy) NSString *unitId;
@property (nonatomic,copy) NSString *repApiKey;
@property (nonatomic,copy) NSString *repApiSecret;
@property (nonatomic,copy) NSString *templateType;
@property (nonatomic,copy) NSString *publisherId;

@end


@interface WADStrategy : NSObject
@property (nonatomic,strong) NSError *error;
@property (nonatomic,copy) NSString *placementId;
@property (nonatomic,copy) NSString *adapterClass;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,strong) WADOptions *options;
@property (nonatomic,copy) NSString *loadId;
@property (nonatomic,copy) NSString *channelId;
/** 渠道广告素材有效期。默认3600s过期，0代表不设置过期不展示逻辑，最小颗粒度为 900s（15 min） */
@property(nonatomic, readwrite) uint32_t adExpireTime;
@property(nonatomic, readwrite) uint32_t adReadyTime;
@property (nonatomic, strong) SMGCDTimer *gcdTimer;





@end

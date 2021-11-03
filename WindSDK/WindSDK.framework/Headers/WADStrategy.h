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
@property (nonatomic, copy) NSString *playDirection;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *bidToken;

@property (nonatomic, copy) NSString *countdown;
@property (nonatomic, copy) NSString *allowSkip;
@property (nonatomic, copy) NSString *subType;
@property (nonatomic, copy) NSString *ratio;
@property (nonatomic, copy) NSString *autoPlayPolicy;
@property (nonatomic, copy) NSString *autoPlayMuted;
@property (nonatomic, copy) NSString *detailPageMuted;
@property (nonatomic, copy) NSString *minVideoDuration;
@property (nonatomic, copy) NSString *maxVideoDuration;
@property (nonatomic, copy) NSString *clickType;//0按钮点击；1全屏点击




@end


@interface WADStrategy : NSObject
@property (nonatomic,strong) NSError *error;
@property (nonatomic,copy) NSString *placementId;
@property (nonatomic,copy) NSString *adapterClass;
@property (nonatomic,copy) NSString *name;
@property (nonatomic, assign) NSUInteger adType;
@property (nonatomic,strong) WADOptions *options;
@property (nonatomic,copy) NSString *loadId;
@property(nonatomic, assign) uint32_t channelId;
@property(nonatomic, assign) BOOL enableAbTest;
@property(nonatomic, readwrite) uint32_t abFlag;
@property (nonatomic, copy) NSString *strategyId;
@property(nonatomic, readwrite) uint32_t elementId;
@property (nonatomic, assign) NSUInteger index;
/** 渠道广告素材有效期。默认3600s过期，0代表不设置过期不展示逻辑，最小颗粒度为 900s（15 min） */
@property(nonatomic, readwrite) uint32_t adExpireTime;
@property(nonatomic, readwrite) uint64_t adReadyTime;
@property(nonatomic, readwrite) uint32_t singleChannelTimeout;
@property (nonatomic, strong) SMGCDTimer *gcdTimer;

- (BOOL)isExpired;


@end

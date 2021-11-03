//
//  WindAds.h
//  WindSDK
//
//  Created by happyelements on 2018/4/8.
//  Copyright © 2018 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WindSDK/WindAdOptions.h>

extern NSString * const WindAdSceneName;
extern NSString * const WindAdInterval;
extern NSString * const WindAdSize;
extern NSString * const WindAdRootViewController;

typedef NS_ENUM(NSUInteger, WindLogLevel){
    WindLogLevelError=8,
    WindLogLevelWarning=6,
    WindLogLevelInformation=4,
    WindLogLevelDebug=2
};

typedef NS_ENUM (NSInteger, WindCCPAStatus) {
    WindCCPAUnknown = 0,
    WindCCPAAccepted,
    WindCCPADenied,
};


typedef NS_ENUM (NSInteger, WindConsentStatus) {
    WindConsentUnknown = 0,
    WindConsentAccepted,
    WindConsentDenied,
};

typedef NS_ENUM (NSInteger, WindAgeRestrictedStatus) {
    WindAgeRestrictedStatusUnknow = 0,
    WindAgeRestrictedStatusYES, //年龄受限制
    WindAgeRestrictedStatusNO,  //成年人，年龄不受限制
};

typedef enum : NSUInteger {
    WindAdult = 0,
    WindChildren = 1,
} WindAdultState;

typedef enum : NSUInteger {
    WindPersonalizedAdvertisingOn = 0,
    WindPersonalizedAdvertisingOff = 1,
} WindPersonalizedAdvertisingState;


typedef void(^WindAdDebugCallBack)(NSString *msg, WindLogLevel level);

@interface WindAds : NSObject

+ (NSString *)sdkVersion;

// Initialize Wind Ads SDK
+ (void) startWithOptions:(WindAdOptions *)options;

/**
 *   DeBug开关显示
 *
 *  @param enable true 开启debug，false 关闭debug
 */
+ (void)setDebugEnable:(BOOL)enable;


/**
 *   自定义debug 内容回调显示
 *
 *  @param callBack debugBlock，若不设置则在Xcode debug中显示，
 */
+ (void)setDebugCallBack:(WindAdDebugCallBack)callBack;

/// 提供新的资源包，需要把sigmob.bundle的文件放入到新的bundle内。
/// @param name bundle名称（前缀）
+ (void)setNewBundleName:(NSString *)name;


#pragma mark - CCPA SUPPORT
+ (void)updateCCPAStatus:(WindCCPAStatus)status;

+ (WindCCPAStatus)getCCPAStatus;



#pragma mark - GDPR SUPPORT
/**************************  GDPR  *********************************/
+ (WindConsentStatus)getUserGDPRConsentStatus;

+ (void)setUserGDPRConsentStatus:(WindConsentStatus)status;

#pragma mark - Age SUPPORT
/**************************  Age *********************************/
+ (WindAgeRestrictedStatus)getAgeRestrictedStatus;

+ (void)setIsAgeRestrictedUser:(WindAgeRestrictedStatus)status;

#pragma mark - Adult SUPPORT
/**************************  设置是否是成年人 *********************************/
/// WindAdult: 成年人， WindChildren: 未成年人 default=WindAdult
+ (void)setAdult:(WindAdultState)state;
+ (WindAdultState)getAdultState;


#pragma mark - PersonalizedAdvertisin SUPPORT
/// WindPersonalizedAdvertisingOn: 开启个性化推荐， WindPersonalizedAdvertisingOff: 关闭个性化推荐, default=WindPersonalizedAdvertisingOn
+ (void)setPersonalizedAdvertising:(WindPersonalizedAdvertisingState)state;
+ (WindPersonalizedAdvertisingState)getPersonalizedAdvertisingState;


+ (NSUInteger)getUserAge;
+ (void)setUserAge:(NSUInteger)age;

@end


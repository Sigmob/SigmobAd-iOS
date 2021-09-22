//
//  WindMediationNativeAd.h
//  WindSDK
//
//  Created by Codi on 2021/7/27.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WADStrategy;

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger, WindFeedADMode) {
    WindFeedADModeSmallImage = 2,
    WindFeedADModeLargeImage = 3,
    WindFeedADModeGroupImage = 4,
    WindFeedAdModeVideo = 14,
    WindFeedAdModeVideoPortrait = 15,
    WindFeedAdModeVideoLandSpace = 16,
};


@protocol WindMediationNativeAd <NSObject>

/// Title.
@property (nonatomic, copy) NSString *title;

/// Desc.
@property (nonatomic, copy) NSString *desc;

/// Icon image.
@property (nonatomic, copy) NSString *iconUrl;

/// Text that encourages user to take some action with the ad. For example "Install".
@property (nonatomic, copy) NSString *callToAction;

/// App store rating (0 to 5).
@property (nonatomic, assign) double rating;

@property (nonatomic, assign) WindFeedADMode adMode;

/// Native view class string.
@property (nonatomic, copy) NSString *nativeViewClass;

@property (nonatomic, weak) id adLoader;

@property (nonatomic, strong) WADStrategy *strategy;

@end

NS_ASSUME_NONNULL_END

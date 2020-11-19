//
//  WindProtocol.h
//  WindSDK
//
//  Created by Codi on 2020/5/19.
//  Copyright © 2020 Codi. All rights reserved.
//

#ifndef WindProtocol_h
#define WindProtocol_h

#import <UIKit/UIKit.h>

@class WindAdRequest;
@class WADStrategy;

@protocol WindAdRequestProtocol<NSObject>

@optional

- (NSDictionary *)parametes;

- (NSDictionary *)parametes:(NSString *)key;

- (WindAdRequest *)request:(NSString *)key;

@end


@protocol WindAdAdapter<NSObject>

@required

- (void)setup:(NSDictionary *)options;


@optional

- (BOOL)isReadyWithStrategy:(WADStrategy *)strategy;

- (NSString *)sdkVersion;

- (void)presentAdWithViewController:(UIViewController *)controller
                           strategy:(WADStrategy *)strategy
                        placementId:(NSString *)placementId
                            options:(NSDictionary *)options;

@end



#endif /* WindProtocol_h */

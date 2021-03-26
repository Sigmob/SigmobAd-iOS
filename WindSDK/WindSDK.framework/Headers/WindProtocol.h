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
#import "WindAdAdapter.h"

@class WindAdRequest;
@class WADStrategy;

@protocol WindAdRequestProtocol<NSObject>

@optional

- (NSDictionary *)parametes;

- (NSDictionary *)parametes:(NSString *)key;

- (WindAdRequest *)request:(NSString *)key;

@end


@protocol WindVideoAdAdapter<WindAdBaseAdappter>

@required

- (void)loadAd:(NSString *)placementId strategy:(WADStrategy *)strategy;

- (void)presentAdWithViewController:(UIViewController *)controller
                           strategy:(WADStrategy *)strategy
                        placementId:(NSString *)placementId
                            options:(NSDictionary *)options;

@end



#endif /* WindProtocol_h */

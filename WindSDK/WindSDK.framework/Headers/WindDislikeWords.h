//
//  WindDislikeWords.h
//  WindSDK
//
//  Created by Codi on 2021/1/8.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WindDislikeCustomEvent;

@interface WindDislikeWords : NSObject

@property (nonatomic, copy, readonly) NSString *dislikeId;
@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSArray<WindDislikeWords *> *options;

- (instancetype)initWithDislikAd:(id<WindDislikeCustomEvent>)dislike;

@end


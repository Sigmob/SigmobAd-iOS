//
//  WindSDKDefines.h
//  WindSDK
//
//  Created by Codi on 2021/7/28.
//  Copyright © 2021 Codi. All rights reserved.
//

typedef NS_ENUM(NSUInteger, WindMediaPlayerStatus) {
    WindMediaPlayerStatusInitial = 0,         // 初始状态
    WindMediaPlayerStatusLoading = 1,         // 加载中
    WindMediaPlayerStatusStarted = 2,         // 开始播放
    WindMediaPlayerStatusPaused = 3,          // 用户行为导致暂停
    WindMediaPlayerStatusError = 4,           // 播放出错
    WindMediaPlayerStatusStoped = 5,          // 播放停止
};

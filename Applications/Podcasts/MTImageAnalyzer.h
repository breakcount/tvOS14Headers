//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class NSCache;

@interface MTImageAnalyzer : MTSingleton
{
    NSCache *_memoryCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100094ca8
- (id)colorThemeForArtwork:(id)arg1;	// IMP=0x0000000100094b1c
- (id)addImage:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000947f0
- (id)colorThemeForPodcastUuid:(id)arg1;	// IMP=0x0000000100094474
- (id)init;	// IMP=0x0000000100094408

@end


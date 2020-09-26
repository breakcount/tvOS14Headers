//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPCachingManager.h"

@class NSSet, TVPOneupView;
@protocol TVPOneupViewCachingManagerDataSource;

@interface TVPOneupViewCachingManager : TVPCachingManager
{
    TVPOneupView *_oneupView;	// 8 = 0x8
    id <TVPOneupViewCachingManagerDataSource> _dataSource;	// 16 = 0x10
    NSSet *_previousPreheatAssets;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010002a5ac
@property(retain, nonatomic) NSSet *previousPreheatAssets; // @synthesize previousPreheatAssets=_previousPreheatAssets;
@property(nonatomic) __weak id <TVPOneupViewCachingManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) TVPOneupView *oneupView; // @synthesize oneupView=_oneupView;
- (void)_updateCachedAssets;	// IMP=0x000000010002a080
- (void)updatePrefetchedAssets;	// IMP=0x000000010002a074
- (id)autoloopVideoRequestOptions;	// IMP=0x0000000100029fe8
- (id)animatedImageRequestOptions;	// IMP=0x0000000100029f48
- (id)livePhotoRequestOptions;	// IMP=0x0000000100029ed0
- (id)requestOptions;	// IMP=0x0000000100029e30
- (CDUnknownBlockType)currentProgressHandler;	// IMP=0x0000000100029c20
- (long long)contentMode;	// IMP=0x0000000100029c18
- (struct CGSize)targetSize;	// IMP=0x0000000100029b8c
- (void)startPrefetchingAssets;	// IMP=0x0000000100029b80

@end

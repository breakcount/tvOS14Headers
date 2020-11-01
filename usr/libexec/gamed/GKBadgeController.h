//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKBadgeController : NSObject
{
    NSMutableDictionary *_badgeDictionaries[4];	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 40 = 0x28
    _Bool _dirty;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x00000001000ea4e4
- (void)registerBadgePermissionForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ebf0c
- (void)unbadgeAllApplications;	// IMP=0x00000001000ebcb4
- (void)badgeAllApplications;	// IMP=0x00000001000eba24
- (void)setBadgeCount:(unsigned long long)arg1 forBundleID:(id)arg2 badgeType:(unsigned long long)arg3;	// IMP=0x00000001000eb718
- (unsigned long long)_totalBadgeCountForBundleID:(id)arg1;	// IMP=0x00000001000eb5a4
- (unsigned long long)badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x00000001000eb3b4
- (unsigned long long)_badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x00000001000eb250
- (id)_dictionaryForBadgeType:(unsigned long long)arg1;	// IMP=0x00000001000eb11c
- (void)badgeBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x00000001000eaed8
- (void)badgeApplicationWithBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x00000001000eab10
- (_Bool)isBadgingEnabledForBundleID:(id)arg1;	// IMP=0x00000001000eaaa4
- (void)synchronize;	// IMP=0x00000001000ea69c
- (id)_plistKeyForBadgeType:(unsigned long long)arg1;	// IMP=0x00000001000ea664
- (void)dealloc;	// IMP=0x00000001000ea608
- (id)init;	// IMP=0x00000001000ea59c
- (id)_badgeCountURL;	// IMP=0x00000001000ea548

@end

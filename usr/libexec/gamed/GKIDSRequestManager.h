//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GKIDSRequestManager : NSObject
{
    NSMutableDictionary *_idsRequests;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x00000001001833e0
@property(retain) NSMutableDictionary *idsRequests; // @synthesize idsRequests=_idsRequests;
- (void)processResponseForiCloudID:(id)arg1 withPlayerID:(id)arg2;	// IMP=0x0000000100183c28
- (void)requestGKPlayerIDForiCloudIDs:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100183684
- (void)cancellRequestsforiCloudIDs:(id)arg1;	// IMP=0x0000000100183624
- (id)responseDictionaryQueue;	// IMP=0x0000000100183500
- (void)dealloc;	// IMP=0x00000001001832a4
- (id)init;	// IMP=0x000000010018324c

@end

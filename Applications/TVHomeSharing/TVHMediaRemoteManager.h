//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVPMPPlaybackQueueManagerDelegate-Protocol.h"

@class NSString;

@interface TVHMediaRemoteManager : NSObject <TVPMPPlaybackQueueManagerDelegate>
{
}

+ (id)new;	// IMP=0x0000000100027f50
+ (id)sharedInstance;	// IMP=0x0000000100027ed8
- (long long)manager:(id)arg1 editingStyleFlagsForMediaItem:(id)arg2;	// IMP=0x00000001000280ec
- (id)_init;	// IMP=0x0000000100028014
- (id)init;	// IMP=0x0000000100027f8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

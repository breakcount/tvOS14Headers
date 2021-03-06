//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NDBackgroundSessionDelegate-Protocol.h"
#import "NDBackgroundSessionManagerProtocol-Protocol.h"

@class NSMutableDictionary, NSString, NSURL, NSXPCConnection;
@protocol NDSessionManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NDSessionManager : NSObject <NDBackgroundSessionManagerProtocol, NDBackgroundSessionDelegate>
{
    NSMutableDictionary *_sessions;	// 8 = 0x8
    NSMutableDictionary *_reconnectingProxies;	// 16 = 0x10
    NSString *_clientBundleID;	// 24 = 0x18
    NSURL *_bundleDirectory;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_sessionArchiveQueue;	// 40 = 0x28
    id _boost;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_powerlogPeriodicUpdateTimer;	// 56 = 0x38
    _Bool _isSpringBoardApp;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSXPCConnection *_xpcConn;	// 80 = 0x50
    id <NDSessionManagerDelegate> _delegate;	// 88 = 0x58
    CDUnknownBlockType _obliterationCompletion;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100013e88
@property(copy) CDUnknownBlockType obliterationCompletion; // @synthesize obliterationCompletion=_obliterationCompletion;
@property _Bool isSpringBoardApp; // @synthesize isSpringBoardApp=_isSpringBoardApp;
@property __weak id <NDSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak NSXPCConnection *xpcConn; // @synthesize xpcConn=_xpcConn;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)archiveTimerFired;	// IMP=0x0000000100013dac
- (void)obliterate;	// IMP=0x0000000100013cd0
- (void)clientApplicationWasReinstalled;	// IMP=0x0000000100013c78
- (id)getSessionWithIdentifier:(id)arg1;	// IMP=0x0000000100013c50
- (void)sessionCompleted:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000139ac
- (void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013894
- (void)obliterateAllSessionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013768
- (void)getActiveSessionIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000136d8
- (void)okayToSendPendingCallbacksForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001348c
- (void)releaseAssertionForSession:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013344
- (void)sendPendingCallbacksForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013064
- (void)createSessionWithConfiguration:(id)arg1 clientProxy:(id)arg2 cachesDirectory:(id)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010001217c
- (_Bool)connection:(id)arg1 canUseSharedContainerIdentifier:(id)arg2;	// IMP=0x0000000100011fd8
- (id)copyAndSanitizeClientConfiguration:(id)arg1;	// IMP=0x00000001000116bc
- (void)dropBoost;	// IMP=0x0000000100011664
- (void)boost;	// IMP=0x0000000100011530
- (void)archiveState;	// IMP=0x0000000100011420
- (id)restoreState:(_Bool *)arg1;	// IMP=0x0000000100010a7c
- (id)restoreOptionsFromArchivePath:(id)arg1;	// IMP=0x0000000100010988
- (id)downloadDirectoryDataPath;	// IMP=0x0000000100010910
- (id)archivePath;	// IMP=0x0000000100010898
- (void)dealloc;	// IMP=0x0000000100010850
- (id)initWithDelegate:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3;	// IMP=0x0000000100010524

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


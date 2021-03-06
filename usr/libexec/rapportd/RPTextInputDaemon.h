//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RTIInputSystemDelegate-Protocol.h"

@class NSMutableSet, NSString, RTIInputSystemService, RTIInputSystemServiceSession;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPTextInputDaemon : NSObject <RTIInputSystemDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    RTIInputSystemService *_rtiService;	// 16 = 0x10
    RTIInputSystemServiceSession *_rtiSession;	// 24 = 0x18
    NSMutableSet *_sessionPeerIDs;	// 32 = 0x20
    id <RPMessageable> _messenger;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010004e0f8
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void)inputSystemService:(id)arg1 inputSessionDidUnpause:(id)arg2 withReason:(id)arg3;	// IMP=0x000000010004dfd8
- (void)inputSystemService:(id)arg1 inputSessionDidPause:(id)arg2 withReason:(id)arg3;	// IMP=0x000000010004decc
- (void)inputSystemService:(id)arg1 inputSessionDocumentDidChange:(id)arg2;	// IMP=0x000000010004dd3c
- (void)inputSystemService:(id)arg1 inputSessionDidDie:(id)arg2;	// IMP=0x000000010004dc38
- (void)inputSystemService:(id)arg1 inputSessionDidEnd:(id)arg2;	// IMP=0x000000010004db34
- (void)inputSystemService:(id)arg1 inputSessionDidBegin:(id)arg2;	// IMP=0x000000010004d834
- (void)inputSystemService:(id)arg1 didCreateInputSession:(id)arg2;	// IMP=0x000000010004d770
- (void)_sendTextInputPayloadEvent:(id)arg1 rtiPayload:(id)arg2;	// IMP=0x000000010004d41c
- (void)_handleTextInputChange:(id)arg1 options:(id)arg2;	// IMP=0x000000010004d0fc
- (void)_handleSessionStop:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004cfbc
- (void)_handleSessionStart:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004cd68
- (void)invalidate;	// IMP=0x000000010004cc74
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x000000010004c818
- (id)init;	// IMP=0x000000010004c7b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPDaemonXPCServerInterface-Protocol.h"

@class NSMutableSet, NSXPCConnection, RPDaemon;
@protocol OS_dispatch_queue;

@interface RPDaemonXPCConnection : NSObject <RPDaemonXPCServerInterface>
{
    RPDaemon *_daemon;	// 8 = 0x8
    _Bool _entitledClient;	// 16 = 0x10
    NSMutableSet *_assertions;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSXPCConnection *_xpcCnx;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010002d6a0
@property(retain, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableSet *assertions; // @synthesize assertions=_assertions;
- (void)primaryAccountSignedOutWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002d1c4
- (void)primaryAccountSignedInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002cfd4
- (void)getIdentitiesWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002cb18
- (void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002c910
- (void)diagnosticLogControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c784
- (void)diagnosticCommand:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002c518
- (void)_invalidateAssertions;	// IMP=0x000000010002c2f0
- (void)addOrUpdateIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c1d0
- (void)activateAssertionWithIdentifier:(id)arg1;	// IMP=0x000000010002bf80
- (_Bool)_entitledForLabel:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002be20
- (void)connectionInvalidated;	// IMP=0x000000010002bd84
- (id)initWithDaemon:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x000000010002bcd0

@end


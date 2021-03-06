//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface DIBaseXPCHandler : NSObject
{
    _Bool _isPrivileged;	// 8 = 0x8
    id _remoteProxy;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 32 = 0x20
    NSError *_xpcError;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001e308
@property(nonatomic) _Bool isPrivileged; // @synthesize isPrivileged=_isPrivileged;
@property(retain, nonatomic) NSError *xpcError; // @synthesize xpcError=_xpcError;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id remoteProxy; // @synthesize remoteProxy=_remoteProxy;
- (id)remoteObjectInterface;	// IMP=0x000000010001e2a0
- (void)createConnection;	// IMP=0x000000010001e090
- (_Bool)dupStderrWithError:(id *)arg1;	// IMP=0x000000010001deec
- (void)closeConnection;	// IMP=0x000000010001de94
- (_Bool)completeCommandWithError:(id *)arg1;	// IMP=0x000000010001dca8
- (void)signalCommandCompletedWithXpcError:(id)arg1;	// IMP=0x000000010001dc5c
- (_Bool)connectWithError:(id *)arg1;	// IMP=0x000000010001da64
- (id)serviceName;	// IMP=0x000000010001da5c
- (void)dealloc;	// IMP=0x000000010001da08
- (id)init;	// IMP=0x000000010001d888

@end


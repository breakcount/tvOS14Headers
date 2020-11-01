//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RSDRemoteNCMDevice.h"

@class NSObject, OS_xpc_remote_connection;
@protocol OS_dispatch_source, OS_nw_listener;

@interface RSDRemoteNCMDeviceDevice : RSDRemoteNCMDevice
{
    OS_xpc_remote_connection *reestablished_connection;	// 8 = 0x8
    NSObject<OS_nw_listener> *bonjour_listener;	// 16 = 0x10
    NSObject<OS_dispatch_source> *listener_source;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000cdf0
- (void)createPortListener;	// IMP=0x000000010000c944
- (void)createBonjourListener;	// IMP=0x000000010000bd5c
- (void)needsConnect;	// IMP=0x000000010000bbbc
- (void)disconnect;	// IMP=0x000000010000ba28
- (void)attach;	// IMP=0x000000010000b988
- (id)initWithInterface:(id)arg1;	// IMP=0x000000010000b918
- (id)initWithGeneratedName;	// IMP=0x000000010000b878
- (unsigned int)type;	// IMP=0x000000010000b870

@end

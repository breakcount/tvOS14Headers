//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "W5XPCConnectionDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCListener, W5DebugManager, W5DiagnosticsManager, W5LogManager, W5Peer, W5StatusManager, W5WiFiConnectionMonitor, W5WiFiPerfLoggingManager, W5WiFiSniffManager;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface W5Engine : NSObject <NSXPCListenerDelegate, W5XPCConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    W5StatusManager *_status;	// 16 = 0x10
    W5DiagnosticsManager *_diagnostics;	// 24 = 0x18
    W5WiFiSniffManager *_sniff;	// 32 = 0x20
    W5LogManager *_log;	// 40 = 0x28
    W5DebugManager *_debug;	// 48 = 0x30
    W5WiFiConnectionMonitor *_monitor;	// 56 = 0x38
    W5WiFiPerfLoggingManager *_wifiperf;	// 64 = 0x40
    NSXPCListener *_listener;	// 72 = 0x48
    NSMutableArray *_xpcConnections;	// 80 = 0x50
    _Bool _isMonitoring;	// 88 = 0x58
    NSObject<OS_os_transaction> *_isMonitoringTransaction;	// 96 = 0x60
    _Bool _isMonitoringWiFiConnection;	// 104 = 0x68
    NSObject<OS_os_transaction> *_isMonitoringConnectionTransaction;	// 112 = 0x70
    W5Peer *_localPeer;	// 120 = 0x78
}

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100015f1c
- (void)xpcConnection:(id)arg1 cancelWiFiPerformanceLoggingWithUUID:(id)arg2 peerID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100015da8
- (void)xpcConnection:(id)arg1 cancelWiFiSnifferWithUUID:(id)arg2 peerID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100015c34
- (void)xpcConnection:(id)arg1 cancelCollectLogsWithUUID:(id)arg2 peerID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100015ac0
- (void)xpcConnection:(id)arg1 cancelDiagnosticsWithUUID:(id)arg2 peerID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010001594c
- (void)xpcConnection:(id)arg1 runWiFiPerformanceLoggingWithConfiguration:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000157d4
- (void)xpcConnection:(id)arg1 runWiFiSnifferOnChannel:(id)arg2 duration:(double)arg3 peer:(id)arg4 uuid:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100015650
- (void)xpcConnection:(id)arg1 collectLogs:(id)arg2 configuration:(id)arg3 uuid:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000001000149fc
- (void)xpcConnection:(id)arg1 runDiagnostics:(id)arg2 configuration:(id)arg3 uuid:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000001000147bc
- (void)xpcConnection:(id)arg1 setDebugConfiguration:(id)arg2 peer:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100014648
- (void)xpcConnection:(id)arg1 queryDebugConfigurationForPeer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000144d4
- (void)xpcConnection:(id)arg1 queryStatusForPeer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014360
- (void)xpcConnection:(id)arg1 queryLocalPeerAndReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000142ac
- (void)xpcConnection:(id)arg1 stopMonitoringEvents:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014208
- (void)xpcConnection:(id)arg1 startMonitoringEvents:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014164
- (void)__setupCallbacks;	// IMP=0x0000000100012afc
- (void)__collectLogItem:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000129a8
- (void)__collectedLogItem:(id)arg1;	// IMP=0x0000000100012758
- (void)__completedDiagnosticsTest:(id)arg1;	// IMP=0x0000000100012508
- (void)__updatedStatusWithEvent:(id)arg1;	// IMP=0x0000000100012354
- (void)__cancelWiFiPerfLoggingWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012344
- (void)__runWiFiPerfLoggingWithConfiguration:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000122b0
- (void)__cancelWiFiSnifferWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000122a0
- (void)__runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100012008
- (void)__cancelCollectLogsWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011ff8
- (void)__collectLogs:(id)arg1 configuration:(id)arg2 additionalLog:(id)arg3 filename:(id)arg4 uid:(unsigned int)arg5 gid:(unsigned int)arg6 uuid:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x0000000100011a94
- (void)__cancelDiagnosticsWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011a84
- (void)__runDiagnostics:(id)arg1 configuration:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000119a0
- (void)__setDebugConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011990
- (void)__queryDebugConfigurationAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011980
- (void)__queryStatusAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011970
- (void)__updateStatusMonitoring;	// IMP=0x0000000100011730
- (id)__localPeer;	// IMP=0x000000010001153c
- (id)__model;	// IMP=0x0000000100011448
- (void)terminateAndNotify:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011180
- (void)run;	// IMP=0x00000001000110a4
- (void)dealloc;	// IMP=0x0000000100010ff0
- (id)init;	// IMP=0x0000000100010e44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


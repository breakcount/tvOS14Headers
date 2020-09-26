//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBPairingAgentDelegate-Protocol.h"

@class CBCentralManager, NSString, PBBluetoothDeviceStatistics;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PBBluetoothObserver : NSObject <CBPairingAgentDelegate>
{
    NSObject<OS_dispatch_queue> *_bluetoothSerialQueue;	// 8 = 0x8
    CBCentralManager *_coreBluetoothManager;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_reloadStatisticsSource;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_statisticsAccessSerialQueue;	// 32 = 0x20
    PBBluetoothDeviceStatistics *_currentPairedDeviceStatistics;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000897b8
@property(retain, nonatomic) PBBluetoothDeviceStatistics *currentPairedDeviceStatistics; // @synthesize currentPairedDeviceStatistics=_currentPairedDeviceStatistics;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsAccessSerialQueue; // @synthesize statisticsAccessSerialQueue=_statisticsAccessSerialQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *reloadStatisticsSource; // @synthesize reloadStatisticsSource=_reloadStatisticsSource;
@property(retain, nonatomic) CBCentralManager *coreBluetoothManager; // @synthesize coreBluetoothManager=_coreBluetoothManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bluetoothSerialQueue; // @synthesize bluetoothSerialQueue=_bluetoothSerialQueue;
- (void)_reloadStatistics;	// IMP=0x0000000100088d50
- (void)_signalReloadStatisticsSource;	// IMP=0x0000000100088d00
- (void)_handleBluetoothManagerNotificationHandler:(id)arg1;	// IMP=0x0000000100088c9c
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;	// IMP=0x0000000100088c08
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;	// IMP=0x0000000100088b48
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;	// IMP=0x0000000100088ab4
@property(readonly, nonatomic) PBBluetoothDeviceStatistics *pairedDeviceStatistics;
- (void)dealloc;	// IMP=0x0000000100088760
- (id)init;	// IMP=0x00000001000881d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

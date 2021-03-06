//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSDate, NSMapTable, NSMutableDictionary, NSNumber, NSSet, NSString;
@protocol OS_dispatch_queue, SDAutoUnlockTransportClient;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockTransport : NSObject <IDSServiceDelegate>
{
    NSDate *_lastSeenWatchDate;	// 8 = 0x8
    NSNumber *_watchExistedInUnlockList;	// 16 = 0x10
    NSNumber *_watchCurrentlyInList;	// 24 = 0x18
    id <SDAutoUnlockTransportClient> _primaryClient;	// 32 = 0x20
    IDSService *_idsService;	// 40 = 0x28
    IDSService *_activityService;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_transportQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_clientQueue;	// 64 = 0x40
    NSMapTable *_clientMap;	// 72 = 0x48
    NSMutableDictionary *_completionHandlers;	// 80 = 0x50
    NSMutableDictionary *_sendIdentifierToSessionID;	// 88 = 0x58
    NSMutableDictionary *_sendDates;	// 96 = 0x60
    NSDate *_lastSendDate;	// 104 = 0x68
    NSMutableDictionary *_autoUnlockDeviceCache;	// 112 = 0x70
    NSMutableDictionary *_cloudPairRetryRecords;	// 120 = 0x78
    NSMutableDictionary *_cachedBluetoothIDToUniqueIDs;	// 128 = 0x80
    NSSet *_cachedApproveBluetoothIDs;	// 136 = 0x88
}

+ (id)sharedTransport;	// IMP=0x00000001001383f4
- (void).cxx_destruct;	// IMP=0x000000010013ff28
@property(retain, nonatomic) NSSet *cachedApproveBluetoothIDs; // @synthesize cachedApproveBluetoothIDs=_cachedApproveBluetoothIDs;
@property(retain, nonatomic) NSMutableDictionary *cachedBluetoothIDToUniqueIDs; // @synthesize cachedBluetoothIDToUniqueIDs=_cachedBluetoothIDToUniqueIDs;
@property(retain, nonatomic) NSMutableDictionary *cloudPairRetryRecords; // @synthesize cloudPairRetryRecords=_cloudPairRetryRecords;
@property(retain, nonatomic) NSMutableDictionary *autoUnlockDeviceCache; // @synthesize autoUnlockDeviceCache=_autoUnlockDeviceCache;
@property(retain, nonatomic) NSDate *lastSendDate; // @synthesize lastSendDate=_lastSendDate;
@property(retain) NSMutableDictionary *sendDates; // @synthesize sendDates=_sendDates;
@property(retain, nonatomic) NSMutableDictionary *sendIdentifierToSessionID; // @synthesize sendIdentifierToSessionID=_sendIdentifierToSessionID;
@property(retain) NSMutableDictionary *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSMapTable *clientMap; // @synthesize clientMap=_clientMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transportQueue; // @synthesize transportQueue=_transportQueue;
@property(retain, nonatomic) IDSService *activityService; // @synthesize activityService=_activityService;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property __weak id <SDAutoUnlockTransportClient> primaryClient; // @synthesize primaryClient=_primaryClient;
- (id)state;	// IMP=0x000000010013fa38
- (_Bool)pairingRequestIsValidForDeviceID:(id)arg1 messageContext:(id)arg2;	// IMP=0x000000010013f7b0
- (_Bool)disableEncryption;	// IMP=0x000000010013f788
- (_Bool)showOtherDevices;	// IMP=0x000000010013f760
- (_Bool)showIDInName;	// IMP=0x000000010013f738
@property(retain, nonatomic) NSNumber *watchCurrentlyInList; // @synthesize watchCurrentlyInList=_watchCurrentlyInList;
@property(retain, nonatomic) NSNumber *watchExistedInUnlockList; // @synthesize watchExistedInUnlockList=_watchExistedInUnlockList;
@property(retain, nonatomic) NSDate *lastSeenWatchDate; // @synthesize lastSeenWatchDate=_lastSeenWatchDate;
@property(readonly, nonatomic) _Bool watchSeenRecently;
- (void)resetAppleWatchExisted;	// IMP=0x000000010013f04c
@property(readonly, nonatomic) _Bool appleWatchExisted;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000010013eda4
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x000000010013ea78
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000010013e3b0
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x000000010013e1e8
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010013e0b4
- (id)dataFromUUID:(id)arg1;	// IMP=0x000000010013e038
- (id)transferDataFromPayload:(id)arg1 sessionID:(id)arg2;	// IMP=0x000000010013df44
- (id)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 wantsACK:(_Bool)arg6 timeout:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000010013d824
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010013d738
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000010013d5d8
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 timeout:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010013d510
- (void)loadCloudPairRetries;	// IMP=0x000000010013d440
- (_Bool)canRetryCloudPairingForDeviceID:(id)arg1 useShortDate:(_Bool)arg2;	// IMP=0x000000010013d1f4
- (void)updateRetryDatesForDeviceIDs:(id)arg1;	// IMP=0x000000010013ce94
- (void)triggerCloudPairRetryWithShortRetryDeviceIDs:(id)arg1;	// IMP=0x000000010013ce90
- (id)connectionCacheDevices;	// IMP=0x000000010013cd30
- (_Bool)localDeviceIDSRegistered;	// IMP=0x000000010013cb30
- (_Bool)activityServiceHasWatch;	// IMP=0x000000010013c930
- (id)placeholderDevice;	// IMP=0x000000010013c7d0
- (void)updateBluetoothIDCache;	// IMP=0x000000010013c500
- (void)logBluetoothIDCache;	// IMP=0x000000010013c434
- (id)cachedIDSDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x000000010013c3b4
- (id)idsDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x000000010013c1c4
- (id)idsDeviceForBluetoothID:(id)arg1;	// IMP=0x000000010013c00c
- (id)idsDeviceForUniqueID:(id)arg1;	// IMP=0x000000010013be54
- (id)proxyBluetoothDeviceIDForDeviceID:(id)arg1;	// IMP=0x000000010013bd68
- (id)nameForDevice:(id)arg1;	// IMP=0x000000010013bc6c
- (_Bool)macVersionEligibleForDeviceID:(id)arg1;	// IMP=0x000000010013ba50
- (_Bool)watchVersionEligibleForDevice:(id)arg1;	// IMP=0x000000010013b938
- (id)modelNameForDevice:(id)arg1;	// IMP=0x000000010013b8c0
- (void)updateApproveBluetoothIDs;	// IMP=0x000000010013b5b0
- (id)approveBluetoothIDs;	// IMP=0x000000010013b508
- (id)autoUnlockDeviceForIDSDevice:(id)arg1 cloudPaired:(_Bool)arg2 cached:(_Bool)arg3;	// IMP=0x000000010013ae24
- (id)autoUnlockDeviceForIDSDevice:(id)arg1;	// IMP=0x000000010013ae10
- (id)onqueue_enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x000000010013aaa4
- (id)enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x000000010013a960
- (id)enabledAutoUnlockDevices;	// IMP=0x000000010013a950
- (id)onqueue_autoUnlockEligibleDevices:(_Bool)arg1;	// IMP=0x000000010013a1f0
- (id)autoUnlockEligibleDevicesWithCloudPairing:(_Bool)arg1;	// IMP=0x000000010013a0ac
- (id)autoUnlockEligibleDevices;	// IMP=0x000000010013a09c
- (id)onqueue_devicesWithLTKs;	// IMP=0x0000000100139e98
- (id)devicesWithLTKs;	// IMP=0x0000000100139d4c
- (id)autoUnlockDeviceForBluetoothID:(id)arg1 cached:(_Bool)arg2;	// IMP=0x0000000100139ccc
- (id)autoUnlockDeviceForBluetoothID:(id)arg1;	// IMP=0x0000000100139cbc
- (id)autoUnlockDeviceForDeviceID:(id)arg1;	// IMP=0x0000000100139c50
- (id)modelIdentifierForDeviceID:(id)arg1;	// IMP=0x0000000100139bfc
- (long long)deviceTypeForDevice:(id)arg1;	// IMP=0x0000000100139a8c
- (long long)deviceTypeForDeviceID:(id)arg1;	// IMP=0x0000000100139a34
- (id)deviceNameForDeviceID:(id)arg1;	// IMP=0x00000001001399e0
- (id)idsMacDeviceIDs;	// IMP=0x00000001001397d8
- (id)idsDevicesIDs;	// IMP=0x0000000100139648
- (_Bool)deviceNearby;	// IMP=0x00000001001395fc
- (_Bool)isDeviceSatellitePaired;	// IMP=0x0000000100139504
- (id)activeDevice;	// IMP=0x000000010013939c
- (id)pairedDeviceID;	// IMP=0x0000000100139348
- (id)onqueue_bluetoothDeviceIdentifiers;	// IMP=0x0000000100139194
- (id)bluetoothDeviceIdentifiers;	// IMP=0x0000000100139050
- (id)onqueue_bluetoothIDForIDSID:(id)arg1;	// IMP=0x0000000100138e80
- (id)bluetoothIDForIDSID:(id)arg1;	// IMP=0x0000000100138c84
- (void)clearAutoUnlockDeviceCache;	// IMP=0x0000000100138be4
- (void)refreshAutoUnlockDeviceCache;	// IMP=0x0000000100138ba4
- (void)logDevices;	// IMP=0x0000000100138ab0
- (void)removeClientForIdentifier:(id)arg1;	// IMP=0x000000010013877c
- (void)addClient:(id)arg1 forIdentifer:(id)arg2;	// IMP=0x000000010013864c
- (id)init;	// IMP=0x0000000100138460

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


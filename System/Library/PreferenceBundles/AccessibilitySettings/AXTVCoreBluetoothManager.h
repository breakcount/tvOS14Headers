//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface AXTVCoreBluetoothManager : NSObject
{
    struct BTLocalDeviceImpl *_localDevice;	// 8 = 0x8
    struct BTSessionImpl *_session;	// 16 = 0x10
    int _available;	// 24 = 0x18
    _Bool _audioConnected;	// 28 = 0x1c
    _Bool _scanningEnabled;	// 29 = 0x1d
    _Bool _scanningInProgress;	// 30 = 0x1e
    unsigned int _scanningServiceMask;	// 32 = 0x20
    struct BTDiscoveryAgentImpl *_discoveryAgent;	// 40 = 0x28
    struct BTPairingAgentImpl *_pairingAgent;	// 48 = 0x30
    struct BTAccessoryManagerImpl *_accessoryManager;	// 56 = 0x38
    NSMutableDictionary *_btAddrDict;	// 64 = 0x40
    NSMutableDictionary *_btDeviceDict;	// 72 = 0x48
    NSDictionary *_brailleDriverDeviceDetectionInfo;	// 80 = 0x50
}

+ (int)lastInitError;	// IMP=0x000000000001d8d4
+ (id)sharedInstance;	// IMP=0x000000000001d890
+ (void)setSharedInstanceQueue:(id)arg1;	// IMP=0x000000000001d880
- (void).cxx_destruct;	// IMP=0x0000000000020268
@property(retain, nonatomic) NSDictionary *brailleDriverDeviceDetectionInfo; // @synthesize brailleDriverDeviceDetectionInfo=_brailleDriverDeviceDetectionInfo;
- (_Bool)_isValidBrailleDevice:(id)arg1;	// IMP=0x000000000001fdc8
- (void)enableTestMode;	// IMP=0x000000000001fd6c
- (_Bool)isServiceSupported:(unsigned int)arg1;	// IMP=0x000000000001fd24
- (void)endVoiceCommand:(id)arg1;	// IMP=0x000000000001fcb4
- (void)startVoiceCommand:(id)arg1;	// IMP=0x000000000001fc44
- (void)setAudioConnected:(_Bool)arg1;	// IMP=0x000000000001fc30
- (_Bool)audioConnected;	// IMP=0x000000000001fc28
- (void)_connectabilityChanged;	// IMP=0x000000000001fc14
- (void)_connectedStatusChanged;	// IMP=0x000000000001fc00
- (_Bool)connected;	// IMP=0x000000000001fbac
- (id)connectedDevices;	// IMP=0x000000000001fa68
- (id)connectingDevices;	// IMP=0x000000000001f924
- (void)setConnectable:(_Bool)arg1;	// IMP=0x000000000001f8ac
- (_Bool)connectable;	// IMP=0x000000000001f858
- (void)disconnectDevice:(id)arg1;	// IMP=0x000000000001f7e0
- (void)connectDevice:(id)arg1;	// IMP=0x000000000001f7d0
- (void)connectDevice:(id)arg1 withServices:(unsigned int)arg2;	// IMP=0x000000000001f6dc
- (id)localAddress;	// IMP=0x000000000001f65c
- (void)_pairedStatusChanged;	// IMP=0x000000000001f648
- (void)acceptSSP:(long long)arg1 forDevice:(id)arg2;	// IMP=0x000000000001f5a8
- (void)setPincode:(id)arg1 forDevice:(id)arg2;	// IMP=0x000000000001f4f0
- (id)pairedDevices;	// IMP=0x000000000001f3ac
- (void)unpairDevice:(id)arg1;	// IMP=0x000000000001f2a4
- (void)cancelPairing;	// IMP=0x000000000001f264
- (void)setDevicePairingEnabled:(_Bool)arg1;	// IMP=0x000000000001f15c
- (_Bool)devicePairingEnabled;	// IMP=0x000000000001f14c
- (void)setDiscoverable:(_Bool)arg1;	// IMP=0x000000000001f0bc
- (_Bool)isDiscoverable;	// IMP=0x000000000001f068
- (void)_advertisingChanged;	// IMP=0x000000000001f054
- (void)_discoveryStateChanged;	// IMP=0x000000000001f040
- (void)_setScanState:(int)arg1;	// IMP=0x000000000001f030
- (void)_restartScan;	// IMP=0x000000000001efac
- (void)setDeviceScanningEnabled:(_Bool)arg1;	// IMP=0x000000000001ef00
- (void)scanForConnectableDevices:(unsigned int)arg1;	// IMP=0x000000000001eef0
- (void)scanForServices:(unsigned int)arg1;	// IMP=0x000000000001eee0
- (void)_scanForServices:(unsigned int)arg1 withMode:(int)arg2;	// IMP=0x000000000001ee24
- (void)resetDeviceScanning;	// IMP=0x000000000001edf4
- (_Bool)deviceScanningInProgress;	// IMP=0x000000000001edec
- (_Bool)deviceScanningEnabled;	// IMP=0x000000000001ede4
- (_Bool)wasDeviceDiscovered:(id)arg1;	// IMP=0x000000000001ece0
- (void)_removeDevice:(id)arg1;	// IMP=0x000000000001ec00
- (id)addDeviceIfNeeded:(struct BTDeviceImpl *)arg1;	// IMP=0x000000000001ea08
- (_Bool)isAnyoneAdvertising;	// IMP=0x000000000001e9b4
- (_Bool)isAnyoneScanning;	// IMP=0x000000000001e960
- (void)_powerChanged;	// IMP=0x000000000001e8b8
- (_Bool)setEnabled:(_Bool)arg1;	// IMP=0x000000000001e874
- (_Bool)setPowered:(_Bool)arg1;	// IMP=0x000000000001e7fc
- (_Bool)enabled;	// IMP=0x000000000001e7f0
- (_Bool)powered;	// IMP=0x000000000001e7cc
- (int)powerState;	// IMP=0x000000000001e77c
- (void)showPowerPrompt;	// IMP=0x000000000001e668
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;	// IMP=0x000000000001e5b0
- (void)postNotificationName:(id)arg1 object:(id)arg2;	// IMP=0x000000000001e51c
- (void)postNotification:(id)arg1;	// IMP=0x000000000001e500
- (void)_postNotification:(id)arg1;	// IMP=0x000000000001e488
- (void)_postNotificationWithArray:(id)arg1;	// IMP=0x000000000001e310
- (void)dealloc;	// IMP=0x000000000001e2c0
- (void)_cleanup:(_Bool)arg1;	// IMP=0x000000000001e1f8
- (_Bool)_setup:(struct BTSessionImpl *)arg1;	// IMP=0x000000000001db40
- (_Bool)_attach;	// IMP=0x000000000001d968
- (id)init;	// IMP=0x000000000001d8f0
- (_Bool)available;	// IMP=0x000000000001d8e0
- (struct BTAccessoryManagerImpl *)_accessoryManager;	// IMP=0x000000000001d7d8

@end


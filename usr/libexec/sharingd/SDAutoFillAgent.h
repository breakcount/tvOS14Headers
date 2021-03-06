//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSRemoteAlertHandleObserver-Protocol.h"
#import "SDSharedRemoteTextInputDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, SBSRemoteAlertHandle, SDNotificationManager, SDStatusMonitor, SFBLEScanner, SFDevice, SFDeviceDiscovery, SFRemoteAutoFillService, SFRemoteAutoFillSession, SFSiriRemoteMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoFillAgent : NSObject <SBSRemoteAlertHandleObserver, SDSharedRemoteTextInputDelegate>
{
    SBSRemoteAlertHandle *_alertHandle;	// 8 = 0x8
    _Bool _autoFillContext;	// 16 = 0x10
    _Bool _bulletinsDisabled;	// 17 = 0x11
    int _cleanKeysState;	// 20 = 0x14
    CDUnknownBlockType _credentialsHandler;	// 24 = 0x18
    SFDeviceDiscovery *_deviceDiscovery;	// 32 = 0x20
    NSMutableDictionary *_devices;	// 40 = 0x28
    NSMutableDictionary *_btDevices;	// 48 = 0x30
    SFRemoteAutoFillSession *_grantingSession;	// 56 = 0x38
    NSMutableDictionary *_grantedDevices;	// 64 = 0x40
    NSMutableSet *_helpers;	// 72 = 0x48
    NSMutableSet *_ignoredTVs;	// 80 = 0x50
    SDNotificationManager *_notificationManager;	// 88 = 0x58
    NSMutableDictionary *_proximityDevices;	// 96 = 0x60
    SFBLEScanner *_proximityDiscovery;	// 104 = 0x68
    _Bool _proximityEnabled;	// 112 = 0x70
    NSString *_requestingAppLocalizedName;	// 120 = 0x78
    NSString *_requestingAppUnlocalizedName;	// 128 = 0x80
    NSArray *_requestingAssociatedDomains;	// 136 = 0x88
    NSString *_requestingBundleID;	// 144 = 0x90
    SFRemoteAutoFillService *_requestingService;	// 152 = 0x98
    _Bool _requestingServiceTimedOut;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_requestingServiceTimer;	// 168 = 0xa8
    int _requestingServiceState;	// 176 = 0xb0
    _Bool _remoteMonitoringEnabled;	// 180 = 0xb4
    _Bool _rtiActivated;	// 181 = 0xb5
    _Bool _scanningEnabled;	// 182 = 0xb6
    SFSiriRemoteMonitor *_siriRemoteMonitor;	// 184 = 0xb8
    int _siriRemoteMonitorState;	// 192 = 0xc0
    SDStatusMonitor *_statusMonitor;	// 200 = 0xc8
    NSMutableDictionary *_triggeredDevices;	// 208 = 0xd0
    _Bool _uiDelayActive;	// 216 = 0xd8
    SFDevice *_uiDelayDevice;	// 224 = 0xe0
    NSObject<OS_dispatch_source> *_uiDelayTimer;	// 232 = 0xe8
    _Bool _prefGrantingEnabled;	// 240 = 0xf0
    _Bool _prefPairedTVAllowed;	// 241 = 0xf1
    _Bool _prefRateLimitDisabled;	// 242 = 0xf2
    _Bool _prefRequestingEnabled;	// 243 = 0xf3
    _Bool _prefRequiresProx;	// 244 = 0xf4
    _Bool _testingService;	// 245 = 0xf5
    _Bool _preventNotifications;	// 246 = 0xf6
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000010009d4d8
@property(nonatomic) _Bool preventNotifications; // @synthesize preventNotifications=_preventNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (_Bool)_uiShowing;	// IMP=0x000000010009d444
- (void)_uiStop:(id)arg1;	// IMP=0x000000010009d2cc
- (void)_uiStart:(id)arg1 extraInfo:(id)arg2;	// IMP=0x000000010009d280
- (void)_uiStartIfNeeded:(id)arg1 extraInfo:(id)arg2;	// IMP=0x000000010009cff4
- (void)_uiStartIfEnabled:(id)arg1 extraInfo:(id)arg2;	// IMP=0x000000010009cff0
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x000000010009ce34
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x000000010009ccd4
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x000000010009cb74
- (void)passwordPickerStart:(id)arg1 bundleID:(id)arg2 localizedAppName:(id)arg3 unlocalizedAppName:(id)arg4 associatedDomains:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010009c7cc
- (void)_deactivateUIDelayTimer;	// IMP=0x000000010009c734
- (void)_activateUIDelayTimer;	// IMP=0x000000010009c58c
- (void)testUI:(id)arg1;	// IMP=0x000000010009c2c4
- (void)testService:(id)arg1;	// IMP=0x000000010009c1dc
- (void)testRemote:(id)arg1;	// IMP=0x000000010009c0ac
- (void)testKeychain:(id)arg1;	// IMP=0x000000010009c010
- (void)_sessionHandlePairingSucceededResponse:(id)arg1;	// IMP=0x000000010009bf8c
- (void)_sessionStop:(id)arg1;	// IMP=0x000000010009bd20
- (void)_sessionStart:(id)arg1;	// IMP=0x000000010009b728
- (void)_serviceTimeoutStop;	// IMP=0x000000010009b6a0
- (void)_serviceTimeoutStart;	// IMP=0x000000010009b4d0
- (void)_serviceStopRequestingAutoFill;	// IMP=0x000000010009b434
- (void)_serviceStartRequestingAutoFillIfReady;	// IMP=0x000000010009b2e0
- (_Bool)_serviceShouldRequestAutoFill;	// IMP=0x000000010009b244
- (void)_serviceHandleUsername:(id)arg1 password:(id)arg2 error:(id)arg3;	// IMP=0x000000010009b08c
- (void)_serviceHandleError:(id)arg1;	// IMP=0x000000010009b008
- (void)_serviceEnsureStopped;	// IMP=0x000000010009af64
- (void)_serviceEnsureStarted;	// IMP=0x000000010009abb0
- (void)_siriRemoteMonitorEnsureStopped;	// IMP=0x000000010009ab1c
- (void)_siriRemoteMonitorEnsureStarted;	// IMP=0x000000010009a924
- (void)handleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x000000010009a7e0
- (void)handleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x000000010009a604
- (void)_rtiEnsureStopped;	// IMP=0x000000010009a59c
- (void)_rtiEnsureStarted;	// IMP=0x000000010009a530
- (void)_proximityLost:(id)arg1;	// IMP=0x000000010009a444
- (void)_proximityFound:(id)arg1;	// IMP=0x000000010009a368
- (void)_proximityChanged:(id)arg1;	// IMP=0x000000010009a000
- (void)_proximityEnsureStopped;	// IMP=0x0000000100099f50
- (void)_proximityEnsureStarted;	// IMP=0x0000000100099c90
- (void)_helpersClientPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x0000000100099b54
- (void)_helpersClientPairingSucceeded:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100099a04
- (int)helper:(id)arg1 userNotificationDidDismiss:(id)arg2;	// IMP=0x00000001000998c4
- (int)helper:(id)arg1 userNotificationDidActivate:(id)arg2;	// IMP=0x00000001000997a8
- (int)helper:(id)arg1 tryPIN:(id)arg2;	// IMP=0x0000000100099680
- (int)helper:(id)arg1 didPickUsername:(id)arg2 password:(id)arg3 error:(id)arg4;	// IMP=0x00000001000993e0
- (void)helperStop:(id)arg1;	// IMP=0x0000000100099324
- (int)helperStart:(id)arg1;	// IMP=0x0000000100099214
- (void)_deviceStoppedRequesting:(id)arg1;	// IMP=0x00000001000990a0
- (void)_deviceLost:(id)arg1;	// IMP=0x0000000100098ea8
- (void)_deviceFound:(id)arg1;	// IMP=0x0000000100098c40
- (void)_deviceChanged:(id)arg1;	// IMP=0x0000000100098944
- (void)_discoveryEnsureStopped;	// IMP=0x00000001000987e8
- (void)_discoveryEnsureStarted;	// IMP=0x00000001000984c8
- (void)notificiationDidDismiss:(id)arg1;	// IMP=0x00000001000983f4
- (void)_bulletinsEnsureStopped;	// IMP=0x00000001000983e4
- (void)_bulletinsEnsureStarted;	// IMP=0x000000010009837c
- (void)_uiLockStatusChanged:(id)arg1;	// IMP=0x0000000100098238
- (void)_screenStateChanged:(id)arg1;	// IMP=0x00000001000980ec
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100097aa8
- (void)_postSetupNotificationForDevice:(id)arg1;	// IMP=0x00000001000978d8
- (void)_ensureKeychainCleaned:(_Bool)arg1;	// IMP=0x00000001000971c0
- (void)_commonEnsureStopped;	// IMP=0x0000000100097110
- (void)_commonEnsureStarted;	// IMP=0x0000000100097028
- (void)_update;	// IMP=0x0000000100096e18
- (void)prefsChanged;	// IMP=0x0000000100096790
- (void)_invalidate;	// IMP=0x00000001000966b0
- (void)invalidate;	// IMP=0x0000000100096648
- (void)_activate;	// IMP=0x00000001000965c8
- (void)activate;	// IMP=0x0000000100096560
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000010009606c
- (id)init;	// IMP=0x0000000100096008

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


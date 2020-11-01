//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAutoUnlockPairingSession.h"

@class NSData, SDUnlockSetupRequest;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockPairingKeySession : SDAutoUnlockPairingSession
{
    _Bool _waitingForUnlock;	// 8 = 0x8
    _Bool _waitingForLTK;	// 9 = 0x9
    _Bool _requestedLTKForRemote;	// 10 = 0xa
    _Bool _companionViewNotSyncing;	// 11 = 0xb
    _Bool _companionNeedsUnlock;	// 12 = 0xc
    _Bool _companionCurrentlySyncing;	// 13 = 0xd
    _Bool _canceled;	// 14 = 0xe
    NSData *_requestData;	// 16 = 0x10
    SDUnlockSetupRequest *_request;	// 24 = 0x18
    NSData *_longTermKey;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100049ae0
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain) SDUnlockSetupRequest *request; // @synthesize request=_request;
@property _Bool canceled; // @synthesize canceled=_canceled;
@property _Bool companionCurrentlySyncing; // @synthesize companionCurrentlySyncing=_companionCurrentlySyncing;
@property _Bool companionNeedsUnlock; // @synthesize companionNeedsUnlock=_companionNeedsUnlock;
@property _Bool companionViewNotSyncing; // @synthesize companionViewNotSyncing=_companionViewNotSyncing;
@property _Bool requestedLTKForRemote; // @synthesize requestedLTKForRemote=_requestedLTKForRemote;
@property _Bool waitingForLTK; // @synthesize waitingForLTK=_waitingForLTK;
@property _Bool waitingForUnlock; // @synthesize waitingForUnlock=_waitingForUnlock;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x0000000100049828
- (void)sendSetupCreateEscrowRecordStepData:(id)arg1 error:(id)arg2;	// IMP=0x0000000100049530
- (void)sendSetupSessionCreatedWithLocalKey:(id)arg1 stepData:(id)arg2 error:(id)arg3 failureReason:(unsigned int)arg4 ltkSyncing:(id)arg5;	// IMP=0x0000000100048e60
- (void)sendKeyDeviceLocked;	// IMP=0x0000000100048cd4
- (void)handleCreateEscrowSecret:(id)arg1;	// IMP=0x0000000100048718
- (void)handleSetupRequest;	// IMP=0x0000000100048714
- (void)notifyDelegateWithError:(id)arg1;	// IMP=0x00000001000485d8
- (void)watchLTKsChanged:(id)arg1;	// IMP=0x0000000100048104
- (void)keyBagLockStateChange:(id)arg1;	// IMP=0x0000000100048100
- (void)addObservers;	// IMP=0x000000010004803c
- (void)handleTimerFired;	// IMP=0x0000000100047e3c
- (_Bool)ltkHashMatches;	// IMP=0x0000000100047cd8
- (_Bool)canCreatePairing;	// IMP=0x0000000100047cd0
- (void)onqueue_cancel;	// IMP=0x0000000100047bb0
- (void)cancel;	// IMP=0x0000000100047b24
- (void)onqueue_start;	// IMP=0x0000000100047a8c
- (void)start;	// IMP=0x0000000100047a00
- (void)invalidate;	// IMP=0x00000001000478b8
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2;	// IMP=0x0000000100047834

@end

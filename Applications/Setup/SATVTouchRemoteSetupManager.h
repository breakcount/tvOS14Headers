//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVCSTapToSetupActivatorHookDelegate-Protocol.h"
#import "TVCSTapToSetupManagerDelegate-Protocol.h"

@class NSString, SATVNetworkReachability, TVCSTapToSetupManager, TVSStateMachine;
@protocol TVCSTapToSetupManagerDelegate;

@interface SATVTouchRemoteSetupManager : NSObject <TVCSTapToSetupManagerDelegate, TVCSTapToSetupActivatorHookDelegate>
{
    struct {
        unsigned int respondsToShouldPresentPasswordSettingPromptForAccount:1;
        unsigned int respondsToPresentingControllerForTTSUManager:1;
        unsigned int respondsToDidPromptToBeginSetup:1;
        unsigned int respondsToDidBeginSetupWithDeviceName:1;
        unsigned int respondsToDidBeginConfigurationPhase:1;
        unsigned int respondsToShouldConnectToNetworkWithName:1;
        unsigned int respondsToNetworkConnectionStateDidChange:1;
        unsigned int respondsToWillAttemptAuthenticationForAccount:1;
        unsigned int respondsToDidFinishAuthenticationForAccount:1;
        unsigned int respondsToDidReceiveSetupInfo:1;
        unsigned int respondsToDidFinishSetup:1;
        unsigned int respondsToDidFailSetupWithError:1;
        unsigned int respondsToDidFailToStartSetupWithError:1;
        unsigned int respondsToPresentErrorAlert:1;
    } _userInterfaceDelegateFlags;	// 8 = 0x8
    id <TVCSTapToSetupManagerDelegate> _userInterfaceDelegate;	// 16 = 0x10
    TVSStateMachine *_stateMachine;	// 24 = 0x18
    SATVNetworkReachability *_networkReachability;	// 32 = 0x20
    TVCSTapToSetupManager *_tapToSetupManager;	// 40 = 0x28
    unsigned long long _retryCount;	// 48 = 0x30
    CDUnknownBlockType _activatorHookCompletion;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0000000100049f84
- (void).cxx_destruct;	// IMP=0x000000010004c80c
@property(copy, nonatomic) CDUnknownBlockType activatorHookCompletion; // @synthesize activatorHookCompletion=_activatorHookCompletion;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) TVCSTapToSetupManager *tapToSetupManager; // @synthesize tapToSetupManager=_tapToSetupManager;
@property(readonly, nonatomic) SATVNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(readonly, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) __weak id <TVCSTapToSetupManagerDelegate> userInterfaceDelegate; // @synthesize userInterfaceDelegate=_userInterfaceDelegate;
- (void)tapToSetupManager:(id)arg1 readyToActivateWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004c774
- (void)_handleSilentActivationFailureWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x000000010004c5e0
- (void)_handleSilentActivationSuccessWithSuccessType:(unsigned long long)arg1;	// IMP=0x000000010004bed4
- (void)_completeSilentActivationWithSuccessType:(unsigned long long)arg1 failureReason:(long long)arg2 error:(id)arg3;	// IMP=0x000000010004beb0
- (void)_checkTarget:(id)arg1 forSelector:(SEL)arg2 performBlockOnMainThread:(CDUnknownBlockType)arg3;	// IMP=0x000000010004bdb0
- (void)_testReachabilityAndActivate;	// IMP=0x000000010004b940
- (void)_retry;	// IMP=0x000000010004b898
- (void)_cancelScheduledRetry;	// IMP=0x000000010004b804
- (void)_scheduleRetry;	// IMP=0x000000010004b730
- (void)_stop;	// IMP=0x000000010004b6d4
- (void)_start;	// IMP=0x000000010004b668
- (void)_notifyDelegateDidFailToStartSetupWithError:(id)arg1;	// IMP=0x000000010004b5b8
- (void)tapToSetupManager:(id)arg1 presentErrorAlert:(id)arg2;	// IMP=0x000000010004b528
- (void)tapToSetupManager:(id)arg1 didFailToStartSetupWithError:(id)arg2;	// IMP=0x000000010004b430
- (void)tapToSetupManager:(id)arg1 didFailSetupWithError:(id)arg2;	// IMP=0x000000010004b380
- (void)tapToSetupManagerDidFinishSetup:(id)arg1 deviceInfo:(id)arg2;	// IMP=0x000000010004b2f0
- (void)tapToSetupManager:(id)arg1 didReceiveSetupInfo:(id)arg2;	// IMP=0x000000010004b260
- (void)tapToSetupManager:(id)arg1 didFinishAuthenticationForAccount:(unsigned long long)arg2 withResult:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000010004b1b8
- (void)tapToSetupManager:(id)arg1 willAttemptAuthenticationForAccount:(unsigned long long)arg2;	// IMP=0x000000010004b12c
- (void)tapToSetupManager:(id)arg1 networkConnectionStateDidChange:(long long)arg2;	// IMP=0x000000010004b0a0
- (_Bool)tapToSetupManager:(id)arg1 shouldConnectToNetworkWithName:(id)arg2;	// IMP=0x000000010004affc
- (void)tapToSetupManager:(id)arg1 didBeginConfigurationPhase:(long long)arg2 withMetadata:(id)arg3;	// IMP=0x000000010004af5c
- (void)tapToSetupManager:(id)arg1 didBeginSetupWithDeviceName:(id)arg2 isNewFlow:(_Bool)arg3;	// IMP=0x000000010004aebc
- (void)tapToSetupManagerDidPromptToBeginSetup:(id)arg1;	// IMP=0x000000010004ae14
- (id)presentingControllerForTTSUManager:(id)arg1;	// IMP=0x000000010004ad84
- (_Bool)tapToSetupManager:(id)arg1 shouldPresentPasswordSettingPromptForAccount:(id)arg2;	// IMP=0x000000010004ace0
- (void)_configureStateMachine;	// IMP=0x000000010004a400
- (void)stop;	// IMP=0x000000010004a3b8
- (void)start;	// IMP=0x000000010004a370
- (id)init;	// IMP=0x0000000100049ff0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

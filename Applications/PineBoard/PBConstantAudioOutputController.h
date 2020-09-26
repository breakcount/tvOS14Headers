//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPAVRoutingControllerDelegate-Protocol.h"
#import "PBAttentionAwarenessMonitorObserver-Protocol.h"
#import "PBHomeAccessoryManagerObserver-Protocol.h"
#import "PBPowerManagerObserver-Protocol.h"

@class MPAVRoutingController, NSString, PBAttentionAwarenessMonitor;

@interface PBConstantAudioOutputController : NSObject <MPAVRoutingControllerDelegate, PBAttentionAwarenessMonitorObserver, PBHomeAccessoryManagerObserver, PBPowerManagerObserver>
{
    _Bool _constantAudioOutputEnabled;	// 8 = 0x8
    MPAVRoutingController *_systemAudioRoutingController;	// 16 = 0x10
    PBAttentionAwarenessMonitor *_attentionAwarenessMonitor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100257d98
@property(retain, nonatomic) PBAttentionAwarenessMonitor *attentionAwarenessMonitor; // @synthesize attentionAwarenessMonitor=_attentionAwarenessMonitor;
@property(nonatomic, getter=isConstantAudioOutputEnabled) _Bool constantAudioOutputEnabled; // @synthesize constantAudioOutputEnabled=_constantAudioOutputEnabled;
@property(retain, nonatomic) MPAVRoutingController *systemAudioRoutingController; // @synthesize systemAudioRoutingController=_systemAudioRoutingController;
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x0000000100257a8c
- (void)attentionAwarenessMonitorDidRegainAttention:(id)arg1;	// IMP=0x000000010025798c
- (void)attentionAwarenessMonitorDidLoseAttention:(id)arg1;	// IMP=0x000000010025788c
- (void)powerManagerDidWakeSystem:(id)arg1;	// IMP=0x0000000100257818
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100257758
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100257524
- (_Bool)isConstantAudioAlwaysAllowed;	// IMP=0x0000000100257440
- (void)setConstantAudioOutputEnabled:(_Bool)arg1 reason:(id)arg2;	// IMP=0x00000001002571f0
- (void)enableConstantAudioOutputIfNeeded:(_Bool)arg1 reason:(id)arg2;	// IMP=0x0000000100256e98
- (_Bool)isEndpointHDMI;	// IMP=0x0000000100256d58
- (_Bool)stopControllingConstantAudioOutput:(id *)arg1;	// IMP=0x0000000100256ca4
- (_Bool)startControllingConstantAudioOutput:(id *)arg1;	// IMP=0x0000000100256bf4
- (void)dealloc;	// IMP=0x0000000100256aa8
- (id)init;	// IMP=0x0000000100256780

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVChooseSetupMethodStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (id)stableIdentifier;	// IMP=0x000000010001d8c8
- (void).cxx_destruct;	// IMP=0x000000010001e110
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_reset;	// IMP=0x000000010001e06c
- (_Bool)_isAuthenticated;	// IMP=0x000000010001e018
- (void)_notifyTriggerStatusChangeAndReset:(_Bool)arg1;	// IMP=0x000000010001deec
- (void)_handleTapToSetupConsentWithDeviceInfo:(id)arg1;	// IMP=0x000000010001ddb0
- (void)_showChooseSetupController;	// IMP=0x000000010001db88
- (void)autoAdvance;	// IMP=0x000000010001db04
- (id)executeStepForContext:(id)arg1;	// IMP=0x000000010001d8d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


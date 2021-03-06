//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKExpressTapToSetupItemProviderStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVDiagnosticsStep : NSObject <TVSKExpressTapToSetupItemProviderStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (_Bool)_isDiagnosticsLockedDown;	// IMP=0x00000001000258f8
+ (id)expressTapToSetupItemWithTapToSetupDeviceInfo:(id)arg1;	// IMP=0x00000001000257d8
+ (id)stableIdentifier;	// IMP=0x00000001000253e0
+ (void)initialize;	// IMP=0x000000010002537c
- (void).cxx_destruct;	// IMP=0x0000000100025cbc
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_reset;	// IMP=0x0000000100025c88
- (void)_setEnableDiagnosticsSubmission:(_Bool)arg1;	// IMP=0x0000000100025c2c
- (id)_handleDiagnosticsConsent:(_Bool)arg1;	// IMP=0x0000000100025be4
- (void)_completeStepWithDiagnosticsConsent:(_Bool)arg1;	// IMP=0x0000000100025b6c
- (void)_showDiagnosticsViewController;	// IMP=0x0000000100025958
- (void)autoAdvance;	// IMP=0x0000000100025760
- (id)executeStepForContext:(id)arg1;	// IMP=0x00000001000253ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


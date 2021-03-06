//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKExpressTapToSetupItemProviderStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVLocationServicesStep : NSObject <TVSKExpressTapToSetupItemProviderStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (int)_authorizationForIdentifier:(id)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x0000000100011fe8
+ (int)_defaultAuthorizationForIdentifier:(id)arg1;	// IMP=0x0000000100011f18
+ (id)expressTapToSetupItemWithTapToSetupDeviceInfo:(id)arg1;	// IMP=0x0000000100011674
+ (id)stableIdentifier;	// IMP=0x0000000100011294
+ (void)initialize;	// IMP=0x0000000100011230
- (void).cxx_destruct;	// IMP=0x0000000100012100
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_reset;	// IMP=0x0000000100011ce8
- (void)_enableLocationServices:(_Bool)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x0000000100011a98
- (void)_completeStepWithEnableLocationServices:(_Bool)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x0000000100011a20
- (id)_handleEnableLocationServices:(_Bool)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x00000001000119d8
- (void)_showLocationServicesViewController;	// IMP=0x00000001000117c0
- (void)_enableLocationServicesByDefault;	// IMP=0x00000001000117ac
- (void)autoAdvance;	// IMP=0x00000001000115f8
- (id)executeStepForContext:(id)arg1;	// IMP=0x00000001000112a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


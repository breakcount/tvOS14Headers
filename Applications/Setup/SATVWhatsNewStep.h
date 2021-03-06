//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVWhatsNewStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (_Bool)_isSupportedForUpdate;	// IMP=0x000000010003686c
+ (id)stableIdentifier;	// IMP=0x0000000100036408
+ (void)initialize;	// IMP=0x00000001000363a4
- (void).cxx_destruct;	// IMP=0x0000000100036a60
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_completeStep;	// IMP=0x00000001000369bc
- (void)_displayWhatsNewViewController;	// IMP=0x0000000100036874
- (void)autoAdvance;	// IMP=0x0000000100036868
- (id)executeStepForContext:(id)arg1;	// IMP=0x0000000100036414

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBLaunchAction.h"

#import "HBLaunchAction-Protocol.h"

@class NSString;

@interface HBLaunchApplicationAction : HBLaunchAction <HBLaunchAction>
{
}

- (void)executeWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008fedc
- (id)replacementAction;	// IMP=0x000000010008fed4
- (_Bool)validate:(inout id *)arg1;	// IMP=0x000000010008fc48
- (_Bool)supportsLaunchEventTime;	// IMP=0x000000010008fc40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


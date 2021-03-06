//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTBaseQueryObserver.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSString;

@interface MTAllPropertyChangesQueryObserver : MTBaseQueryObserver <NSFetchedResultsControllerDelegate>
{
    _Bool _inCallback;	// 8 = 0x8
}

- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x0000000100016750
- (void)notifyObservers;	// IMP=0x0000000100016668
- (void)startObserving;	// IMP=0x0000000100016618
- (id)addResultsChangedHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000165b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


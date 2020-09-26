//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBAppInfoControllerDelegate-Protocol.h"
#import "PBOpenAppTransitionerObserver-Protocol.h"

@class NSArray, NSMutableArray, NSString, PBAppInfoController, PBAppSwitcherItem;
@protocol PBAppSwitcherDataSourceDelegate;

@interface PBAppSwitcherDataSource : NSObject <PBAppInfoControllerDelegate, PBOpenAppTransitionerObserver>
{
    id <PBAppSwitcherDataSourceDelegate> _delegate;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    PBAppSwitcherItem *_kioskItem;	// 24 = 0x18
    PBAppSwitcherItem *_focusedProcessItem;	// 32 = 0x20
    NSArray *_pendingUpdates;	// 40 = 0x28
    NSMutableArray *_itemsIncludingUpdates;	// 48 = 0x30
    PBAppInfoController *_appInfoController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001001044e0
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, copy, nonatomic) NSMutableArray *itemsIncludingUpdates; // @synthesize itemsIncludingUpdates=_itemsIncludingUpdates;
@property(readonly, copy, nonatomic) NSArray *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property(readonly, nonatomic) PBAppSwitcherItem *focusedProcessItem; // @synthesize focusedProcessItem=_focusedProcessItem;
@property(readonly, nonatomic) PBAppSwitcherItem *kioskItem; // @synthesize kioskItem=_kioskItem;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <PBAppSwitcherDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appTransitioner:(id)arg1 didCompleteAppTransition:(id)arg2;	// IMP=0x0000000100103ed8
- (void)_recalculateUpdates:(_Bool)arg1;	// IMP=0x0000000100103804
- (void)_updateWithRemovedItems:(id)arg1;	// IMP=0x0000000100103644
- (void)_populateItems:(id)arg1;	// IMP=0x0000000100103070
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x0000000100102708
- (void)applyPendingUpdates;	// IMP=0x0000000100102400
- (id)indexPathForItem:(id)arg1;	// IMP=0x0000000100102304
- (void)handleKillRequestForItem:(id)arg1;	// IMP=0x00000001001021a8
- (void)handleLaunchRequestForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100101dd8
- (void)handleActivationRequestForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100101be8
- (_Bool)canKillItem:(id)arg1;	// IMP=0x0000000100101ab0
- (_Bool)canSwitchToItem:(id)arg1;	// IMP=0x0000000100101978
- (void)dealloc;	// IMP=0x00000001001018e4
- (id)initWithFocusedProcessBundleID:(id)arg1;	// IMP=0x00000001001016f0
- (id)init;	// IMP=0x00000001001016b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

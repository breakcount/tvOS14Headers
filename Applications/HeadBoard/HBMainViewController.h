//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HBAppGridViewControllerDelegate-Protocol.h"
#import "HBUILaunchAnimationEnvironment-Protocol.h"
#import "HBUITopShelfContentViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class HBAppGridViewController, HBRootFolderController, HBRootItem, HBTopShelfManager, HBUITopShelfHostViewController, NSString, UIGestureRecognizer;
@protocol HBUITopShelfContentViewController;

@interface HBMainViewController : UIViewController <HBAppGridViewControllerDelegate, HBUITopShelfContentViewControllerDelegate, UIGestureRecognizerDelegate, HBUILaunchAnimationEnvironment>
{
    HBAppGridViewController *_gridViewController;	// 8 = 0x8
    HBRootFolderController *_rootFolderController;	// 16 = 0x10
    HBUITopShelfHostViewController *_topShelfViewController;	// 24 = 0x18
    HBTopShelfManager *_topShelfManager;	// 32 = 0x20
    HBRootItem *_currentTopShelfItem;	// 40 = 0x28
    CDUnknownBlockType _topShelfDelayCallback;	// 48 = 0x30
    CDUnknownBlockType _topShelfDecelerationCompleteCallback;	// 56 = 0x38
    UIViewController<HBUITopShelfContentViewController> *_currentTopShelfItemViewController;	// 64 = 0x40
    UIGestureRecognizer *_menuGestureRecognizer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000a91c8
@property(readonly, nonatomic) UIGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) UIViewController<HBUITopShelfContentViewController> *currentTopShelfItemViewController; // @synthesize currentTopShelfItemViewController=_currentTopShelfItemViewController;
@property(copy, nonatomic) CDUnknownBlockType topShelfDecelerationCompleteCallback; // @synthesize topShelfDecelerationCompleteCallback=_topShelfDecelerationCompleteCallback;
@property(copy, nonatomic) CDUnknownBlockType topShelfDelayCallback; // @synthesize topShelfDelayCallback=_topShelfDelayCallback;
@property(retain, nonatomic) HBRootItem *currentTopShelfItem; // @synthesize currentTopShelfItem=_currentTopShelfItem;
@property(retain, nonatomic) HBTopShelfManager *topShelfManager; // @synthesize topShelfManager=_topShelfManager;
@property(readonly, nonatomic) HBUITopShelfHostViewController *topShelfViewController; // @synthesize topShelfViewController=_topShelfViewController;
@property(readonly, nonatomic, getter=_rootFolderController) HBRootFolderController *rootFolderController; // @synthesize rootFolderController=_rootFolderController;
@property(readonly, nonatomic) HBAppGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000a9008
- (id)nextLaunchAnimationEnvironments;	// IMP=0x00000001000a8efc
- (void)topShelfContentViewController:(id)arg1 willScrollToFirstItem:(_Bool)arg2;	// IMP=0x00000001000a8e58
- (void)topShelfContentViewController:(id)arg1 contentStyleDidChange:(unsigned long long)arg2;	// IMP=0x00000001000a8e08
- (void)_handleTopShelfDecelerationCallback;	// IMP=0x00000001000a8d78
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000001000a8c88
- (void)_purgeAssetCache;	// IMP=0x00000001000a8c28
- (void)_handleTVTapEvent:(id)arg1;	// IMP=0x00000001000a8b88
- (void)_menuGesture:(id)arg1;	// IMP=0x00000001000a8b48
- (void)gridViewControllerItemsBecameReady:(id)arg1;	// IMP=0x00000001000a8808
- (void)gridViewControllerDidScrollCloseEnoughToTop:(id)arg1;	// IMP=0x00000001000a87c8
- (void)gridViewControllerDidEndDecelerating:(id)arg1;	// IMP=0x00000001000a87bc
- (void)gridViewController:(id)arg1 itemMovedOutOfDock:(id)arg2 replacedWithItem:(id)arg3;	// IMP=0x00000001000a872c
- (void)gridViewController:(id)arg1 itemMovedIntoDock:(id)arg2;	// IMP=0x00000001000a86cc
- (void)appGridViewController:(id)arg1 didUpdateFocusInContext:(CDStruct_334d6f95)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001000a85e4
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000001000a83f0
- (void)_updateTopShelfWithItem:(id)arg1 inDirection:(long long)arg2;	// IMP=0x00000001000a7f34
- (void)_delayedTopShelfChange;	// IMP=0x00000001000a7ea4
- (id)preferredFocusEnvironments;	// IMP=0x00000001000a7d34
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000a7bec
- (void)viewDidLoad;	// IMP=0x00000001000a781c
- (void)loadView;	// IMP=0x00000001000a7788
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000a76ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


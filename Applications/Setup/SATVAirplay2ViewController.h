//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVAirplay2DataSourceObserver-Protocol.h"
#import "SATVAirplay2HomePickerViewControllerDelegate-Protocol.h"
#import "SATVAirplay2RoomPickerViewControllerDelegate-Protocol.h"
#import "SATVTextEntryViewControllerDelegate-Protocol.h"

@class NSObject, NSString, NSTimer, TVSStateMachine, UINavigationController;
@protocol SATVAirplay2DataSource;

@interface SATVAirplay2ViewController : TVSKViewController <SATVTextEntryViewControllerDelegate, SATVAirplay2DataSourceObserver, SATVAirplay2HomePickerViewControllerDelegate, SATVAirplay2RoomPickerViewControllerDelegate>
{
    _Bool _updateFlow;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    TVSStateMachine *_dataSourceStateMachine;	// 24 = 0x18
    UINavigationController *_childNavigationController;	// 32 = 0x20
    CDUnknownBlockType _textEntryCompletionHandler;	// 40 = 0x28
    NSTimer *_loadingTimer;	// 48 = 0x30
    NSObject<SATVAirplay2DataSource> *_dataSource;	// 56 = 0x38
}

+ (id)_trimCustomRoomName:(id)arg1;	// IMP=0x0000000100057a60
- (void).cxx_destruct;	// IMP=0x0000000100058904
@property(readonly, nonatomic, getter=_dataSource) NSObject<SATVAirplay2DataSource> *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic, getter=_loadingTimer, setter=_setLoadingTimer:) NSTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(copy, nonatomic, getter=_textEntryCompletionHandler, setter=_setTextEntryCompletionHandler:) CDUnknownBlockType textEntryCompletionHandler; // @synthesize textEntryCompletionHandler=_textEntryCompletionHandler;
@property(nonatomic, getter=isInUpdateFlow) _Bool updateFlow; // @synthesize updateFlow=_updateFlow;
@property(retain, nonatomic, getter=_childNavigationController, setter=_setChildNavigationController:) UINavigationController *childNavigationController; // @synthesize childNavigationController=_childNavigationController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)textEntryViewController:(id)arg1 didEnterText:(id)arg2;	// IMP=0x00000001000587d8
- (void)textEntryViewController:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000100058728
- (void)textEntryViewControllerDidCancel:(id)arg1;	// IMP=0x00000001000586c0
- (void)roomPickerViewControllerHomeHasBeenRemoved:(id)arg1;	// IMP=0x0000000100058674
- (void)roomPickerViewControllerWantsNewRoomViewController:(id)arg1;	// IMP=0x00000001000580f4
- (void)roomPickerViewController:(id)arg1 didSelectSuggestedRoom:(id)arg2;	// IMP=0x0000000100057f08
- (void)roomPickerViewController:(id)arg1 didSelectExistingRoom:(id)arg2;	// IMP=0x0000000100057d1c
- (void)homePickerViewController:(id)arg1 didSelectHome:(id)arg2;	// IMP=0x0000000100057b3c
- (void)airplay2DataSourceDidUpdate:(id)arg1;	// IMP=0x0000000100057af4
- (void)airplay2DataSource:(id)arg1 readyStateDidChange:(_Bool)arg2;	// IMP=0x0000000100057ae8
- (void)_presentCreateRoomFailedViewControllerWithError:(id)arg1;	// IMP=0x00000001000578c8
- (void)_postDataSourceReadyStateDidChangeEvent;	// IMP=0x0000000100057818
- (void)_scheduleLoadingTimer;	// IMP=0x0000000100057780
- (void)_loadingTimerFired;	// IMP=0x00000001000576d0
- (void)_showPickerViewControllers;	// IMP=0x00000001000575f8
- (void)_showLoadingViewController;	// IMP=0x0000000100057440
@property(readonly, nonatomic, getter=_dataSourceStateMachine) TVSStateMachine *dataSourceStateMachine; // @synthesize dataSourceStateMachine=_dataSourceStateMachine;
- (void)_moveOrAddLocalAccessoryToRoomNamed:(id)arg1 inHome:(id)arg2;	// IMP=0x0000000100056b40
- (void)_saveRoomName:(id)arg1 inHomeNamed:(id)arg2;	// IMP=0x0000000100056970
- (void)_sendCompletion;	// IMP=0x00000001000568e0
- (id)_makeLoadingViewController;	// IMP=0x00000001000567ac
- (id)_makeRoomPickerViewControllerForHome:(id)arg1;	// IMP=0x0000000100056600
- (id)_makeHomePickerViewController;	// IMP=0x0000000100056470
- (id)_makePickerViewControllers;	// IMP=0x0000000100056050
- (void)didEnterStateBackwards;	// IMP=0x0000000100056008
- (id)preferredFocusEnvironments;	// IMP=0x0000000100055f5c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100055ee8
- (void)viewDidLoad;	// IMP=0x0000000100055d70
- (id)initWithTapToSetupHomeKitInfo:(id)arg1;	// IMP=0x0000000100055b80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

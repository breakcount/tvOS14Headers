/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXMemoriesOnboardingViewControllerDelegate;
@class PXPhotoAnalysisStatusController, PXOnboardingWelcomeUIView, PXOnboardingStatusUIView, NSString;

@interface PXMemoriesOnboardingUIViewController : UIViewController <PXChangeObserver> {

	SCD_Struct_PX71 _needsUpdateFlags;
	id<PXMemoriesOnboardingViewControllerDelegate> _delegate;
	PXPhotoAnalysisStatusController* __statusController;
	unsigned long long __stage;
	PXOnboardingWelcomeUIView* __welcomeView;
	PXOnboardingStatusUIView* __statusView;

}

@property (nonatomic,readonly) PXPhotoAnalysisStatusController * _statusController;                         //@synthesize _statusController=__statusController - In the implementation block
@property (assign,setter=_setStage:,nonatomic) unsigned long long _stage;                                   //@synthesize _stage=__stage - In the implementation block
@property (assign,setter=_setWelcomeView:,nonatomic) PXOnboardingWelcomeUIView * _welcomeView;              //@synthesize _welcomeView=__welcomeView - In the implementation block
@property (assign,setter=_setStatusView:,nonatomic) PXOnboardingStatusUIView * _statusView;                 //@synthesize _statusView=__statusView - In the implementation block
@property (assign,nonatomic,__weak) id<PXMemoriesOnboardingViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXMemoriesOnboardingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PXMemoriesOnboardingViewControllerDelegate>)arg1 ;
-(BOOL)_needsUpdate;
-(unsigned long long)_stage;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)_setStage:(unsigned long long)arg1 ;
-(void)_updateIfNeeded;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)_updateViews;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXOnboardingStatusUIView *)_statusView;
-(PXPhotoAnalysisStatusController *)_statusController;
-(id)_constraintsForMaximizingView:(id)arg1 ;
-(void)_tearDownViews;
-(void)startButtonTapped:(id)arg1 ;
-(void)_invalidateStage;
-(void)_updateStageIfNeeded;
-(void)_invalidateProgress;
-(void)_updateProgressIfNeeded;
-(PXOnboardingWelcomeUIView *)_welcomeView;
-(void)_setWelcomeView:(id)arg1 ;
-(void)_setStatusView:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKContentContainerObserver.h>
#import <libobjc.A.dylib/PKViewWindowObserver.h>

@protocol UICoordinateSpace, PKCompactNavigationContainerControllerDelegate;
@class UIView, PKCompactNavigationContainedNavigationWrapperViewController, UIViewController, UITapGestureRecognizer, PKCompactNavigationContainedNavigationController, NSString;

@interface PKCompactNavigationContainerController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, PKContentContainerObserver, PKViewWindowObserver> {

	BOOL _centeredCard;
	BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
	unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
	BOOL _requiresMasking;
	UIView* _maskingContainerView;
	CGRect _maximumModalPresentationFrame;
	PKCompactNavigationContainedNavigationWrapperViewController* _presentationContextVC;
	SCD_Struct_PK29 _topVCInfo;
	CGRect _statusBarFrame;
	unsigned short _layoutGroupCounter;
	unsigned short _contentSizeUpdateDeferralCounter;
	BOOL _deferredContentSizeUpdate;
	BOOL _deferredContentSizeUpdateIsAnimated;
	BOOL _deferredContentSizeUpdateIsForced;
	UIViewController* _topVC;
	BOOL _topVCIsExpectedClass;
	BOOL _topVCIsInInitialLayout;
	UIViewController* _pendingTopVC;
	unsigned long long _pendingTopVCIdentifier;
	unsigned long long _updateChildViewControllerSizeCounter;
	UITapGestureRecognizer* _tapGestureRecognizer;
	unsigned char _visibility;
	BOOL _keyboardVisible;
	CGRect _keyboardFrame;
	CGRect _lastKeyboardFrame;
	BOOL _didMoveToWindowDirtiesLayout;
	BOOL _presentingNavigationController;
	PKCompactNavigationContainedNavigationController* _containedNavigationController;
	unsigned long long _style;
	id<UICoordinateSpace> _exclusionCoordinateSpace;
	id<PKCompactNavigationContainerControllerDelegate> _delegate;
	CGRect _exclusionRect;

}

@property (assign,getter=isPresentingNavigationController,nonatomic) BOOL presentingNavigationController;                     //@synthesize presentingNavigationController=_presentingNavigationController - In the implementation block
@property (assign,nonatomic) BOOL didMoveToWindowDirtiesLayout;                                                               //@synthesize didMoveToWindowDirtiesLayout=_didMoveToWindowDirtiesLayout - In the implementation block
@property (nonatomic,readonly) PKCompactNavigationContainedNavigationController * containedNavigationController;              //@synthesize containedNavigationController=_containedNavigationController - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) CGRect exclusionRect;                                                                          //@synthesize exclusionRect=_exclusionRect - In the implementation block
@property (nonatomic,readonly) id<UICoordinateSpace> exclusionCoordinateSpace;                                                //@synthesize exclusionCoordinateSpace=_exclusionCoordinateSpace - In the implementation block
@property (assign,nonatomic,__weak) id<PKCompactNavigationContainerControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dimmingColor;
-(id)init;
-(void)dealloc;
-(id<PKCompactNavigationContainerControllerDelegate>)delegate;
-(void)setDelegate:(id<PKCompactNavigationContainerControllerDelegate>)arg1 ;
-(unsigned long long)style;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(id)_backgroundColor;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)childViewControllerForStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(long long)preferredUserInterfaceStyle;
-(void)keyboardWillHide:(id)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(void)keyboardWillChange:(id)arg1 ;
-(void)_updateLayoutForKeyboardAction:(/*^block*/id)arg1 ;
-(void)contentContainer:(id)arg1 preferredContentSizeDidChangeForChildContentContainer:(id)arg2 ;
-(id)initWithNavigationController:(id)arg1 ;
-(id)childViewControllerForUserInterfaceStyle;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(CGSize)childViewControllerPreferredContentSizeForSize:(CGSize)arg1 isRoot:(BOOL)arg2 ;
-(CGSize)navigationControllerSizeForChildViewControllerPreferredContentSize:(CGSize)arg1 isRoot:(BOOL)arg2 ;
-(CGSize)childViewControllerSizeForNavigationControllerSize:(CGSize)arg1 ;
-(PKCompactNavigationContainedNavigationController *)containedNavigationController;
-(void)setPresentingNavigationController:(BOOL)arg1 ;
-(id)initWithNavigationController:(id)arg1 style:(unsigned long long)arg2 ;
-(void)_updateStatusBarFrame;
-(void)_updateTopViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateForKeyboardIfNecessary;
-(void)_beginLayoutGroup;
-(CGRect)_targetNavigationControllerFrameForInfo:(SCD_Struct_PK30)arg1 ;
-(void)updateChildViewControllerSizeAnimated:(BOOL)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_endLayoutGroup;
-(CGSize)_navigationControllerSizeForChildViewControllerInfo:(SCD_Struct_PK30)arg1 withCurrentInfo:(SCD_Struct_PK30)arg2 ;
-(void)updateChildViewControllerSizeAnimated:(BOOL)arg1 ;
-(SCD_Struct_PK30)_infoForViewController:(id)arg1 ;
-(CGSize)modalPresentationSize;
-(void)_updateTopViewControllerAsync:(id)arg1 animated:(BOOL)arg2 ;
-(void)observedView:(id)arg1 didMoveToWindow:(id)arg2 ;
-(void)insertBackgroundLevelView:(id)arg1 ;
-(void)setExclusionRect:(CGRect)arg1 withCoordinateSpace:(id)arg2 ;
-(BOOL)didMoveToWindowDirtiesLayout;
-(void)setDidMoveToWindowDirtiesLayout:(BOOL)arg1 ;
-(CGRect)exclusionRect;
-(id<UICoordinateSpace>)exclusionCoordinateSpace;
-(BOOL)isPresentingNavigationController;
@end


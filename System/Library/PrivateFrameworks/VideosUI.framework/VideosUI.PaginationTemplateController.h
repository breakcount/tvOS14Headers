/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface VideosUI.PaginationTemplateController : UIViewController {

	 bottomMarginForPageControl;
	 templateModel;
	 lastContentOffset;
	 lastScrollDirection;
	 currentPage;
	 isAnimationInProgress;
	 impressionsTracker;
	 impressionsCalculator;
	 $__lazy_storage_$_imageProxyQueue;
	 $__lazy_storage_$_animator;
	 $__lazy_storage_$_rightSwipeGestureRecognizer;
	 $__lazy_storage_$_leftSwipeGestureRecognizer;
	 playbackEventSubscriber;
	 currentPageView;
	 $__lazy_storage_$_reusableViews;
	 $__lazy_storage_$_pageControl;
	 $__lazy_storage_$_pageSwipeUpView;
	 $__lazy_storage_$_swipeUpGestureRecognizer;
	 $__lazy_storage_$_tapGestureRecognizer;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(void)leftSwipped:(id)arg1 ;
-(void)rightSwipped:(id)arg1 ;
-(void)swippedUp;
-(void)menuPressed;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UISwipeActionPullViewDelegate.h>

@protocol _UISwipeViewManipulator, _UISwipedView;
@class UISwipeActionController, UISwipeActionPullView, NSIndexPath, UIView, UIContextualAction, NSString;

@interface UISwipeOccurrence : NSObject <UISwipeActionPullViewDelegate> {

	struct {
		unsigned isTransitioning : 1;
		unsigned didNotifyWillFinish : 1;
		unsigned didNotifyDidFinish : 1;
		unsigned shouldReenableUserInteraction : 1;
		unsigned isRTL : 1;
		unsigned hasAmbiguousIndexPath : 1;
		unsigned didReloadData : 1;
	}  _flags;
	unsigned long long _actionExecutionCounter;
	UISwipeActionController* _controller;
	unsigned long long _style;
	unsigned long long _defaultStyle;
	UISwipeActionPullView* _leadingPullView;
	UISwipeActionPullView* _trailingPullView;
	id<_UISwipeViewManipulator> _manipulator;
	BOOL _swipedViewMaskWasRemoved;
	BOOL _active;
	NSIndexPath* _indexPath;
	long long _direction;
	double _offset;
	long long _state;
	unsigned long long _configuredDirection;
	UIView*<_UISwipedView> _swipedView;
	UIContextualAction* _currentAction;
	UIEdgeInsets _extraInsets;
	SCD_Struct_UI119 _currentSwipeInfo;

}

@property (nonatomic,copy) NSIndexPath * indexPath;                               //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) unsigned long long configuredDirection;              //@synthesize configuredDirection=_configuredDirection - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI119 currentSwipeInfo;                   //@synthesize currentSwipeInfo=_currentSwipeInfo - In the implementation block
@property (assign,nonatomic) UIEdgeInsets extraInsets;                            //@synthesize extraInsets=_extraInsets - In the implementation block
@property (nonatomic,retain) UIView*<_UISwipedView> swipedView;                   //@synthesize swipedView=_swipedView - In the implementation block
@property (assign,nonatomic) BOOL swipedViewMaskWasRemoved;                       //@synthesize swipedViewMaskWasRemoved=_swipedViewMaskWasRemoved - In the implementation block
@property (nonatomic,retain) UIContextualAction * currentAction;                  //@synthesize currentAction=_currentAction - In the implementation block
@property (assign,nonatomic) BOOL active;                                         //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) long long direction;                               //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double offset;                                       //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) long long state;                                   //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(long long)state;
-(NSIndexPath *)indexPath;
-(double)offset;
-(void)setOffset:(double)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(double)velocity;
-(long long)direction;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)updateLayout;
-(void)_transitionToState:(long long)arg1 ;
-(UIView*<_UISwipedView>)swipedView;
-(void)setSwipedView:(UIView*<_UISwipedView>)arg1 ;
-(id)_actionView;
-(id)actionView;
-(void)endSwipe;
-(void)setCurrentAction:(UIContextualAction *)arg1 ;
-(UIContextualAction *)currentAction;
-(void)setExtraInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)extraInsets;
-(void)beginSwipeTracking:(BOOL)arg1 ;
-(void)updateOffsetWithSwipeInfo:(SCD_Struct_UI119)arg1 isTracking:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setDidReloadData;
-(void)_setHasAmbiguousIndexPath;
-(void)_forceTeardown;
-(id)initWithController:(id)arg1 indexPath:(id)arg2 defaultStyle:(unsigned long long)arg3 ;
-(void)updateSwipedView;
-(SCD_Struct_UI117)prepareWithSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2 ;
-(BOOL)shouldDismissWithTouchLocation:(CGPoint)arg1 ;
-(BOOL)_hasAmbiguousIndexPath;
-(void)performPrimaryActionWithSwipeInfo:(SCD_Struct_UI119)arg1 ;
-(CGRect)swipedViewRestingFrame;
-(void)setupManipulatorWithController:(id)arg1 ;
-(unsigned long long)_styleForConfiguration:(id)arg1 ;
-(id)_pullViewForSwipeDirection:(unsigned long long)arg1 ;
-(void)_removeAndResetPullViewImmediately:(id)arg1 ;
-(void)_updatePullView:(id)arg1 ;
-(void)_updateSwipedStateOnSwipedView:(BOOL)arg1 ;
-(void)_freezeSwipedViewInsets;
-(void)_unfreezeSwipedViewInsets;
-(void)_resetItemWithSwipeInfo:(SCD_Struct_UI119)arg1 animated:(BOOL)arg2 deletion:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_moveItemWithSwipeInfo:(SCD_Struct_UI119)arg1 alongsideAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(double)_extraOffsetForOffset:(double)arg1 withDirection:(unsigned long long)arg2 ;
-(void)_updateLayoutUsingCurrentSwipeInfo:(BOOL)arg1 ;
-(void)_performSwipeAction:(id)arg1 inPullView:(id)arg2 swipeInfo:(SCD_Struct_UI119)arg3 ;
-(unsigned long long)_swipeDirectionForPullView:(id)arg1 ;
-(void)_executeLifecycleForPerformedAction:(id)arg1 sourceView:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_isSwipeDirectionExposingLeadingEdgePullView:(unsigned long long)arg1 ;
-(id)_pullViewForLeadingEdge:(BOOL)arg1 ;
-(CGRect)_frameForPullView:(id)arg1 inSwipedItem:(id)arg2 withContainer:(id)arg3 ;
-(SCD_Struct_UI119)currentSwipeInfo;
-(void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2 ;
-(double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1 ;
-(BOOL)_didReloadData;
-(id)lockActionViewForAnimation;
-(void)unlockActionViewForAnimation:(id)arg1 ;
-(unsigned long long)configuredDirection;
-(void)setConfiguredDirection:(unsigned long long)arg1 ;
-(void)setCurrentSwipeInfo:(SCD_Struct_UI119)arg1 ;
-(BOOL)swipedViewMaskWasRemoved;
-(void)setSwipedViewMaskWasRemoved:(BOOL)arg1 ;
@end


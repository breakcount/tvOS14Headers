/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:52 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class UIViewController;

@interface HBUITopShelfHostAnimationTransaction : BSTransaction {

	BOOL _backgroundUpdate;
	UIViewController* _containerViewController;
	UIViewController* _fromViewController;
	UIViewController* _toViewController;
	long long _animationDirection;

}

@property (nonatomic,__weak,readonly) UIViewController * containerViewController;              //@synthesize containerViewController=_containerViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * fromViewController;                          //@synthesize fromViewController=_fromViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * toViewController;                            //@synthesize toViewController=_toViewController - In the implementation block
@property (nonatomic,readonly) long long animationDirection;                                   //@synthesize animationDirection=_animationDirection - In the implementation block
@property (getter=isBackgroundUpdate,nonatomic,readonly) BOOL backgroundUpdate;                //@synthesize backgroundUpdate=_backgroundUpdate - In the implementation block
-(id)debugDescription;
-(void)_begin;
-(void)_didComplete;
-(void)_addAnimations;
-(UIViewController *)fromViewController;
-(UIViewController *)toViewController;
-(UIViewController *)containerViewController;
-(BOOL)isBackgroundUpdate;
-(long long)animationDirection;
-(id)initWithContainerViewController:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 animationDirection:(long long)arg4 isBackgroundUpdate:(BOOL)arg5 ;
-(void)_prepareForTransition;
-(void)_addFadeAnimations;
-(void)_addTransformAnimations;
@end


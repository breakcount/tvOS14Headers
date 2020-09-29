/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSString;

@interface GKDashboardPresentationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {

	BOOL _presenting;
	double _transitionDuration;

}

@property (assign,nonatomic) BOOL presenting;                        //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic) double transitionDuration;              //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentViewController:(id)arg1 presentingViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(BOOL)presenting;
@end

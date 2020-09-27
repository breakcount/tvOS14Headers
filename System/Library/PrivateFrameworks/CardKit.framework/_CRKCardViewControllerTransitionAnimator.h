/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CRKCardViewControllerTransitionAnimatorDelegate;
@interface _CRKCardViewControllerTransitionAnimator : NSObject {

	id<_CRKCardViewControllerTransitionAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_CRKCardViewControllerTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sectionShuffleTransitionAnimator;
-(id<_CRKCardViewControllerTransitionAnimatorDelegate>)delegate;
-(void)setDelegate:(id<_CRKCardViewControllerTransitionAnimatorDelegate>)arg1 ;
-(void)_prepareAnimationFromCardViewController:(id)arg1 toCardViewController:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)transitionFromCardViewController:(id)arg1 toCardViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

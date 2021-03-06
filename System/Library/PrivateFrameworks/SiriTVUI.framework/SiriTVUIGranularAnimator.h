/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriTVUIGranularAnimatorDelegate;
@class CADisplayLink;

@interface SiriTVUIGranularAnimator : NSObject {

	CADisplayLink* _displayLink;
	/*^block*/id _animation;
	/*^block*/id _completion;
	double _percentPerFrame;
	double _currentPercentage;
	double _endingPercentage;
	BOOL _countingDown;
	id<SiriTVUIGranularAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriTVUIGranularAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<SiriTVUIGranularAnimatorDelegate>)delegate;
-(void)setDelegate:(id<SiriTVUIGranularAnimatorDelegate>)arg1 ;
-(void)_displayLinkFired:(id)arg1 ;
-(void)beginAnimation:(/*^block*/id)arg1 withStartingPercentage:(double)arg2 endingPercentage:(double)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)_resetAnimation;
-(void)beginAnimationWithStartingPercentage:(double)arg1 endingPercentage:(double)arg2 duration:(double)arg3 ;
@end


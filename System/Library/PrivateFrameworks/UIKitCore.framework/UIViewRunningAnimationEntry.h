/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIIntervalAnimating, OS_dispatch_queue, UIViewAnimationComposing;
@class NSObject, UIViewAnimationState;

@interface UIViewRunningAnimationEntry : NSObject {

	id<UIIntervalAnimating> _animation;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	/*^block*/id _completionCallback;
	BOOL _invalidated;
	BOOL _running;
	UIViewAnimationState* _animationState;
	id<UIViewAnimationComposing> _composer;

}

@property (assign,nonatomic) BOOL invalidated; 
@property (assign,nonatomic) BOOL running;                                              //@synthesize running=_running - In the implementation block
@property (assign,nonatomic,__weak) UIViewAnimationState * animationState;              //@synthesize animationState=_animationState - In the implementation block
@property (nonatomic,retain) id<UIViewAnimationComposing> composer;                     //@synthesize composer=_composer - In the implementation block
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(void)setCompletionCallback:(/*^block*/id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)setComposer:(id<UIViewAnimationComposing>)arg1 ;
-(id<UIViewAnimationComposing>)composer;
-(BOOL)invalidated;
-(void)setAnimationState:(UIViewAnimationState *)arg1 ;
-(UIViewAnimationState *)animationState;
-(void)performWithoutLock:(/*^block*/id)arg1 ;
-(void)performWithLock:(/*^block*/id)arg1 ;
-(id)initWithAnimation:(id)arg1 completion:(/*^block*/id)arg2 composer:(id)arg3 ;
-(void)performCompletionCallbackFinished:(BOOL)arg1 ;
@end


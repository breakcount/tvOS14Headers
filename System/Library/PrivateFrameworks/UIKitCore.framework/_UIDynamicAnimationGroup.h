/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDynamicAnimation.h>

@class NSMutableArray, NSArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {

	/*^block*/id _applier;
	NSMutableArray* _animations;
	NSMutableArray* _runningAnimations;

}

@property (nonatomic,copy) NSArray * animations;              //@synthesize animations=_animations - In the implementation block
-(void)dealloc;
-(void)addAnimation:(id)arg1 ;
-(NSArray *)animations;
-(void)setAnimations:(NSArray *)arg1 ;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAnimation:(id)arg1 ;
-(BOOL)_animateForInterval:(double)arg1 ;
-(void)_stopAnimation;
-(void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2 ;
-(void)runWithGroupApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4 ;
-(void)runWithGroupApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end


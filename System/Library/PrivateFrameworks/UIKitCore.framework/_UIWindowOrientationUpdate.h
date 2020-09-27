/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, BSAnimationSettings;

@interface _UIWindowOrientationUpdate : NSObject {

	NSMutableSet* _trackedFences;
	long long _toOrientation;
	BSAnimationSettings* _transitionAnimationSettings;
	/*^block*/id _updateBlock;

}

@property (nonatomic,readonly) long long toOrientation;                                    //@synthesize toOrientation=_toOrientation - In the implementation block
@property (nonatomic,copy) BSAnimationSettings * transitionAnimationSettings;              //@synthesize transitionAnimationSettings=_transitionAnimationSettings - In the implementation block
@property (nonatomic,copy,readonly) id updateBlock;                                        //@synthesize updateBlock=_updateBlock - In the implementation block
-(void)invalidateFences;
-(id)updateBlock;
-(long long)toOrientation;
-(void)trackFence:(id)arg1 ;
-(id)initWithOrientation:(long long)arg1 transitionAnimationSettings:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)transferFencesToUpdate:(id)arg1 ;
-(void)synchronizeDrawingWithFencesOnScene:(id)arg1 ;
-(BSAnimationSettings *)transitionAnimationSettings;
-(void)setTransitionAnimationSettings:(BSAnimationSettings *)arg1 ;
@end


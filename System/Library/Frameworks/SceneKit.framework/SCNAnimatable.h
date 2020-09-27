/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol SCNAnimatable <NSObject>
@property (readonly) NSArray * animationKeys; 
@required
-(void)removeAnimationForKey:(id)arg1;
-(id)animationForKey:(id)arg1;
-(void)addAnimation:(id)arg1 forKey:(id)arg2;
-(void)removeAllAnimations;
-(NSArray *)animationKeys;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
-(id)animationPlayerForKey:(id)arg1;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
-(void)pauseAnimationForKey:(id)arg1;
-(void)resumeAnimationForKey:(id)arg1;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
-(BOOL)isAnimationForKeyPaused:(id)arg1;

@end


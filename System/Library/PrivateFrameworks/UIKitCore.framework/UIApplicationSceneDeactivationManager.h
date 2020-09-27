/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, NSMutableSet, FBScene, NSString;

@interface UIApplicationSceneDeactivationManager : NSObject <BSDescriptionProviding> {

	NSHashTable* _assertions;
	NSMutableSet* _eligibleScenes;
	FBScene* _updatingScene;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)assertions;
-(void)removeAssertion:(id)arg1 ;
-(id)newAssertionWithReason:(long long)arg1 ;
-(void)addAssertion:(id)arg1 withTransitionContext:(id)arg2 ;
-(BOOL)_isEligibleScene:(id)arg1 withSettings:(id)arg2 ;
-(void)_trackScene:(id)arg1 ;
-(void)_untrackScene:(id)arg1 ;
-(BOOL)_isEligibleScene:(id)arg1 ;
-(BOOL)_areEligibleSettings:(id)arg1 ;
-(unsigned long long)_deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2 ;
-(void)_setDeactivationReasons:(unsigned long long)arg1 onScene:(id)arg2 withSettings:(id)arg3 reason:(id)arg4 ;
-(void)_updateScenesWithTransitionContext:(id)arg1 reason:(id)arg2 ;
-(BOOL)_isEligibleProcess:(id)arg1 ;
-(void)beginTrackingScene:(id)arg1 ;
-(void)endTrackingScene:(id)arg1 ;
-(void)amendSceneSettings:(id)arg1 forScene:(id)arg2 ;
-(id)eligibleScenes;
@end


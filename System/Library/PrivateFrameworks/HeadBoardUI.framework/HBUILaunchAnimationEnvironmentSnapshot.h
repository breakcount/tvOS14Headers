/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface HBUILaunchAnimationEnvironmentSnapshot : NSObject {

	NSHashTable* _animationEnvironments;

}

@property (nonatomic,readonly) NSHashTable * animationEnvironments;              //@synthesize animationEnvironments=_animationEnvironments - In the implementation block
+(id)snapshotWithRootEnvironment:(id)arg1 animationContext:(id)arg2 ;
-(id)debugDescription;
-(id)_initWithAnimationEnvironments:(id)arg1 ;
-(void)willBeginLaunchAnimationWithContext:(id)arg1 ;
-(void)didFinishLaunchAnimationWithContext:(id)arg1 ;
-(id)launchAnimationsWithContext:(id)arg1 ;
-(id)initWithAnimationEnvironment:(id)arg1 ;
-(NSHashTable *)animationEnvironments;
@end


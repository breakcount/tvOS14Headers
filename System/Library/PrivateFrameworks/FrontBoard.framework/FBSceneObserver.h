/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneObserver <NSObject>
@optional
-(void)sceneContentStateDidChange:(id)arg1;
-(void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
-(void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
-(void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
-(void)sceneDidInvalidate:(id)arg1;

@end


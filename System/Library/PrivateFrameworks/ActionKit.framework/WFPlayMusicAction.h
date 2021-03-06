/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFPlayMusicAction : WFAction
-(long long)repeatMode;
-(long long)shuffleMode;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(id)localizedKeyParameterDisplayName;
-(void)getContentFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getRemoteControlDestinationForPlaybackArchive:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)mediaQueryFromMediaCollection:(id)arg1 ;
-(void)playContentViaMPCAssistant:(id)arg1 routeDescriptor:(id)arg2 ;
-(void)sendPlaybackArchive:(id)arg1 orPlaybackQueue:(id)arg2 toDestination:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)playContentViaMusicPlayer:(id)arg1 ;
-(void)playContent:(id)arg1 withMusicPlayer:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end


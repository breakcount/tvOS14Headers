/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/FBSSceneSnapshotRequestDelegate.h>
#import <libobjc.A.dylib/FBSSceneHandle.h>
#import <libobjc.A.dylib/FBSSceneAgentProxy.h>
#import <libobjc.A.dylib/FBSSceneUpdaterDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSSceneClientAgent, FBSSceneUpdater, FBSSceneDelegate;
@class FBSSerialQueue, NSString, FBSSceneSpecification, NSMutableArray, FBSSceneSettings, FBSSceneClientSettings, NSOrderedSet, FBSSceneIdentityToken;

@interface FBSScene : NSObject <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy, FBSSceneUpdaterDelegate, BSDescriptionProviding> {

	FBSSerialQueue* _callOutQueue;
	NSString* _identifier;
	NSString* _group;
	FBSSceneSpecification* _specification;
	BOOL _hasAgent;
	id<FBSSceneClientAgent> _callOutQueue_agent;
	NSMutableArray* _callOutQueue_agentSessions;
	/*^block*/id _callOutQueue_agentMessageHandler;
	BOOL _callOutQueue_agentInvalidateCalled;
	os_unfair_lock_s _lock;
	id<FBSSceneUpdater> _lock_updater;
	FBSSceneSettings* _lock_settings;
	FBSSceneClientSettings* _lock_clientSettings;
	NSOrderedSet* _lock_layers;
	id<FBSSceneDelegate> _lock_delegate;
	FBSSceneIdentityToken* _identityToken;

}

@property (nonatomic,copy,readonly) NSString * _groupID;                             //@synthesize group=_group - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) FBSSceneIdentityToken * identityToken; 
@property (nonatomic,readonly) FBSSceneSpecification * specification; 
@property (assign,nonatomic,__weak) id<FBSSceneDelegate> delegate; 
@property (nonatomic,readonly) FBSSceneSettings * settings; 
@property (nonatomic,readonly) FBSSceneClientSettings * clientSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_canHaveAgent;
-(BOOL)isPersistable;
-(id)uiSettings;
-(id)uiClientSettings;
-(void)updateUIClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateUIClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(BOOL)uiCanReceiveDeviceOrientationEvents;
-(NSString *)description;
-(id)init;
-(id<FBSSceneDelegate>)delegate;
-(void)setDelegate:(id<FBSSceneDelegate>)arg1 ;
-(NSString *)identifier;
-(id)parameters;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(FBSSceneSpecification *)specification;
-(FBSSceneSettings *)settings;
-(void)sendActions:(id)arg1 ;
-(id)display;
-(BOOL)snapshotRequestAllowSnapshot:(id)arg1 ;
-(BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(id)layers;
-(void)_calloutQueue_comsumeLock_updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)updateClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(FBSSceneClientSettings *)clientSettings;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(id)snapshotRequest;
-(id)callOutQueue;
-(void)_callOutQueue_invalidateAgent;
-(id)hostProcess;
-(id)counterpartAgent;
-(id)clientProcess;
-(id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2 ;
-(id)sessionForIdentifier:(id)arg1 ;
-(void)closeSession:(id)arg1 ;
-(void)agent:(id)arg1 registerMessageHandler:(/*^block*/id)arg2 ;
-(void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updater:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(FBSSceneIdentityToken *)identityToken;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(void)detachContext:(id)arg1 ;
-(BOOL)invalidateSnapshotWithContext:(id)arg1 ;
-(id)fbsDisplay;
-(id)contexts;
-(id)_initWithUpdater:(id)arg1 sceneID:(id)arg2 groupID:(id)arg3 specification:(id)arg4 settings:(id)arg5 initialClientSettings:(id)arg6 ;
-(void)_callOutQueue_invalidate;
-(BOOL)_hasAgent;
-(void)_callOutQueue_agent_didCreateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)_groupID;
@end


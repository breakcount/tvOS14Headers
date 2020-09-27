/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/FBSOpenApplicationServiceServerInterface.h>

@protocol FBSApplicationInfoProvider, FBSystemServiceDelegate;
@class FBSSerialQueue, BSServiceConnectionListener, FBServiceFacilityServer, NSString;

@interface FBSystemService : NSObject <BSServiceConnectionListenerDelegate, FBSOpenApplicationServiceServerInterface> {

	FBSSerialQueue* _queue;
	BSServiceConnectionListener* _legacyOpenServiceListener;
	int _pendingExit;
	id<FBSApplicationInfoProvider> _lock_defaultInfoProvider;
	os_unfair_lock_s _defaultInfoProviderLock;
	id<FBSystemServiceDelegate> _delegate;
	FBServiceFacilityServer* _server;

}

@property (nonatomic,retain) FBServiceFacilityServer * server;                                       //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) id<FBSApplicationInfoProvider> _applicationInfoProvider; 
@property (nonatomic,readonly) FBSSerialQueue * queue;                                               //@synthesize queue=_queue - In the implementation block
@property (getter=isPendingExit,readonly) BOOL pendingExit; 
@property (assign,nonatomic,__weak) id<FBSystemServiceDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id<FBSystemServiceDelegate>)delegate;
-(void)setDelegate:(id<FBSystemServiceDelegate>)arg1 ;
-(FBSSerialQueue *)queue;
-(FBServiceFacilityServer *)server;
-(id)initWithQueue:(id)arg1 ;
-(void)canOpenApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)openApplication:(id)arg1 withOptions:(id)arg2 originator:(id)arg3 requestID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setServer:(FBServiceFacilityServer *)arg1 ;
-(void)shutdownWithOptions:(unsigned long long)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)isPasscodeLockedOrBlockedWithResult:(/*^block*/id)arg1 ;
-(void)handleActions:(id)arg1 source:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)shutdownWithOptions:(id)arg1 origin:(id)arg2 ;
-(void)_setInfoProvider;
-(void)prepareForExitAndRelaunch:(BOOL)arg1 ;
-(void)shutdownWithOptions:(unsigned long long)arg1 forSource:(long long)arg2 ;
-(void)setPendingExit:(BOOL)arg1 ;
-(unsigned long long)_mapShutdownOptionsToOptions:(id)arg1 ;
-(void)_performExitTasksForRelaunch:(BOOL)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 withOptions:(unsigned long long)arg2 ;
-(BOOL)isPendingExit;
-(void)_terminateProcesses:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id<FBSApplicationInfoProvider>)_applicationInfoProvider;
-(void)_reallyActivateApplication:(id)arg1 requestID:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 isTrusted:(BOOL)arg6 sequenceNumber:(unsigned long long)arg7 cacheGUID:(id)arg8 ourSequenceNumber:(unsigned long long)arg9 ourCacheGUID:(id)arg10 withResult:(/*^block*/id)arg11 ;
-(BOOL)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4 ;
-(BOOL)_isTrustedRequest:(id)arg1 forCaller:(id)arg2 fromClient:(id)arg3 forBundleInfo:(id)arg4 withOptions:(id)arg5 fatalError:(out id*)arg6 ;
-(void)_activateBundleID:(id)arg1 requestID:(id)arg2 isTrusted:(BOOL)arg3 options:(id)arg4 source:(id)arg5 originalSource:(id)arg6 withResult:(/*^block*/id)arg7 ;
-(void)prepareDisplaysForExit;
-(BOOL)_isWhitelistedLaunchSuspendedApp:(id)arg1 ;
-(void)shutdownAndReboot:(BOOL)arg1 ;
-(void)shutdownUsingOptions:(id)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 ;
-(void)setSystemIdleSleepDisabled:(BOOL)arg1 forReason:(id)arg2 ;
@end


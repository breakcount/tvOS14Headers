/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ServiceInterface, OS_dispatch_queue;
@class AnalyticsWorkspace, NSMutableSet, NSXPCConnection, NSObject;

@interface NWNetworkOfInterestManager : NSObject {

	AnalyticsWorkspace* workspace;
	NSMutableSet* registryNOI;
	int notifyToken;
	BOOL closing;
	id _delegate;
	NSXPCConnection* _connection;
	id<ServiceInterface> _service;
	NSObject*<OS_dispatch_queue> _callerQueue;

}

@property (retain) NSXPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (retain) id<ServiceInterface> service;                          //@synthesize service=_service - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callerQueue;              //@synthesize callerQueue=_callerQueue - In the implementation block
@property (assign,nonatomic) id delegate;                                 //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setQueue:(id)arg1 ;
-(id<ServiceInterface>)service;
-(void)destroy;
-(BOOL)_connect;
-(void)setService:(id<ServiceInterface>)arg1 ;
-(void)trackNOIAnyForInterfaceType:(long long)arg1 options:(id)arg2 ;
-(void)auditableLinkQualityForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)callerQueue;
-(void)haveNOIs:(id)arg1 tornDown:(BOOL)arg2 ;
-(void)updateNOI:(id)arg1 keyPath:(id)arg2 change:(id)arg3 ;
-(void)_unloadState;
-(void)_commonFinalizeRequestFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 isStaged:(BOOL)arg4 ;
-(void)_commonTrackRequestFor:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 options:(id)arg4 isCustom:(id)arg5 ;
-(void)canUseOnAlternateNOI:(id)arg1 appStates:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)trackAllBuiltinNOIsForInterfaceType:(long long)arg1 options:(id)arg2 ;
-(void)trackCustomNOI:(id)arg1 options:(id)arg2 ;
-(void)updatePredictionsForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)instantQualityForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)networkAttachmentInfoForScopedNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)linkThroughputOnNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)estimatedDataTransferTimeOnNOI:(id)arg1 withPayloadInfo:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)foregroundNetworkActivityUnderwayOn:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)canUseOnAlternateNOI:(id)arg1 apps:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)stopTrackingNOIs:(id)arg1 ;
-(BOOL)isClosing;
-(void)errorPredictionsForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dayOfWeekPredictionGroupingForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)trainingProgressForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)trafficInvitesHourlyDistributionForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)interfaceTimelineForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCallerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end


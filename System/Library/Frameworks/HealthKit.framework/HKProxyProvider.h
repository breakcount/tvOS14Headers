/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _HKXPCExportable;
#import <HealthKit/HealthKit-Structs.h>
@class HKHealthStore, _HKXPCConnection, NSString, NSXPCInterface, NSMutableArray, NSObject;

@interface HKProxyProvider : NSObject {

	HKHealthStore* _strongHealthStore;
	HKHealthStore* _weakHealthStore;
	_HKXPCConnection* _connection;
	NSString* _daemonLaunchNotificationName;
	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteInterface;
	long long _connectionGeneration;
	BOOL _invalidated;
	/*^block*/id _lock_automaticProxyReconnectionHandler;
	os_unfair_lock_s _lock;
	int _notifyToken;
	NSMutableArray* _pendingFetchContinuations;
	BOOL _shouldRetryOnInterruption;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSString* _proxyIdentifier;
	id<_HKXPCExportable> _exportedObject;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * proxyIdentifier;                         //@synthesize proxyIdentifier=_proxyIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) id<_HKXPCExportable> exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
@property (copy) id automaticProxyReconnectionHandler; 
@property (assign) BOOL shouldRetryOnInterruption;                                      //@synthesize shouldRetryOnInterruption=_shouldRetryOnInterruption - In the implementation block
+(id)_relaunchQueue;
-(id)description;
-(void)dealloc;
-(void)invalidate;
-(id<_HKXPCExportable>)exportedObject;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSString *)proxyIdentifier;
-(void)setShouldRetryOnInterruption:(BOOL)arg1 ;
-(void)fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)clientQueueObjectHandlerWithCompletion:(/*^block*/id)arg1 ;
-(/*^block*/id)clientQueueActionHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)setAutomaticProxyReconnectionHandler:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 proxyIdentifier:(id)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteInterface:(id)arg5 ;
-(void)_serverDidFinishLaunching;
-(id)automaticProxyReconnectionHandler;
-(BOOL)shouldRetryOnInterruption;
-(void)_getSynchronousProxyWithErrorCount:(long long)arg1 handler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_getSynchronousProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_lock_flushContinuationsWithConnection:(id)arg1 error:(id)arg2 ;
-(void)_fetchRetryingProxyWithErrorCount:(long long)arg1 handler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_handleError:(id)arg1 connectionGeneration:(long long)arg2 ;
-(void)_lock_fetchEndpointAndConnectionWithContinuation:(/*^block*/id)arg1 ;
-(void)_resetConnectionWithGeneration:(long long)arg1 ;
-(void)_lock_setUpConnectionWithEndpoint:(id)arg1 ;
-(void)fetchProxyServiceEndpointForIdentifier:(id)arg1 healthStore:(id)arg2 endpointHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)getHealthStoreWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithHealthStore:(id)arg1 proxyIdentifier:(id)arg2 exportedObject:(id)arg3 ;
-(void)referenceHealthStoreWeakly;
-(void)getSynchronousProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)clientQueueDoubleObjectHandlerWithCompletion:(/*^block*/id)arg1 ;
-(/*^block*/id)clientQueueProgressHandlerWithHandler:(/*^block*/id)arg1 ;
@end


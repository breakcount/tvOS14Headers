/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLXPCProxyCreating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, PLXPCMessageLogger, PLAssetsdClientService, NSString;

@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _externalNotificationQueue;
	NSXPCConnection* _connection;
	PLXPCMessageLogger* _connectionLogger;
	PLAssetsdClientService* _assetsdClientService;
	BOOL _isShuttingDown;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_unboostingRemoteObjectProxy;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(void)handleInterruption;
-(void)addPhotoLibraryUnavailabilityHandler:(/*^block*/id)arg1 ;
-(void)prepareToShutdown;
-(void)_postInterruptedNotification;
-(void)handleInvalidation;
-(id)connectionWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end


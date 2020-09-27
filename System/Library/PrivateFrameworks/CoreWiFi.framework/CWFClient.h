/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CWFXPCEventProxyDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSXPCConnection;

@interface CWFClient : NSObject <CWFXPCEventProxyDelegate> {

	NSObject*<OS_dispatch_queue> _mutex;
	NSMutableDictionary* _mutableEventIDMap;
	NSMutableDictionary* _mutableActivityMap;
	NSMutableDictionary* _mutableEventCallbackMap;
	BOOL _invalidated;
	NSXPCConnection* _XPCConnection;
	long long _serviceType;

}

@property (assign) BOOL invalidated;                                      //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) NSXPCConnection * XPCConnection;                     //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (readonly) long long serviceType;                               //@synthesize serviceType=_serviceType - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (copy) id invalidationHandler; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(long long)serviceType;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSXPCConnection *)XPCConnection;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(BOOL)invalidated;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(id)initWithServiceType:(long long)arg1 ;
-(void)proxy:(id)arg1 receivedEvent:(id)arg2 ;
-(/*^block*/id)eventHandlerWithEventID:(id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 eventID:(id)arg2 ;
-(BOOL)beginActivity:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3 ;
-(void)endActivity:(id)arg1 requestParameters:(id)arg2 ;
-(void)endAllActivities:(id)arg1 ;
-(BOOL)startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3 ;
-(void)stopMonitoringEvent:(id)arg1 requestParameters:(id)arg2 ;
-(void)stopMonitoringAllEvents:(id)arg1 ;
-(void)clearAllEventHandlers;
-(void)__startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)__beginActivity:(id)arg1 requestParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
@end


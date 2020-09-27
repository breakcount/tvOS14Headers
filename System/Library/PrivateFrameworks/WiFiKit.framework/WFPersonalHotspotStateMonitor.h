/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class WFClient, NSObject, NSRunLoop, NSThread;

@interface WFPersonalHotspotStateMonitor : NSObject {

	WFClient* _client;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSRunLoop* _callbackRunLoop;
	NSThread* _callbackThread;

}

@property (nonatomic,retain) WFClient * client;                                       //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign) NSRunLoop * callbackRunLoop;                                       //@synthesize callbackRunLoop=_callbackRunLoop - In the implementation block
@property (nonatomic,retain) NSThread * callbackThread;                               //@synthesize callbackThread=_callbackThread - In the implementation block
-(id)init;
-(void)dealloc;
-(WFClient *)client;
-(void)setClient:(WFClient *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSThread *)callbackThread;
-(void)setCallbackThread:(NSThread *)arg1 ;
-(NSRunLoop *)callbackRunLoop;
-(void)setCallbackRunLoop:(NSRunLoop *)arg1 ;
-(void)asyncMISDiscoveryState:(/*^block*/id)arg1 ;
-(void)setMISDiscoveryState:(BOOL)arg1 immediateDisable:(BOOL)arg2 ;
-(void)_spawnManagerCallbackThread;
-(void)_runManagerCallbackThread;
@end


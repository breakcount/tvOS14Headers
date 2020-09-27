/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {

	SCD_Union_NS71 _connection;
	NSObject*<OS_dispatch_queue> _userQueue;
	A@ _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	unsigned char _remote;

}

@property (__weak) id<NSXPCListenerDelegate> delegate; 
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
+(id)_UUID;
+(id)anonymousListener;
+(id)serviceListener;
+(void)enableTransactions;
-(id)description;
-(void)dealloc;
-(void)invalidate;
-(id<NSXPCListenerDelegate>)delegate;
-(void)setDelegate:(id<NSXPCListenerDelegate>)arg1 ;
-(id)_queue;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)suspend;
-(void)stop;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)_setQueue:(id)arg1 ;
-(id)_xpcConnection;
-(id)initWithServiceName:(id)arg1 ;
-(void)activate;
-(id)serviceName;
-(id)_initShared;
-(id)_initWithRemoteName:(id)arg1 ;
-(id)__initWithoutRemoteConnection;
-(void)__receiveRemoteConnection:(id)arg1 ;
@end

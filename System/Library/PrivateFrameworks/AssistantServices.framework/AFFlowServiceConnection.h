/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface AFFlowServiceConnection : NSObject {

	NSXPCConnection* _connection;
	unsigned long long _pendingTransactionCount;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedConnection;
-(id)_init;
-(id)_connection;
-(void)_clearConnection;
-(void)invokeMethodOnRemoteWithBlock:(/*^block*/id)arg1 onError:(/*^block*/id)arg2 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableSet, NSString;

@interface BSBaseXPCServer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listenerConnection;
	NSMutableSet* _clients;
	BOOL _connectionResumed;
	NSString* _serviceName;
	int _notifyToken;
	BOOL _usesAnonymousConnection;

}

@property (assign,getter=usesAnonymousConnection,nonatomic) BOOL usesAnonymousConnection;              //@synthesize usesAnonymousConnection=_usesAnonymousConnection - In the implementation block
-(void)dealloc;
-(void)run;
-(id)_clients;
-(id)_connection;
-(void)_invalidate;
-(id)queue;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(void)registerServerSuspended;
-(void)resumeServer;
-(BOOL)queue_shouldAcceptNewConnection:(id)arg1 ;
-(id)queue_newClientForConnection:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(void)queue_clientAdded:(id)arg1 ;
-(id)_queue_clientForConnection:(id)arg1 ;
-(void)queue_clientRemoved:(id)arg1 ;
-(Class)queue_classForNewClientConnection:(id)arg1 ;
-(void)_sendReplyForMessage:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_sendMessageReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_sendReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(id)_getStringFromMessage:(id)arg1 key:(char*)arg2 ;
-(id)_copyEndpoint;
-(BOOL)usesAnonymousConnection;
-(void)setUsesAnonymousConnection:(BOOL)arg1 ;
@end


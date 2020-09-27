/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSXPCConnection;

@interface ASDRequestBroker : NSObject {

	NSMutableDictionary* _activeRequests;
	NSXPCConnection* _connection;

}

@property (readonly) NSMutableDictionary * activeRequests;              //@synthesize activeRequests=_activeRequests - In the implementation block
@property (retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
+(id)interface;
-(id)description;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)markRequestAsComplete:(id)arg1 ;
-(void)markRequestAsActive:(id)arg1 ;
-(void)cancelAllRequestsWithErrorHandler:(/*^block*/id)arg1 ;
-(void)submitRequest:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)_startConnection;
-(NSMutableDictionary *)activeRequests;
@end


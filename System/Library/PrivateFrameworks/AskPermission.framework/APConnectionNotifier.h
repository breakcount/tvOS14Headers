/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface APConnectionNotifier : NSObject {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSXPCConnection* _underlyingRemoteConnection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * underlyingRemoteConnection;                //@synthesize underlyingRemoteConnection=_underlyingRemoteConnection - In the implementation block
@property (nonatomic,readonly) id<ConnectionProtocol> remoteObjectProxy; 
+(id)sharedNotifier;
-(id)init;
-(id<ConnectionProtocol>)remoteObjectProxy;
-(id)_remoteConnection;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(NSXPCConnection *)underlyingRemoteConnection;
-(id)_newRemoteConnection;
-(void)setUnderlyingRemoteConnection:(NSXPCConnection *)arg1 ;
@end


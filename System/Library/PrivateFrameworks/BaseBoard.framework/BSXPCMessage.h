/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface BSXPCMessage : NSObject {

	/*^block*/id _replyHandler;
	NSObject*<OS_dispatch_queue> _replyQueue;
	int _invalidated;
	int _replied;
	NSObject*<OS_xpc_object> _message;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> payload;              //@synthesize message=_message - In the implementation block
+(id)messageWithPacker:(/*^block*/id)arg1 ;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/id)arg3 replyHandler:(/*^block*/id)arg4 replyQueue:(id)arg5 ;
+(void)sendMessageWithPacker:(/*^block*/id)arg1 toConnection:(id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
+(const char*)messageTypeKey;
+(id)messageWithPayload:(id)arg1 ;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/id)arg3 ;
+(void)sendMessageWithPacker:(/*^block*/id)arg1 toConnection:(id)arg2 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/id)arg2 ;
+(id)messageWithPacker:(/*^block*/id)arg1 replyHandler:(/*^block*/id)arg2 replyQueue:(id)arg3 ;
-(id)description;
-(NSObject*<OS_xpc_object>)payload;
-(BOOL)sendToConnection:(id)arg1 ;
-(BOOL)sendToConnection:(id)arg1 replyQueue:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(id)sendSynchronouslyToConnection:(id)arg1 error:(id*)arg2 ;
-(id)initWithMessage:(long long)arg1 packer:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
-(void)forcefullyInvokeReplyHandler:(id)arg1 ;
@end


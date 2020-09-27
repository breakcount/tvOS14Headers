/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, BSXPCServiceConnectionMessage;
@class NSObject;

@interface FBSXPCMessage : NSObject {

	NSObject*<OS_xpc_object> _payload;
	id<BSXPCServiceConnectionMessage> _reply;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> payload;              //@synthesize payload=_payload - In the implementation block
+(id)messageWithPacker:(/*^block*/id)arg1 ;
+(id)messageWithPayload:(id)arg1 ;
+(id)message;
+(id)messageWithBSXPCMessage:(id)arg1 ownReply:(BOOL)arg2 ;
-(id)init;
-(NSObject*<OS_xpc_object>)payload;
-(id)initWithMessagePayload:(id)arg1 ;
-(id)initWithMessagePacker:(/*^block*/id)arg1 ;
-(void)sendReplyMessageWithPacker:(/*^block*/id)arg1 ;
@end


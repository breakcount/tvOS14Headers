/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>

@protocol OS_xpc_object;
@class MBConnection, NSObject, NSMutableDictionary, NSString, NSArray, NSError;

@interface MBMessage : NSObject <NSKeyedArchiverDelegate> {

	MBConnection* _connection;
	NSObject*<OS_xpc_object> _xpcObject;
	NSMutableDictionary* _messageInfo;
	NSMutableDictionary* _replyInfo;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcObject;                       //@synthesize xpcObject=_xpcObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageInfo;                        //@synthesize messageInfo=_messageInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * replyInfo;                          //@synthesize replyInfo=_replyInfo - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * arguments; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) NSObject*<NSSecureCoding>*<NSCopying> reply; 
@property (nonatomic,retain) NSError * replyError; 
@property (nonatomic,retain) MBConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_allowedClasses;
+(id)messageWithName:(id)arg1 arguments:(id)arg2 ;
-(NSString *)name;
-(NSString *)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)arguments;
-(void)archiver:(id)arg1 didEncodeObject:(id)arg2 ;
-(MBConnection *)connection;
-(void)setConnection:(MBConnection *)arg1 ;
-(void)setReply:(NSObject*<NSSecureCoding>*<NSCopying>)arg1 ;
-(NSObject*<NSSecureCoding>*<NSCopying>)reply;
-(NSObject*<OS_xpc_object>)xpcObject;
-(id)_xpcObject;
-(void)sendReply;
-(NSError *)replyError;
-(id)_initWithXPCObject:(id)arg1 ;
-(id)initWithName:(id)arg1 arguments:(id)arg2 ;
-(void)setReplyError:(NSError *)arg1 ;
-(void)setXpcObject:(NSObject*<OS_xpc_object>)arg1 ;
-(NSMutableDictionary *)messageInfo;
-(void)setMessageInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)replyInfo;
-(void)setReplyInfo:(NSMutableDictionary *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEventMessage.h>

@class NSString;

@interface OSActivityLogMessageEvent : OSActivityEventMessage {

	unsigned char _messageType;
	NSString* _subsystem;
	NSString* _category;
	unsigned long long _senderProgramCounter;

}

@property (nonatomic,copy,readonly) NSString * subsystem;                            //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;                             //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long senderProgramCounter;              //@synthesize senderProgramCounter=_senderProgramCounter - In the implementation block
@property (nonatomic,readonly) unsigned char messageType;                            //@synthesize messageType=_messageType - In the implementation block
-(NSString *)category;
-(unsigned char)messageType;
-(NSString *)subsystem;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)senderProgramCounter;
@end


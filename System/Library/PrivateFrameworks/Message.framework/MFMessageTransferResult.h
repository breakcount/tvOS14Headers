/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MFMessageTransferResult : NSObject {

	unsigned long long _resultCode;
	NSArray* _failedMessages;
	NSArray* _transferedMessages;

}

@property (nonatomic,readonly) unsigned long long resultCode;              //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) NSArray * failedMessages;                   //@synthesize failedMessages=_failedMessages - In the implementation block
@property (nonatomic,readonly) NSArray * transferedMessages;               //@synthesize transferedMessages=_transferedMessages - In the implementation block
-(id)debugDescription;
-(void)dealloc;
-(unsigned long long)resultCode;
-(NSArray *)transferedMessages;
-(NSArray *)failedMessages;
-(id)initWithResultCode:(unsigned long long)arg1 failedMessages:(id)arg2 transferedMessage:(id)arg3 ;
@end


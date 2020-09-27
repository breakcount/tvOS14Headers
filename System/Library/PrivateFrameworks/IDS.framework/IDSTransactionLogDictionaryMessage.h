/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSTransactionLogMessage.h>

@class NSDictionary;

@interface IDSTransactionLogDictionaryMessage : IDSTransactionLogMessage {

	NSDictionary* _dictionaryValue;

}

@property (nonatomic,readonly) NSDictionary * dictionaryValue;              //@synthesize dictionaryValue=_dictionaryValue - In the implementation block
-(id)dictionaryRepresentation;
-(NSDictionary *)dictionaryValue;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5 ;
@end


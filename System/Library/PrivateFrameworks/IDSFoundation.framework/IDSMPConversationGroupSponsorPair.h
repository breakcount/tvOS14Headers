/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSMPConversationKey, NSString;

@interface IDSMPConversationGroupSponsorPair : NSObject {

	IDSMPConversationKey* _conversationKey;
	NSString* _sponsorAlias;

}

@property (nonatomic,readonly) IDSMPConversationKey * conversationKey;              //@synthesize conversationKey=_conversationKey - In the implementation block
@property (nonatomic,readonly) NSString * sponsorAlias;                             //@synthesize sponsorAlias=_sponsorAlias - In the implementation block
-(NSString *)sponsorAlias;
-(id)initWithConversationKey:(id)arg1 sponsorAlias:(id)arg2 ;
-(IDSMPConversationKey *)conversationKey;
@end


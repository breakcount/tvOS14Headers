/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKApplyWebServiceResponse : PKPaymentWebServiceResponse {

	NSString* _conversationIdentifier;

}

@property (nonatomic,copy) NSString * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)conversationIdentifier;
-(void)setConversationIdentifier:(NSString *)arg1 ;
@end


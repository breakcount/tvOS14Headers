/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _PSMessagesPinningSuggestion : NSObject <NSSecureCoding> {

	NSString* _chatGuid;

}

@property (nonatomic,readonly) NSString * chatGuid;              //@synthesize chatGuid=_chatGuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)chatGuid;
-(id)initWithChatGuid:(id)arg1 ;
@end


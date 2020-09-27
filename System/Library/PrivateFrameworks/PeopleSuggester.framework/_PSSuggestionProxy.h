/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _PSSuggestionProxy : NSObject <NSSecureCoding> {

	BOOL _useGroupsWhenFindingRecipient;
	NSString* _bundleID;
	NSString* _interactionRecipients;
	NSString* _contactID;
	NSString* _handle;
	NSString* _reason;
	NSString* _reasonType;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * interactionRecipients;              //@synthesize interactionRecipients=_interactionRecipients - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactID;                          //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                             //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                             //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSString * reasonType;                         //@synthesize reasonType=_reasonType - In the implementation block
@property (nonatomic,readonly) BOOL useGroupsWhenFindingRecipient;                 //@synthesize useGroupsWhenFindingRecipient=_useGroupsWhenFindingRecipient - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionKey; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSString *)bundleID;
-(NSString *)contactID;
-(NSString *)reasonType;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 reason:(id)arg4 reasonType:(id)arg5 ;
-(NSString *)interactionRecipients;
-(BOOL)useGroupsWhenFindingRecipient;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 ;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 useGroupsWhenFindingRecipient:(BOOL)arg7 ;
-(NSString *)suggestionKey;
@end


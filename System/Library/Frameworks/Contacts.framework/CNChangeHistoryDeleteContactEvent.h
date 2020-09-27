/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class NSString;

@interface CNChangeHistoryDeleteContactEvent : CNChangeHistoryEvent {

	NSString* _contactIdentifier;
	NSString* _externalURI;
	NSString* _externalModificationTag;

}

@property (nonatomic,copy,readonly) NSString * externalURI;                          //@synthesize externalURI=_externalURI - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalModificationTag;              //@synthesize externalModificationTag=_externalModificationTag - In the implementation block
@property (nonatomic,readonly) NSString * contactIdentifier;                         //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)instanceSortOrder;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContactIdentifier:(id)arg1 ;
-(NSString *)contactIdentifier;
-(NSString *)externalURI;
-(NSString *)externalModificationTag;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithContactIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommunicationsFilter/CommunicationsFilter-Structs.h>
@class NSString;

@interface CommunicationFilterItem : NSObject {

	CFPhoneNumberRef _phoneNumber;
	NSString* _emailAddress;

}

@property (nonatomic,readonly) CFPhoneNumberRef phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * unformattedID; 
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(CFPhoneNumberRef)phoneNumber;
-(NSString *)emailAddress;
-(BOOL)isPhoneNumber;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithPhoneNumber:(CFPhoneNumberRef)arg1 ;
-(id)_dictionaryRepresentationWithRedaction;
-(BOOL)_acceptItemType:(id)arg1 ;
-(BOOL)_acceptVersion:(id)arg1 ;
-(NSString *)unformattedID;
-(BOOL)matchesFilterItem:(id)arg1 ;
@end


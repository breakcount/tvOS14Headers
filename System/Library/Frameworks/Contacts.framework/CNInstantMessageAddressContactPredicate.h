/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>

@class CNInstantMessageAddress;

@interface CNInstantMessageAddressContactPredicate : CNPredicate {

	CNInstantMessageAddress* _imAddress;

}

@property (nonatomic,copy,readonly) CNInstantMessageAddress * imAddress;              //@synthesize imAddress=_imAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNInstantMessageAddress *)imAddress;
-(id)initWithInstantMessageAddress:(id)arg1 ;
@end


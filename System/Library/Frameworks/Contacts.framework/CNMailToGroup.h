/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactFormatter;

@interface CNMailToGroup : NSObject {

	CNContactFormatter* _contactFormatter;

}

@property (nonatomic,retain) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
+(id)os_log;
+(id)descriptorForRequiredKeys;
-(id)init;
-(id)mailUrlForContacts:(id)arg1 needsEmailAddresses:(BOOL)arg2 ;
-(BOOL)allContactsHaveEmailAddress:(id)arg1 ;
-(id)mailingAddressForContact:(id)arg1 ;
-(id)emailAddressForContact:(id)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(id)santizeMailingAddress:(id)arg1 ;
-(id)mailUrlForContacts:(id)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
@end


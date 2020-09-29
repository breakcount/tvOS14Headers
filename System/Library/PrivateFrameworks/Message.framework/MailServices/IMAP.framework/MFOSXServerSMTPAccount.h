/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Message/SMTPAccount.h>

@class MFOSXServerIMAPAccount, NSDictionary;

@interface MFOSXServerSMTPAccount : SMTPAccount {

	MFOSXServerIMAPAccount* _mailAccount;

}

@property (getter=mailAccountIfAvailable,nonatomic,retain) MFOSXServerIMAPAccount * mailAccount;              //@synthesize mailAccount=_mailAccount - In the implementation block
@property (nonatomic,readonly) NSDictionary * parentAccountMailProperties; 
+(id)accountTypeIdentifier;
-(void)dealloc;
-(id)password;
-(id)username;
-(id)hostname;
-(BOOL)usesSSL;
-(id)preferredAuthScheme;
-(id)accountForRenewingCredentials;
-(unsigned)portNumber;
-(BOOL)shouldUseAuthentication;
-(id)mailAccountIfAvailable;
-(void)setMailAccount:(MFOSXServerIMAPAccount *)arg1 ;
-(NSDictionary *)parentAccountMailProperties;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SASmsRecipientSearch : SADomainCommand

@property (assign,nonatomic) BOOL clientShouldResolvePhonesAndEmails; 
@property (nonatomic,copy) NSArray * recipients; 
+(id)recipientSearch;
+(id)recipientSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(BOOL)clientShouldResolvePhonesAndEmails;
-(void)setClientShouldResolvePhonesAndEmails:(BOOL)arg1 ;
@end


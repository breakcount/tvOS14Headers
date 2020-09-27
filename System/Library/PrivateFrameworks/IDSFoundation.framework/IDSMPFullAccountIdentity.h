/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPFullAccountIdentity : IDSMPIdentity

@property (nonatomic,readonly) NSData * publicName; 
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
+(id)fullAccountIdentityWithError:(id*)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicAccountIdentityWithError:(id*)arg1 ;
-(NSData *)publicName;
-(id)rolledAccountIdenityWithError:(id*)arg1 ;
-(id)signData:(id)arg1 withError:(id*)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNSaveResponse.h>

@interface CNMutableSaveResponse : CNSaveResponse

@property (assign) BOOL didAffectMeCard; 
+(BOOL)supportsSecureCoding;
-(void)setDidAffectMeCard:(BOOL)arg1 ;
-(void)setContainerSnapshot:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setContactSnapshot:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setGroupSnapshot:(id)arg1 forIndexPath:(id)arg2 ;
@end


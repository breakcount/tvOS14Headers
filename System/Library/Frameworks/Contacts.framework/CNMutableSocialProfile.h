/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNSocialProfile.h>

@class NSString, NSArray;

@interface CNMutableSocialProfile : CNSocialProfile

@property (nonatomic,copy) NSString * urlString; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * userIdentifier; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSString * displayname; 
@property (nonatomic,copy) NSArray * bundleIdentifiers; 
@property (nonatomic,copy) NSString * teamIdentifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)freeze;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class SADomainObject, NSString;

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>

@property (nonatomic,retain) SADomainObject * addFields; 
@property (nonatomic,retain) SADomainObject * identifier; 
@property (nonatomic,retain) SADomainObject * removeFields; 
@property (nonatomic,retain) SADomainObject * setFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domainObjectUpdate;
+(id)domainObjectUpdateWithDictionary:(id)arg1 context:(id)arg2 ;
-(SADomainObject *)identifier;
-(void)setIdentifier:(SADomainObject *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SADomainObject *)addFields;
-(void)setAddFields:(SADomainObject *)arg1 ;
-(SADomainObject *)removeFields;
-(void)setRemoveFields:(SADomainObject *)arg1 ;
-(SADomainObject *)setFields;
-(void)setSetFields:(SADomainObject *)arg1 ;
@end

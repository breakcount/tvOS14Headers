/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAPropertyOverride : SADomainObject

@property (nonatomic,copy) NSString * property; 
@property (nonatomic,copy) NSString * value; 
+(id)propertyOverride;
+(id)propertyOverrideWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(id)encodedClassName;
@end


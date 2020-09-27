/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSData, NSString;

@interface SAProtobufMessage : SADomainObject

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,copy) NSString * typeName; 
+(id)protobufMessage;
+(id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)groupIdentifier;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(id)encodedClassName;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAMacFilesystemContext : SADomainObject

@property (nonatomic,copy) NSArray * targetEntities; 
+(id)filesystemContext;
+(id)filesystemContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)targetEntities;
-(void)setTargetEntities:(NSArray *)arg1 ;
@end


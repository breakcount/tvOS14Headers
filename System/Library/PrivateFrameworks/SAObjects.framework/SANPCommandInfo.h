/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SANPCommandInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * registeredCommands; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandInfo;
+(id)commandInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)registeredCommands;
-(void)setRegisteredCommands:(NSArray *)arg1 ;
@end


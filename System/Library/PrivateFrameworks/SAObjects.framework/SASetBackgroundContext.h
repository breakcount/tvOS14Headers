/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAClientStateServerBoundCommand.h>

@class NSArray, NSString;

@interface SASetBackgroundContext : SABaseCommand <SAClientStateServerBoundCommand>

@property (nonatomic,copy) NSArray * objects; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setBackgroundContext;
+(id)setBackgroundContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)objects;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setObjects:(NSArray *)arg1 ;
@end

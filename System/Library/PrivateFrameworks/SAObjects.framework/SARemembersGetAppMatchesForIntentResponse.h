/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SARemembersGetAppMatchesForIntentResponse : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (nonatomic,copy) NSString * jsonMatchSignals; 
@property (nonatomic,copy) NSString * matchStatus; 
@property (nonatomic,copy) NSArray * matchingBundleIDs; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getAppMatchesForIntentResponse;
+(id)getAppMatchesForIntentResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)jsonMatchSignals;
-(void)setJsonMatchSignals:(NSString *)arg1 ;
-(NSString *)matchStatus;
-(void)setMatchStatus:(NSString *)arg1 ;
-(NSArray *)matchingBundleIDs;
-(void)setMatchingBundleIDs:(NSArray *)arg1 ;
@end


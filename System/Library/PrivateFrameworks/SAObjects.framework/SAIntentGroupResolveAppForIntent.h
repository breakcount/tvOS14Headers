/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupResolveAppForIntent : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appsList; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
+(id)resolveAppForIntent;
+(id)resolveAppForIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)appsList;
-(void)setAppsList:(NSArray *)arg1 ;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)intent;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
@end


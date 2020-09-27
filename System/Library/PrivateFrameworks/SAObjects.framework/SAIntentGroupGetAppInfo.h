/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupGetAppInfo : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appIdentifyingInfo; 
@property (assign,nonatomic) BOOL shouldSearchLocallyOnly; 
+(id)getAppInfo;
+(id)getAppInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)appIdentifyingInfo;
-(void)setAppIdentifyingInfo:(NSArray *)arg1 ;
-(BOOL)shouldSearchLocallyOnly;
-(void)setShouldSearchLocallyOnly:(BOOL)arg1 ;
@end


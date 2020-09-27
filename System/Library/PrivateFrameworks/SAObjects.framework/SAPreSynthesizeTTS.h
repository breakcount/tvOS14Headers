/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSDictionary;

@interface SAPreSynthesizeTTS : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * aceAudioData; 
@property (nonatomic,copy) NSArray * dialogStrings; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (nonatomic,copy) NSArray * streamIds; 
+(id)preSynthesizeTTS;
+(id)preSynthesizeTTSWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)aceAudioData;
-(void)setAceAudioData:(NSArray *)arg1 ;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(NSArray *)dialogStrings;
-(void)setDialogStrings:(NSArray *)arg1 ;
-(NSArray *)streamIds;
-(void)setStreamIds:(NSArray *)arg1 ;
@end

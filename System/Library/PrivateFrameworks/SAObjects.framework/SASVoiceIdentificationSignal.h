/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASVoiceIdentificationSignal : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL recordUserAudio; 
@property (nonatomic,copy) NSString * resultCandidateId; 
@property (nonatomic,copy) NSString * selectedSharedUserId; 
+(id)voiceIdentificationSignal;
+(id)voiceIdentificationSignalWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(BOOL)recordUserAudio;
-(void)setRecordUserAudio:(BOOL)arg1 ;
-(NSString *)selectedSharedUserId;
-(void)setSelectedSharedUserId:(NSString *)arg1 ;
@end

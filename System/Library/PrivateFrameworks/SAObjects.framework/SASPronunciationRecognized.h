/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SASPronunciationData;

@interface SASPronunciationRecognized : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * errorCode; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,retain) SASPronunciationData * pronunciationData; 
+(id)pronunciationRecognized;
+(id)pronunciationRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSNumber *)errorCode;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(SASPronunciationData *)pronunciationData;
-(void)setPronunciationData:(SASPronunciationData *)arg1 ;
@end


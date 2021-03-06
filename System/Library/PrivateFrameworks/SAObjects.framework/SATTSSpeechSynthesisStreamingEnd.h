/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class NSString;

@interface SATTSSpeechSynthesisStreamingEnd : SATTSSpeechSynthesisStreaming

@property (assign,nonatomic) long long count; 
@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * errorMessage; 
+(id)speechSynthesisStreamingEnd;
+(id)speechSynthesisStreamingEndWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(id)groupIdentifier;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(NSString *)errorMessage;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setErrorMessage:(NSString *)arg1 ;
@end


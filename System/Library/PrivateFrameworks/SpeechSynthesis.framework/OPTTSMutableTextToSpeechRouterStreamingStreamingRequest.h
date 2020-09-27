/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpeechSynthesis.framework/SpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechSynthesis/SpeechSynthesis-Structs.h>
#import <SpeechSynthesis/OPTTSTextToSpeechRouterStreamingStreamingRequest.h>

@class OPTTSStartTextToSpeechStreamingRequest;

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingRequest : OPTTSTextToSpeechRouterStreamingStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) OPTTSStartTextToSpeechStreamingRequest * contentAsOPTTSStartTextToSpeechStreamingRequest; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setContent_type:(long long)arg1 ;
-(void)setContentAsOPTTSStartTextToSpeechStreamingRequest:(OPTTSStartTextToSpeechStreamingRequest *)arg1 ;
-(long long)content_type;
-(OPTTSStartTextToSpeechStreamingRequest *)contentAsOPTTSStartTextToSpeechStreamingRequest;
@end

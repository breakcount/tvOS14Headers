/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <SpeechSynthesis/OPTTSPartialTextToSpeechStreamingResponse.h>

@class NSString, NSData, NSArray;

@interface OPTTSMutablePartialTextToSpeechStreamingResponse : OPTTSPartialTextToSpeechStreamingResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (nonatomic,copy) NSString * stream_id; 
@property (assign,nonatomic) int current_pkt_number; 
@property (nonatomic,copy) NSData * audio; 
@property (nonatomic,copy) NSArray * word_timing_info; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSData *)audio;
-(void)setAudio:(NSData *)arg1 ;
-(NSString *)stream_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setStream_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(int)error_code;
-(NSString *)error_str;
-(int)current_pkt_number;
-(void)setSession_id:(NSString *)arg1 ;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(void)audio:(/*^block*/id)arg1 ;
-(NSArray *)word_timing_info;
-(void)setWord_timing_info:(NSArray *)arg1 ;
-(void)setCurrent_pkt_number:(int)arg1 ;
@end


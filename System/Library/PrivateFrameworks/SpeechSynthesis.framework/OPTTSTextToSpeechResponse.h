/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpeechSynthesis.framework/SpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechSynthesis/SpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, OPTTSAudioDescription, NSArray, OPTTSTextToSpeechMeta;

@interface OPTTSTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechResponse* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int error_code; 
@property (nonatomic,readonly) NSString * error_str; 
@property (nonatomic,readonly) long long audio_type; 
@property (nonatomic,readonly) int sample_rate; 
@property (nonatomic,readonly) NSData * audio; 
@property (nonatomic,readonly) OPTTSAudioDescription * decoder_description; 
@property (nonatomic,readonly) OPTTSAudioDescription * playback_description; 
@property (nonatomic,readonly) NSArray * word_timing_info; 
@property (nonatomic,readonly) OPTTSTextToSpeechMeta * meta_info; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)audio;
-(NSString *)speech_id;
-(NSString *)session_id;
-(OPTTSTextToSpeechMeta *)meta_info;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(int)error_code;
-(NSString *)error_str;
-(OPTTSAudioDescription *)decoder_description;
-(int)sample_rate;
-(long long)audio_type;
-(void)audio:(/*^block*/id)arg1 ;
-(OPTTSAudioDescription *)playback_description;
-(NSArray *)word_timing_info;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechResponse*)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, OPTTSBeginTextToSpeechStreamingResponse, OPTTSPartialTextToSpeechStreamingResponse, OPTTSFinalTextToSpeechStreamingResponse;

@interface OPTTSTextToSpeechRouterStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechRouterStreamingStreamingResponse* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) OPTTSBeginTextToSpeechStreamingResponse * contentAsOPTTSBeginTextToSpeechStreamingResponse; 
@property (nonatomic,readonly) OPTTSPartialTextToSpeechStreamingResponse * contentAsOPTTSPartialTextToSpeechStreamingResponse; 
@property (nonatomic,readonly) OPTTSFinalTextToSpeechStreamingResponse * contentAsOPTTSFinalTextToSpeechStreamingResponse; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(long long)content_type;
-(OPTTSBeginTextToSpeechStreamingResponse *)contentAsOPTTSBeginTextToSpeechStreamingResponse;
-(OPTTSPartialTextToSpeechStreamingResponse *)contentAsOPTTSPartialTextToSpeechStreamingResponse;
-(OPTTSFinalTextToSpeechStreamingResponse *)contentAsOPTTSFinalTextToSpeechStreamingResponse;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRouterStreamingStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRouterStreamingStreamingResponse*)arg2 ;
@end


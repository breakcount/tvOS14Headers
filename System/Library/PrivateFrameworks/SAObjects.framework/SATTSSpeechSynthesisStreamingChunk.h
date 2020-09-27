/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class NSData, SATTSSpeechSynthesisAudioInfo;

@interface SATTSSpeechSynthesisStreamingChunk : SATTSSpeechSynthesisStreaming

@property (nonatomic,copy) NSData * audioData; 
@property (nonatomic,retain) SATTSSpeechSynthesisAudioInfo * audioInfo; 
@property (assign,nonatomic) long long index; 
+(id)speechSynthesisStreamingChunk;
+(id)speechSynthesisStreamingChunkWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)index;
-(id)groupIdentifier;
-(void)setIndex:(long long)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)audioData;
-(void)setAudioData:(NSData *)arg1 ;
-(SATTSSpeechSynthesisAudioInfo *)audioInfo;
-(void)setAudioInfo:(SATTSSpeechSynthesisAudioInfo *)arg1 ;
@end


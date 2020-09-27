/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSInstrumentMetrics : NSObject <NSSecureCoding> {

	BOOL _isWarmStart;
	BOOL _isServerTTS;
	BOOL _isServerStreamTTS;
	BOOL _isServerTimeout;
	BOOL _isServerTTSRacing;
	BOOL _canUseServerTTS;
	BOOL _neuralAlignmentStall;
	BOOL _isSpeechRequest;
	BOOL _isCacheHitFromDisk;
	BOOL _isCacheHitFromMemory;
	NSString* _utterance;
	NSString* _voiceAssetKey;
	NSString* _voiceResourceAssetKey;
	NSString* _audioOutputRoute;
	NSString* _clientBundleIdentifier;
	NSString* _experimentIdentifier;
	long long _requestCreatedTimestamp;
	long long _eagerRequestCreatedTimeStampDiffs;
	long long _synthesisBeginTimestamp;
	long long _synthesisEndTimestamp;
	long long _speechBeginTimestamp;
	long long _speechEndTimestamp;
	long long _audioStartTimestampDiffs;
	double _audioDuration;
	long long _promptCount;
	long long _errorCode;
	long long _sourceOfTTS;

}

@property (copy) NSString * utterance;                                       //@synthesize utterance=_utterance - In the implementation block
@property (copy) NSString * voiceAssetKey;                                   //@synthesize voiceAssetKey=_voiceAssetKey - In the implementation block
@property (copy) NSString * voiceResourceAssetKey;                           //@synthesize voiceResourceAssetKey=_voiceResourceAssetKey - In the implementation block
@property (copy) NSString * audioOutputRoute;                                //@synthesize audioOutputRoute=_audioOutputRoute - In the implementation block
@property (copy) NSString * clientBundleIdentifier;                          //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (copy) NSString * experimentIdentifier;                            //@synthesize experimentIdentifier=_experimentIdentifier - In the implementation block
@property (assign) long long requestCreatedTimestamp;                        //@synthesize requestCreatedTimestamp=_requestCreatedTimestamp - In the implementation block
@property (assign) long long eagerRequestCreatedTimeStampDiffs;              //@synthesize eagerRequestCreatedTimeStampDiffs=_eagerRequestCreatedTimeStampDiffs - In the implementation block
@property (assign) long long synthesisBeginTimestamp;                        //@synthesize synthesisBeginTimestamp=_synthesisBeginTimestamp - In the implementation block
@property (assign) long long synthesisEndTimestamp;                          //@synthesize synthesisEndTimestamp=_synthesisEndTimestamp - In the implementation block
@property (assign) long long speechBeginTimestamp;                           //@synthesize speechBeginTimestamp=_speechBeginTimestamp - In the implementation block
@property (assign) long long speechEndTimestamp;                             //@synthesize speechEndTimestamp=_speechEndTimestamp - In the implementation block
@property (assign) long long audioStartTimestampDiffs;                       //@synthesize audioStartTimestampDiffs=_audioStartTimestampDiffs - In the implementation block
@property (assign) double audioDuration;                                     //@synthesize audioDuration=_audioDuration - In the implementation block
@property (assign) BOOL isWarmStart;                                         //@synthesize isWarmStart=_isWarmStart - In the implementation block
@property (assign) BOOL isServerTTS;                                         //@synthesize isServerTTS=_isServerTTS - In the implementation block
@property (assign) BOOL isServerStreamTTS;                                   //@synthesize isServerStreamTTS=_isServerStreamTTS - In the implementation block
@property (assign) BOOL isServerTimeout;                                     //@synthesize isServerTimeout=_isServerTimeout - In the implementation block
@property (assign) BOOL isServerTTSRacing;                                   //@synthesize isServerTTSRacing=_isServerTTSRacing - In the implementation block
@property (assign) BOOL canUseServerTTS;                                     //@synthesize canUseServerTTS=_canUseServerTTS - In the implementation block
@property (assign) BOOL neuralAlignmentStall;                                //@synthesize neuralAlignmentStall=_neuralAlignmentStall - In the implementation block
@property (assign) long long promptCount;                                    //@synthesize promptCount=_promptCount - In the implementation block
@property (assign) long long errorCode;                                      //@synthesize errorCode=_errorCode - In the implementation block
@property (assign) long long sourceOfTTS;                                    //@synthesize sourceOfTTS=_sourceOfTTS - In the implementation block
@property (assign) BOOL isSpeechRequest;                                     //@synthesize isSpeechRequest=_isSpeechRequest - In the implementation block
@property (assign) BOOL isCacheHitFromDisk;                                  //@synthesize isCacheHitFromDisk=_isCacheHitFromDisk - In the implementation block
@property (assign) BOOL isCacheHitFromMemory;                                //@synthesize isCacheHitFromMemory=_isCacheHitFromMemory - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(NSString *)clientBundleIdentifier;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(BOOL)canUseServerTTS;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(id)dictionaryMetrics;
-(double)_clockFactor;
-(double)ttsSynthesisLatency;
-(double)realTimeFactor;
-(double)timeToSpeakLatency;
-(double)audioQueueLatency;
-(double)eagerRequestTimeGap;
-(BOOL)isSynthesisCached;
-(id)cappedRealTimeFactor;
-(NSString *)voiceAssetKey;
-(void)setVoiceAssetKey:(NSString *)arg1 ;
-(NSString *)voiceResourceAssetKey;
-(void)setVoiceResourceAssetKey:(NSString *)arg1 ;
-(NSString *)audioOutputRoute;
-(void)setAudioOutputRoute:(NSString *)arg1 ;
-(NSString *)experimentIdentifier;
-(void)setExperimentIdentifier:(NSString *)arg1 ;
-(long long)requestCreatedTimestamp;
-(void)setRequestCreatedTimestamp:(long long)arg1 ;
-(long long)eagerRequestCreatedTimeStampDiffs;
-(void)setEagerRequestCreatedTimeStampDiffs:(long long)arg1 ;
-(long long)synthesisBeginTimestamp;
-(void)setSynthesisBeginTimestamp:(long long)arg1 ;
-(long long)synthesisEndTimestamp;
-(void)setSynthesisEndTimestamp:(long long)arg1 ;
-(long long)speechBeginTimestamp;
-(void)setSpeechBeginTimestamp:(long long)arg1 ;
-(long long)speechEndTimestamp;
-(void)setSpeechEndTimestamp:(long long)arg1 ;
-(long long)audioStartTimestampDiffs;
-(void)setAudioStartTimestampDiffs:(long long)arg1 ;
-(double)audioDuration;
-(void)setAudioDuration:(double)arg1 ;
-(BOOL)isWarmStart;
-(void)setIsWarmStart:(BOOL)arg1 ;
-(BOOL)isServerTTS;
-(void)setIsServerTTS:(BOOL)arg1 ;
-(BOOL)isServerStreamTTS;
-(void)setIsServerStreamTTS:(BOOL)arg1 ;
-(BOOL)isServerTimeout;
-(void)setIsServerTimeout:(BOOL)arg1 ;
-(BOOL)isServerTTSRacing;
-(void)setIsServerTTSRacing:(BOOL)arg1 ;
-(BOOL)neuralAlignmentStall;
-(void)setNeuralAlignmentStall:(BOOL)arg1 ;
-(long long)promptCount;
-(void)setPromptCount:(long long)arg1 ;
-(long long)sourceOfTTS;
-(void)setSourceOfTTS:(long long)arg1 ;
-(BOOL)isSpeechRequest;
-(void)setIsSpeechRequest:(BOOL)arg1 ;
-(BOOL)isCacheHitFromDisk;
-(void)setIsCacheHitFromDisk:(BOOL)arg1 ;
-(BOOL)isCacheHitFromMemory;
-(void)setIsCacheHitFromMemory:(BOOL)arg1 ;
@end


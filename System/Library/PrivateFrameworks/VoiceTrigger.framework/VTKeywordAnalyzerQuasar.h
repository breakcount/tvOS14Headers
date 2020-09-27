/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTKeywordAnalyzer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, _EARSyncSpeechRecognizer, NSDictionary, NSString;

@interface VTKeywordAnalyzerQuasar : NSObject <VTKeywordAnalyzer> {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _lastReportedRecogResults;
	NSArray* _triggerTokenList;
	_EARSyncSpeechRecognizer* _syncRecognizer;
	BOOL _useKeywordSpotting;
	NSDictionary* _ctcKwdToPhraseIdMap;

}

@property (nonatomic,retain) NSDictionary * ctcKwdToPhraseIdMap;              //@synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAsset:(id)arg1 ;
-(void)endAudio;
-(NSDictionary *)ctcKwdToPhraseIdMap;
-(void)setCtcKwdToPhraseIdMap:(NSDictionary *)arg1 ;
-(void)resetWithLanguage:(id)arg1 withSamplingRate:(long long)arg2 withAudioSource:(id)arg3 ;
-(void)setStartSampleCount:(unsigned long long)arg1 ;
-(void)processFloatAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)processAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getDetailedResults;
-(id)getAnalyzerType;
@end


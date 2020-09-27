/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class SNAudioStreamAnalyzer, AVAudioPCMBuffer, NSMutableArray;

@interface VCPAudioClassifier : NSObject {

	unsigned long long _analysisTypes;
	SNAudioStreamAnalyzer* _SNAnalyzer;
	AVAudioPCMBuffer* _pcmBuffer;
	long long _framePosition;
	float _sampleRate;
	NSMutableArray* _detectors;

}
-(id)results;
-(id)initWithTypes:(unsigned long long)arg1 ;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 andSampleBatchSize:(int)arg2 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EARAudioResultsGeneratorDelegate.h>

@protocol OS_dispatch_queue;
@class EARAudioResultsGenerator, NSObject, NSString;

@interface SSRPitchExtractor : NSObject <EARAudioResultsGeneratorDelegate> {

	EARAudioResultsGenerator* _resultsGenerator;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) EARAudioResultsGenerator * resultsGenerator;              //@synthesize resultsGenerator=_resultsGenerator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(float)getPitchForUtteranceAudioFiles:(id)arg1 ;
-(void)_processAudioFileURL:(id)arg1 ;
-(float)_getVoicingWeightedPitchForResultMatrix:(id)arg1 ;
-(float)_getVoicingProbFromRawData:(float)arg1 ;
-(float)_getPitchHzFromRawData:(float)arg1 ;
-(EARAudioResultsGenerator *)resultsGenerator;
-(void)setResultsGenerator:(EARAudioResultsGenerator *)arg1 ;
@end


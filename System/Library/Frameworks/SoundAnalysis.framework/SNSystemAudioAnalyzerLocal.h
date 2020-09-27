/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNSystemAudioAnalyzerProtocol.h>

@protocol OS_dispatch_queue;
@class AVAudioFormat, NSObject, SNAudioRecordingQueue, SNAudioStreamAnalyzer, NSMutableArray;

@interface SNSystemAudioAnalyzerLocal : NSObject <SNSystemAudioAnalyzerProtocol> {

	AVAudioFormat* _recordFormat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SNAudioRecordingQueue* _recordingQueue;
	SNAudioStreamAnalyzer* _streamAnalyzer;
	long long _recordingState;
	BOOL _clientStartedAnalysis;
	NSMutableArray* _requests;

}
-(id)init;
-(void)start;
-(void)stop;
-(void)removeRequest:(id)arg1 ;
-(void)_removeRequest:(id)arg1 ;
-(void)removeAllRequests;
-(void)_removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)sendErrorToAllRequests:(id)arg1 ;
-(void)handleAVAudioSessionInterruption:(id)arg1 ;
-(void)handleAVAudioSessionRouteChange:(id)arg1 ;
-(void)handleAVAudioSessionMediaServicesLost:(id)arg1 ;
-(void)handleAVAudioSessionMediaServicesReset:(id)arg1 ;
-(BOOL)_addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)startAudio;
-(void)stopAudio;
-(void)handleAudioStreamInterrupted;
@end

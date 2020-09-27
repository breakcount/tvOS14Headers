/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHHapticAdvancedPatternPlayerExtended.h>
#import <libobjc.A.dylib/PatternPlayerDetails.h>

@class CHHapticEngine, AVHapticSequence, NSArray, NSString;

@interface AdvancedPatternPlayer : NSObject <CHHapticAdvancedPatternPlayerExtended, PatternPlayerDetails> {

	CHHapticEngine* _engine;
	AVHapticSequence* _sequence;
	double _patternDuration;
	double _loopEnd;
	int _state;
	NSArray* _events;
	int _muteState;
	double _seekOffset;
	/*^block*/id _completionHandler;

}

@property (__weak) CHHapticEngine * engine;                         //@synthesize engine=_engine - In the implementation block
@property (readonly) double patternDuration; 
@property (assign) double seekOffset;                               //@synthesize seekOffset=_seekOffset - In the implementation block
@property (readonly) BOOL running; 
@property (readonly) BOOL paused; 
@property (assign) BOOL loopEnabled; 
@property (assign) double loopEnd; 
@property (assign) float playbackRate; 
@property (assign) BOOL isMuted; 
@property (copy) id completionHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)seekToOffset:(double)arg1 error:(id*)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(BOOL)running;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(BOOL)stopAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)pauseAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)resumeAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)cancelAndReturnError:(id*)arg1 ;
-(BOOL)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)setVolume:(float)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(CHHapticEngine *)engine;
-(BOOL)isMuted;
-(BOOL)paused;
-(void)setIsMuted:(BOOL)arg1 ;
-(void)setEngine:(CHHapticEngine *)arg1 ;
-(void)resetState;
-(void)clearExternalResources:(id)arg1 ;
-(void)doSetMute:(BOOL)arg1 ;
-(BOOL)startAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(BOOL)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(double)patternDuration;
-(void)setSeekOffset:(double)arg1 ;
-(void)setLoopEnd:(double)arg1 ;
-(void)finishInit;
-(double)seekOffset;
-(void)setRunning;
-(BOOL)doStartFromPausedAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)doStartFromStoppedAtTime:(double)arg1 error:(id*)arg2 ;
-(void)setPaused;
-(BOOL)doResumeAtTime:(double)arg1 error:(id*)arg2 ;
-(BOOL)loopEnabled;
-(void)setLoopEnabled:(BOOL)arg1 ;
-(double)loopEnd;
-(id)initWithPattern:(id)arg1 engine:(id)arg2 privileged:(BOOL)arg3 error:(id*)arg4 ;
-(id)initWithRingtoneData:(id)arg1 engine:(id)arg2 error:(id*)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSRSpeakerAnalyzerPSRDelegate.h>
#import <libobjc.A.dylib/SSRSpeakerRecognizer.h>

@protocol OS_dispatch_queue, SSRSpeakerRecognizerDelegate;
@class NSDictionary, SSRSpeakerRecognitionContext, NSString, NSObject, SSRSpeakerAnalyzerPSR;

@interface SSRSpeakerRecognizerPSR : NSObject <SSRSpeakerAnalyzerPSRDelegate, SSRSpeakerRecognizer> {

	BOOL _processingEnded;
	SSRSpeakerRecognitionContext* _spIdCtx;
	NSString* _sessionId;
	NSDictionary* _lastSpeakerInfo;
	NSObject*<OS_dispatch_queue> _queue;
	id<SSRSpeakerRecognizerDelegate> _delegate;
	NSString* _invocationStyleStr;
	unsigned long long _extraSamplesAtStart;
	unsigned long long _vtEndInSampleCount;
	unsigned long long _endInSampleCount;
	unsigned long long _numSamplesProcessed;
	unsigned long long _totalNumSamplesReceived;
	SSRSpeakerAnalyzerPSR* _psrAnalyzer;

}

@property (nonatomic,retain) SSRSpeakerRecognitionContext * spIdCtx;                        //@synthesize spIdCtx=_spIdCtx - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                          //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) NSDictionary * lastSpeakerInfo;                                //@synthesize lastSpeakerInfo=_lastSpeakerInfo - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<SSRSpeakerRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * invocationStyleStr;                                 //@synthesize invocationStyleStr=_invocationStyleStr - In the implementation block
@property (assign,nonatomic) unsigned long long extraSamplesAtStart;                        //@synthesize extraSamplesAtStart=_extraSamplesAtStart - In the implementation block
@property (assign,nonatomic) unsigned long long vtEndInSampleCount;                         //@synthesize vtEndInSampleCount=_vtEndInSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long endInSampleCount;                           //@synthesize endInSampleCount=_endInSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long numSamplesProcessed;                        //@synthesize numSamplesProcessed=_numSamplesProcessed - In the implementation block
@property (assign,nonatomic) BOOL processingEnded;                                          //@synthesize processingEnded=_processingEnded - In the implementation block
@property (assign,nonatomic) unsigned long long totalNumSamplesReceived;                    //@synthesize totalNumSamplesReceived=_totalNumSamplesReceived - In the implementation block
@property (nonatomic,retain) SSRSpeakerAnalyzerPSR * psrAnalyzer;                           //@synthesize psrAnalyzer=_psrAnalyzer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * lastScoreCard; 
-(void)dealloc;
-(id<SSRSpeakerRecognizerDelegate>)delegate;
-(void)setDelegate:(id<SSRSpeakerRecognizerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(void)endAudio;
-(unsigned long long)vtEndInSampleCount;
-(void)setVtEndInSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)numSamplesProcessed;
-(void)setNumSamplesProcessed:(unsigned long long)arg1 ;
-(void)resetWithContext:(id)arg1 ;
-(unsigned long long)extraSamplesAtStart;
-(void)setExtraSamplesAtStart:(unsigned long long)arg1 ;
-(void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)voiceRecognitionPSRAnalyzer:(id)arg1 hasVoiceRecognitionInfo:(id)arg2 ;
-(void)voiceRecognitionPSRAnalyzerFinishedProcessing:(id)arg1 withVoiceRecognitionInfo:(id)arg2 ;
-(void)_initializeWithContext:(id)arg1 ;
-(NSDictionary *)lastScoreCard;
-(SSRSpeakerRecognitionContext *)spIdCtx;
-(void)setSpIdCtx:(SSRSpeakerRecognitionContext *)arg1 ;
-(NSDictionary *)lastSpeakerInfo;
-(void)setLastSpeakerInfo:(NSDictionary *)arg1 ;
-(NSString *)invocationStyleStr;
-(void)setInvocationStyleStr:(NSString *)arg1 ;
-(unsigned long long)endInSampleCount;
-(void)setEndInSampleCount:(unsigned long long)arg1 ;
-(BOOL)processingEnded;
-(void)setProcessingEnded:(BOOL)arg1 ;
-(unsigned long long)totalNumSamplesReceived;
-(void)setTotalNumSamplesReceived:(unsigned long long)arg1 ;
-(SSRSpeakerAnalyzerPSR *)psrAnalyzer;
-(void)setPsrAnalyzer:(SSRSpeakerAnalyzerPSR *)arg1 ;
@end


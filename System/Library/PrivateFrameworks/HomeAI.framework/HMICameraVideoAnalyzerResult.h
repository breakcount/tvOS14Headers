/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:53 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSDate, HMICameraVideoFragment;

@interface HMICameraVideoAnalyzerResult : NSObject <NSSecureCoding> {

	float _analysisFPS;
	long long _events;
	NSDictionary* _annotationScores;
	NSArray* _posterFrames;
	NSArray* _frameResults;
	NSDate* _creationDate;
	long long _resultCode;
	double _timeToAnalyzeFragment;
	double _timeSinceFragmentWasSubmitted;
	HMICameraVideoFragment* _videoFragment;
	unsigned long long _lastSequenceNumber;
	SCD_Struct_HM3 _duration;

}

@property (assign) SCD_Struct_HM3 duration;                              //@synthesize duration=_duration - In the implementation block
@property (retain) NSDate * creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) unsigned long long lastSequenceNumber;              //@synthesize lastSequenceNumber=_lastSequenceNumber - In the implementation block
@property (readonly) long long events;                                   //@synthesize events=_events - In the implementation block
@property (readonly) NSDictionary * annotationScores;                    //@synthesize annotationScores=_annotationScores - In the implementation block
@property (readonly) NSArray * posterFrames;                             //@synthesize posterFrames=_posterFrames - In the implementation block
@property (readonly) NSArray * frameResults;                             //@synthesize frameResults=_frameResults - In the implementation block
@property (assign) long long resultCode;                                 //@synthesize resultCode=_resultCode - In the implementation block
@property (assign) double timeToAnalyzeFragment;                         //@synthesize timeToAnalyzeFragment=_timeToAnalyzeFragment - In the implementation block
@property (assign) double timeSinceFragmentWasSubmitted;                 //@synthesize timeSinceFragmentWasSubmitted=_timeSinceFragmentWasSubmitted - In the implementation block
@property (retain) HMICameraVideoFragment * videoFragment;               //@synthesize videoFragment=_videoFragment - In the implementation block
@property (assign) float analysisFPS;                                    //@synthesize analysisFPS=_analysisFPS - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)_eventsFromAnalyzerEvents:(id)arg1 ;
+(id)_annotationScoresFromAnalyzerEvents:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(SCD_Struct_HM3)duration;
-(void)setDuration:(SCD_Struct_HM3)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setResultCode:(long long)arg1 ;
-(long long)resultCode;
-(long long)events;
-(NSArray *)frameResults;
-(NSArray *)posterFrames;
-(id)maxConfidenceEventForEventClass:(Class)arg1 ;
-(long long)confidenceThatEventOccurred:(long long)arg1 ;
-(id)aggregatedEvents;
-(unsigned long long)lastSequenceNumber;
-(float)analysisFPS;
-(HMICameraVideoFragment *)videoFragment;
-(double)timeToAnalyzeFragment;
-(double)timeSinceFragmentWasSubmitted;
-(id)initWithEvents:(long long)arg1 posterFrames:(id)arg2 frameResults:(id)arg3 annotationScores:(id)arg4 duration:(SCD_Struct_HM3)arg5 creationDate:(id)arg6 resultCode:(long long)arg7 lastSequenceNumber:(unsigned long long)arg8 ;
-(id)initWithPosterFrames:(id)arg1 frameResults:(id)arg2 duration:(SCD_Struct_HM3)arg3 creationDate:(id)arg4 resultCode:(long long)arg5 lastSequenceNumber:(unsigned long long)arg6 ;
-(id)aggregatedEventTypes;
-(BOOL)isEqual:(id)arg1 excludeTime:(BOOL)arg2 ;
-(NSDictionary *)annotationScores;
-(void)setTimeToAnalyzeFragment:(double)arg1 ;
-(void)setTimeSinceFragmentWasSubmitted:(double)arg1 ;
-(void)setVideoFragment:(HMICameraVideoFragment *)arg1 ;
-(void)setAnalysisFPS:(float)arg1 ;
@end


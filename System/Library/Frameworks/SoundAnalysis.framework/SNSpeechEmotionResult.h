/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNConfidenceProvidingWritable.h>
#import <libobjc.A.dylib/SNResult.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>
#import <libobjc.A.dylib/SNConfidenceProviding.h>

@class NSString;

@interface SNSpeechEmotionResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding> {

	double _confidence;
	double _mood;
	double _valence;
	double _arousal;
	double _dominance;
	SCD_Struct_SN4 _timeRange;

}

@property (assign) double mood;                                     //@synthesize mood=_mood - In the implementation block
@property (assign) double valence;                                  //@synthesize valence=_valence - In the implementation block
@property (assign) double arousal;                                  //@synthesize arousal=_arousal - In the implementation block
@property (assign) double dominance;                                //@synthesize dominance=_dominance - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN4 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double confidence;                     //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidence;
-(double)mood;
-(void)setMood:(double)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(double)valence;
-(double)arousal;
-(double)dominance;
-(void)setValence:(double)arg1 ;
-(void)setArousal:(double)arg1 ;
-(void)setDominance:(double)arg1 ;
-(BOOL)isEqualToSpeechEmotionResult:(id)arg1 ;
@end


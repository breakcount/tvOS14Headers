/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/NviSignalData.h>

@class NSArray, NSDictionary;

@interface NviDirectionalitySignalData : NviSignalData {

	float _confidence;
	float _azimuth;
	float _estimatedAzimuth;
	unsigned long long _startSample;
	unsigned long long _endSample;
	double _processedAudioDurMs;
	NSArray* _spatialSpectrumData;
	NSDictionary* _azDistribution;

}

@property (assign,nonatomic) unsigned long long startSample;              //@synthesize startSample=_startSample - In the implementation block
@property (assign,nonatomic) unsigned long long endSample;                //@synthesize endSample=_endSample - In the implementation block
@property (assign,nonatomic) float confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) float azimuth;                               //@synthesize azimuth=_azimuth - In the implementation block
@property (assign,nonatomic) float estimatedAzimuth;                      //@synthesize estimatedAzimuth=_estimatedAzimuth - In the implementation block
@property (assign,nonatomic) double processedAudioDurMs;                  //@synthesize processedAudioDurMs=_processedAudioDurMs - In the implementation block
@property (nonatomic,retain) NSArray * spatialSpectrumData;               //@synthesize spatialSpectrumData=_spatialSpectrumData - In the implementation block
@property (nonatomic,retain) NSDictionary * azDistribution;               //@synthesize azDistribution=_azDistribution - In the implementation block
@property (nonatomic,readonly) float mostSampledAzimuth; 
+(id)headerString;
-(id)description;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(float)azimuth;
-(void)setAzimuth:(float)arg1 ;
-(id)initWithStartSample:(unsigned long long)arg1 endSample:(unsigned long long)arg2 confidence:(float)arg3 azimuth:(float)arg4 estimatedAzimuth:(float)arg5 ;
-(float)mostSampledAzimuth;
-(id)stringForLogging;
-(id)_spatialSpectrumLogStr;
-(unsigned long long)startSample;
-(void)setStartSample:(unsigned long long)arg1 ;
-(unsigned long long)endSample;
-(void)setEndSample:(unsigned long long)arg1 ;
-(float)estimatedAzimuth;
-(void)setEstimatedAzimuth:(float)arg1 ;
-(double)processedAudioDurMs;
-(void)setProcessedAudioDurMs:(double)arg1 ;
-(NSArray *)spatialSpectrumData;
-(void)setSpatialSpectrumData:(NSArray *)arg1 ;
-(NSDictionary *)azDistribution;
-(void)setAzDistribution:(NSDictionary *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@class NSMutableArray, RTDistanceCalculator, NSString;

@interface RTVisitPipelineModuleBurstNoiseFilter : NSObject <RTVisitPipelineModule> {

	BOOL _firstTimeProcessingModule;
	NSMutableArray* _potentialNoiseLocations;
	unsigned long long _lastProcessedIndex;
	double _maximumFlankDistance;
	double _minimumNoiseToLeftFlankDistance;
	unsigned long long _maximumWindowSize;
	double _maxHorizontalAccuracy;
	RTDistanceCalculator* _distanceCalculator;

}

@property (nonatomic,readonly) BOOL firstTimeProcessingModule;                         //@synthesize firstTimeProcessingModule=_firstTimeProcessingModule - In the implementation block
@property (nonatomic,readonly) NSMutableArray * potentialNoiseLocations;               //@synthesize potentialNoiseLocations=_potentialNoiseLocations - In the implementation block
@property (nonatomic,readonly) unsigned long long lastProcessedIndex;                  //@synthesize lastProcessedIndex=_lastProcessedIndex - In the implementation block
@property (nonatomic,readonly) double maximumFlankDistance;                            //@synthesize maximumFlankDistance=_maximumFlankDistance - In the implementation block
@property (nonatomic,readonly) double minimumNoiseToLeftFlankDistance;                 //@synthesize minimumNoiseToLeftFlankDistance=_minimumNoiseToLeftFlankDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumWindowSize;                   //@synthesize maximumWindowSize=_maximumWindowSize - In the implementation block
@property (nonatomic,readonly) double maxHorizontalAccuracy;                           //@synthesize maxHorizontalAccuracy=_maxHorizontalAccuracy - In the implementation block
@property (nonatomic,readonly) RTDistanceCalculator * distanceCalculator;              //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)getIndexInArray:(id)arg1 followedByCount:(unsigned long long)arg2 ;
-(void)addLocations:(id)arg1 ;
-(id)process:(id)arg1 ;
-(id)initWithHyperParameter:(id)arg1 ;
-(double)maxHorizontalAccuracy;
-(RTDistanceCalculator *)distanceCalculator;
-(id)initWithMaximumFlankDistance:(double)arg1 minimumNoiseToLeftFlankDistance:(double)arg2 maximumWindowSize:(unsigned long long)arg3 maxHorizontalAccuracy:(double)arg4 distanceCalculator:(id)arg5 ;
-(id)initWithMaximumFlankDistance:(double)arg1 minimumNoiseToLeftFlankDistance:(double)arg2 maximumWindowSize:(unsigned long long)arg3 maxHorizontalAccuracy:(double)arg4 ;
-(unsigned long long)getFirstIndexToProcess;
-(unsigned long long)getFirstUnprocessableIndex;
-(void)identifyNoiseInWindowRange:(NSRange)arg1 ;
-(void)removeNoiseLocations;
-(void)filterNoise;
-(id)getFilteredLocations;
-(void)discardObsoleteLocations;
-(void)setLastProcessedIndex:(unsigned long long)arg1 ;
-(BOOL)firstTimeProcessingModule;
-(NSMutableArray *)potentialNoiseLocations;
-(unsigned long long)lastProcessedIndex;
-(double)maximumFlankDistance;
-(double)minimumNoiseToLeftFlankDistance;
-(unsigned long long)maximumWindowSize;
@end


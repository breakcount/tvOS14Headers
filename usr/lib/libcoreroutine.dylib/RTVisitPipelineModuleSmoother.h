/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@class NSDate, NSMutableArray, RTVisit, NSString;

@interface RTVisitPipelineModuleSmoother : NSObject <RTVisitPipelineModule> {

	NSDate* _previousProcessedDate;
	NSDate* _nextDateToProcess;
	NSDate* _firstDateToProcessForVisit;
	double _timeIntervalBetweenSmoothedPoints;
	double _kernelWidth;
	double _smallestSignificantWeightExponent;
	double _maxGapInVisit;
	unsigned long long _leftWindowIncludedIndex;
	unsigned long long _rightWindowExcludedIndex;
	unsigned long long _outputLocationsCount;
	NSMutableArray* _rawLocations;
	RTVisit* _workingVisit;
	NSDate* _entryBeforeAnyGaps;

}

@property (nonatomic,readonly) NSDate * previousProcessedDate;                           //@synthesize previousProcessedDate=_previousProcessedDate - In the implementation block
@property (nonatomic,readonly) NSDate * nextDateToProcess;                               //@synthesize nextDateToProcess=_nextDateToProcess - In the implementation block
@property (nonatomic,readonly) NSDate * firstDateToProcessForVisit;                      //@synthesize firstDateToProcessForVisit=_firstDateToProcessForVisit - In the implementation block
@property (nonatomic,readonly) double timeIntervalBetweenSmoothedPoints;                 //@synthesize timeIntervalBetweenSmoothedPoints=_timeIntervalBetweenSmoothedPoints - In the implementation block
@property (nonatomic,readonly) double kernelWidth;                                       //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) double smallestSignificantWeightExponent;                 //@synthesize smallestSignificantWeightExponent=_smallestSignificantWeightExponent - In the implementation block
@property (nonatomic,readonly) double maxGapInVisit;                                     //@synthesize maxGapInVisit=_maxGapInVisit - In the implementation block
@property (nonatomic,readonly) unsigned long long leftWindowIncludedIndex;               //@synthesize leftWindowIncludedIndex=_leftWindowIncludedIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long rightWindowExcludedIndex;              //@synthesize rightWindowExcludedIndex=_rightWindowExcludedIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long outputLocationsCount;                  //@synthesize outputLocationsCount=_outputLocationsCount - In the implementation block
@property (nonatomic,readonly) NSMutableArray * rawLocations;                            //@synthesize rawLocations=_rawLocations - In the implementation block
@property (nonatomic,readonly) RTVisit * workingVisit;                                   //@synthesize workingVisit=_workingVisit - In the implementation block
@property (nonatomic,readonly) NSDate * entryBeforeAnyGaps;                              //@synthesize entryBeforeAnyGaps=_entryBeforeAnyGaps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)findIndexOfLocationInArray:(id)arg1 inRange:(NSRange)arg2 afterDate:(id)arg3 ;
+(double)getWeightExponentForSmoothedLocationDate:(id)arg1 rawLocationDate:(id)arg2 kernelWidth:(double)arg3 maxDelta:(double)arg4 ;
+(double)getMaxDeltaForSmoothedLocationDate:(id)arg1 rawLocations:(id)arg2 kernelWidth:(double)arg3 ;
+(id)computeSmoothedPointForDate:(id)arg1 rawLocations:(id)arg2 kernelWidth:(double)arg3 smallestSignificantWeightExponent:(double)arg4 ;
+(double)getTimeDeltaSignificanceThresholdForSmoothedLocationDate:(id)arg1 rawLocations:(id)arg2 kernelWidth:(double)arg3 smallestSignificantaWeightExponent:(double)arg4 ;
+(id)getNextDateToProcessForDate:(id)arg1 firstDateToProcessForVisit:(id)arg2 timeIntervalBetweenSmoothedPoints:(double)arg3 ;
+(void)disposeObsoleteRawLocations:(id)arg1 currentDateToProcess:(id)arg2 halfTimeProcessWindow:(double)arg3 ;
+(id)createNewOutputClusterForSmoothedPoints:(id)arg1 workingVisit:(id)arg2 exit:(id)arg3 ;
+(id)getEndOfGapAtDate:(id)arg1 rawLocations:(id)arg2 maxGapWithinVisit:(double)arg3 ;
+(BOOL)hasRawLocationsNeededToComputeSmoothedLocationAtDate:(id)arg1 workingVisitExit:(id)arg2 rawLocations:(id)arg3 kernelWidth:(double)arg4 smallestSignificantWeightExponent:(double)arg5 ;
-(double)kernelWidth;
-(void)resetState;
-(id)process:(id)arg1 ;
-(NSMutableArray *)rawLocations;
-(double)maxGapInVisit;
-(double)timeIntervalBetweenSmoothedPoints;
-(id)initWithTimeIntervalBetweenSmoothedPoints:(double)arg1 kernelWidth:(double)arg2 smallestSignificantWeightExponent:(double)arg3 maxGapWithinVisit:(double)arg4 ;
-(id)getNextDateToProcessForDate:(id)arg1 ;
-(id)getEndOfGapAtDate:(id)arg1 ;
-(id)createNewOutputClusterForSmoothedPoints:(id)arg1 exit:(id)arg2 ;
-(id)computeSmoothedPointForDate:(id)arg1 ;
-(void)disposeObsoleteRawLocationsForCurrentDateToProcess:(id)arg1 halfTimeProcessWindow:(double)arg2 ;
-(void)updateStateWithNewCluster:(id)arg1 ;
-(id)processCachedPoints;
-(NSDate *)previousProcessedDate;
-(NSDate *)nextDateToProcess;
-(NSDate *)firstDateToProcessForVisit;
-(double)smallestSignificantWeightExponent;
-(unsigned long long)leftWindowIncludedIndex;
-(unsigned long long)rightWindowExcludedIndex;
-(unsigned long long)outputLocationsCount;
-(RTVisit *)workingVisit;
-(NSDate *)entryBeforeAnyGaps;
@end


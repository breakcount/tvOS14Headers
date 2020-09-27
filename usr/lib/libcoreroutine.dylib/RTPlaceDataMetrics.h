/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTMetric.h>
#import <libobjc.A.dylib/RTMetricProtocol.h>

@class NSArray, RTLocation, NSDate, NSString;

@interface RTPlaceDataMetrics : RTMetric <RTMetricProtocol> {

	double _distanceThreshold;
	NSArray* _visitArray;
	RTLocation* _locationHome;
	RTLocation* _locationWork;
	NSArray* _locationsOfOthers;
	NSDate* _startDateTime;
	NSDate* _endDateTime;

}

@property (assign,nonatomic) double distanceThreshold;                 //@synthesize distanceThreshold=_distanceThreshold - In the implementation block
@property (nonatomic,retain) NSArray * visitArray;                     //@synthesize visitArray=_visitArray - In the implementation block
@property (nonatomic,retain) RTLocation * locationHome;                //@synthesize locationHome=_locationHome - In the implementation block
@property (nonatomic,retain) RTLocation * locationWork;                //@synthesize locationWork=_locationWork - In the implementation block
@property (nonatomic,retain) NSArray * locationsOfOthers;              //@synthesize locationsOfOthers=_locationsOfOthers - In the implementation block
@property (nonatomic,retain) NSDate * startDateTime;                   //@synthesize startDateTime=_startDateTime - In the implementation block
@property (nonatomic,retain) NSDate * endDateTime;                     //@synthesize endDateTime=_endDateTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_RT3)event;
+(id)supportedMetricKeys;
+(id)generateDictionaryOfOldMetricsForLocationsOfInterest:(id)arg1 homeMapItem:(id)arg2 workMapItem:(id)arg3 locationsOfOthers:(id*)arg4 ;
+(id)booleanKeys;
+(id)integerKeys;
+(id)doubleKeys;
+(id)bucketedKeys;
-(NSDate *)endDateTime;
-(void)setEndDateTime:(NSDate *)arg1 ;
-(NSDate *)startDateTime;
-(void)setStartDateTime:(NSDate *)arg1 ;
-(BOOL)submitMetricsWithError:(id*)arg1 ;
-(id)initWithVisitArray:(id)arg1 distanceThreshold:(double)arg2 locationHome:(id)arg3 locationWork:(id)arg4 locationsOfOthers:(id)arg5 startDateTime:(id)arg6 endDateTime:(id)arg7 ;
-(void)calculateAndSetVisitMetrics;
-(void)setCurrentInferenceReplayableMetricsFromDict:(id)arg1 ;
-(id)findHomeWorkOthersIntervals;
-(long long)labelEventInterval:(id)arg1 basedOnIntervalDict:(id)arg2 ;
-(void)calculateAndSetVisitCorrelatedMetricsForEventType:(id)arg1 eventHappenedArrayHome:(id)arg2 eventHappenedArrayWork:(id)arg3 eventHappenedArrayOthers:(id)arg4 eventLongestArrayHome:(id)arg5 eventLongestArrayWork:(id)arg6 eventLongestArrayOthers:(id)arg7 eventTotalArrayHome:(id)arg8 eventTotalArrayWork:(id)arg9 eventTotalArrayOthers:(id)arg10 ;
-(id)initWithLoggingEnabled:(BOOL)arg1 ;
-(long long)daysBetweenDate:(id)arg1 andDate:(id)arg2 ;
-(void)setDerivedMetrics;
-(id)meanOf:(id)arg1 ;
-(id)removeTimeFromDateTime:(id)arg1 withCalendar:(id)arg2 ;
-(long long)numberOfWeeksBetweenDatesBasedOnCalendar:(id)arg1 startDateTime:(id)arg2 endDateTime:(id)arg3 ;
-(long long)convertDateTime2SecondsBasedOnCalendar:(id)arg1 dateTime:(id)arg2 ;
-(id)medianOf:(id)arg1 ;
-(id)standardDeviationOf:(id)arg1 ;
-(double)distanceThreshold;
-(void)setDistanceThreshold:(double)arg1 ;
-(NSArray *)visitArray;
-(void)setVisitArray:(NSArray *)arg1 ;
-(RTLocation *)locationHome;
-(void)setLocationHome:(RTLocation *)arg1 ;
-(RTLocation *)locationWork;
-(void)setLocationWork:(RTLocation *)arg1 ;
-(NSArray *)locationsOfOthers;
-(void)setLocationsOfOthers:(NSArray *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTMetric.h>
#import <libobjc.A.dylib/RTMetricProtocol.h>

@class NSString;

@interface RTVisitSettledStateMetrics : RTMetric <RTMetricProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_RT3)event;
+(id)binsForDuration;
+(id)supportedMetricKeys;
+(void)submitVisitSettledStateMetricsForStartDate:(id)arg1 endDate:(id)arg2 isVisit:(BOOL)arg3 settledStateTransitionStore:(id)arg4 ;
+(id)createVisitSettledStateMetricsForSettledStateTransitionStore:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 isVisit:(BOOL)arg4 ;
+(unsigned long long)boundedIntegerMetricForPercentageOfTimeSettled:(unsigned long long)arg1 ;
+(unsigned long long)boundedIntegerMetricForCountOfSettledStateTransitions:(unsigned long long)arg1 ;
+(unsigned long long)bucketForDuration:(double)arg1 ;
+(unsigned long long)boundedIntegerMetricPercentageOfTimeSettledForTimeSettled:(double)arg1 overDuration:(double)arg2 ;
-(id)init;
-(id)initWithCountOfSettledStateTransitions:(unsigned long long)arg1 duration:(double)arg2 isVisit:(BOOL)arg3 timeSettled:(double)arg4 ;
@end


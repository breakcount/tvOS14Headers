/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REDailyRoutinePredictorDelegate.h>
#import <libobjc.A.dylib/REDailyRoutineRelevanceProviderManagerProperties.h>

@class NSString;

@interface REDailyRoutineRelevanceProviderManager : RERelevanceProviderManager <REDailyRoutinePredictorDelegate, REDailyRoutineRelevanceProviderManagerProperties> {

	BOOL _inMorningRoutine;
	BOOL _inEveningRoutine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isInMorningRoutine; 
@property (nonatomic,readonly) BOOL isInEveningRoutine; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
-(void)resume;
-(void)pause;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_prepareForUpdate;
-(void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(id)arg1 ;
-(void)dailyRoutinePredictorDidBeginMorningRoutine:(id)arg1 ;
-(void)dailyRoutinePredictorDidEndMorningRoutine:(id)arg1 ;
-(void)dailyRoutinePredictorDidBeginEveningRoutine:(id)arg1 ;
-(void)dailyRoutinePredictorDidEndEveningRoutine:(id)arg1 ;
-(BOOL)_isInRoutine:(unsigned long long)arg1 forDate:(id)arg2 ;
-(void)_updateRoutines;
-(BOOL)isInMorningRoutine;
-(BOOL)isInEveningRoutine;
-(id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3 ;
@end


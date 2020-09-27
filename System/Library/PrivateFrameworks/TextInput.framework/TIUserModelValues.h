/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TIUserModelDataStoring;
@class NSString, TIAnalyticsMetricsContext, NSDictionary, NSMutableDictionary;

@interface TIUserModelValues : NSObject {

	NSString* _inputMode;
	id<TIUserModelDataStoring> _userModelStore;
	TIAnalyticsMetricsContext* _context;
	NSDictionary* _durableCounters;
	NSMutableDictionary* _transientCounters;
	NSDictionary* _settingsDictionary;

}

@property (nonatomic,readonly) NSString * inputMode;                                       //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,readonly) TIAnalyticsMetricsContext * context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<TIUserModelDataStoring> userModelDataStore;              //@synthesize userModelStore=_userModelStore - In the implementation block
@property (nonatomic,readonly) NSDictionary * durableCounters;                             //@synthesize durableCounters=_durableCounters - In the implementation block
@property (nonatomic,readonly) NSDictionary * settingsDictionary;                          //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
-(TIAnalyticsMetricsContext *)context;
-(NSString *)inputMode;
-(id)initWithInputMode:(id)arg1 context:(id)arg2 userModelDataStore:(id)arg3 durableCounters:(id)arg4 settingsDictionary:(id)arg5 ;
-(void)persistForDate:(id)arg1 ;
-(void)loadTransientCounter:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3 ;
-(id)getTransientCounterForKey:(id)arg1 ;
-(void)addInteger:(int)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3 ;
-(void)addDouble:(double)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3 ;
-(int)indexFromCandidateLength:(int)arg1 forCounter:(id)arg2 ;
-(void)addToTransientCounterFromDatabaseEntry:(id)arg1 forDaysPrior:(int)arg2 ;
-(void)addEntry:(id)arg1 toCounter:(id)arg2 forDaysPrior:(int)arg3 ;
-(id)countsFromTransientCounterWithName:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3 ;
-(id)aggregatedCountFromTransientCounterWithName:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3 ;
-(id)settingValueFromName:(id)arg1 ;
-(id<TIUserModelDataStoring>)userModelDataStore;
-(NSDictionary *)durableCounters;
-(NSDictionary *)settingsDictionary;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_queue;
@class RTEventLocationIdentifier, NSObject, RTLearnedLocationManager, RTEventManager, RTMetricManager, NSManagedObjectContext, RTPersistenceManager, RTDefaultsManager, RTInvocationDispatcher, RTLocationShifter, NSDictionary, NSString;

@interface RTEventModelProvider : NSObject <RTPurgable> {

	RTEventLocationIdentifier* _reusableLookupIdentifier;
	BOOL _locationsOfInterestsAvailable;
	int _highProbabilityItemMinNumOfEvents;
	NSObject*<OS_dispatch_queue> _queue;
	RTLearnedLocationManager* _learnedLocationManager;
	RTEventManager* _eventManager;
	RTMetricManager* _metricManager;
	NSManagedObjectContext* _managedObjectContext;
	RTPersistenceManager* _persistenceManager;
	RTDefaultsManager* _defaultsManager;
	RTInvocationDispatcher* _dispatcher;
	RTLocationShifter* _locationShifter;
	double _highProbabilityItemMinProbability;
	double _relativeHighProbabilityItemMinDifference;
	NSDictionary* _locationOfInterestHistograms;

}

@property (assign,nonatomic) BOOL locationsOfInterestsAvailable;                             //@synthesize locationsOfInterestsAvailable=_locationsOfInterestsAvailable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;              //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTEventManager * eventManager;                                  //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                  //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                      //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                            //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                            //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) RTLocationShifter * locationShifter;                            //@synthesize locationShifter=_locationShifter - In the implementation block
@property (assign,nonatomic) double highProbabilityItemMinProbability;                       //@synthesize highProbabilityItemMinProbability=_highProbabilityItemMinProbability - In the implementation block
@property (assign,nonatomic) double relativeHighProbabilityItemMinDifference;                //@synthesize relativeHighProbabilityItemMinDifference=_relativeHighProbabilityItemMinDifference - In the implementation block
@property (assign,nonatomic) int highProbabilityItemMinNumOfEvents;                          //@synthesize highProbabilityItemMinNumOfEvents=_highProbabilityItemMinNumOfEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * locationOfInterestHistograms;                    //@synthesize locationOfInterestHistograms=_locationOfInterestHistograms - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)shutdown;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(RTLocationShifter *)locationShifter;
-(void)setLocationShifter:(RTLocationShifter *)arg1 ;
-(void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_shutdown;
-(RTInvocationDispatcher *)dispatcher;
-(void)setEventManager:(RTEventManager *)arg1 ;
-(RTEventManager *)eventManager;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(RTMetricManager *)metricManager;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 mapItem:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 eventManager:(id)arg2 learnedLocationManager:(id)arg3 managedObjectContext:(id)arg4 metricManager:(id)arg5 persistenceManager:(id)arg6 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)onLearnedLocationManagerNotification:(id)arg1 ;
-(void)_registerScoreBoardSubmission;
-(void)refreshAllLOIHistogramsWithHandler:(/*^block*/id)arg1 ;
-(void)onManagedObjectContextCreated:(id)arg1 ;
-(double)highProbabilityItemMinProbability;
-(double)relativeHighProbabilityItemMinDifference;
-(int)highProbabilityItemMinNumOfEvents;
-(void)_updateRegisteredDefaults:(/*^block*/id)arg1 ;
-(void)setHighProbabilityItemMinProbability:(double)arg1 ;
-(void)updateValueForKey:(id)arg1 expectedClass:(Class)arg2 handler:(/*^block*/id)arg3 ;
-(void)setRelativeHighProbabilityItemMinDifference:(double)arg1 ;
-(void)setHighProbabilityItemMinNumOfEvents:(int)arg1 ;
-(double)getOverlapTimeForIntervalStart1:(id)arg1 intervalEnd1:(id)arg2 intervalStart2:(id)arg3 intervalEnd2:(id)arg4 ;
-(void)_fetchLOIHistogramForEventLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)locationOfInterestHistograms;
-(id)getObjectWithName:(id)arg1 source:(unsigned long long)arg2 calendarIdentifier:(id)arg3 fromDictionary:(id)arg4 ;
-(void)addEvent:(id)arg1 toIdentifierDict:(id)arg2 useCalendarIdentifier:(BOOL)arg3 ;
-(id)getLOIHistogramForEvents:(id)arg1 andLocationsOfInterest:(id)arg2 ;
-(BOOL)highProbabilityHistogramItem:(id)arg1 ;
-(void)_submitMetricModelWithLearnedNongeocodable:(int)arg1 unlearnedNongeocodable:(int)arg2 ;
-(id)getAllLOIHistogramsForEvents:(id)arg1 andLocationsOfInterest:(id)arg2 collectMetrics:(BOOL)arg3 ;
-(void)setLocationOfInterestHistograms:(NSDictionary *)arg1 ;
-(BOOL)_persistEventModel;
-(void)_buildLocationOfInterestHistogramAndCollectMetrics:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)setLocationsOfInterestsAvailable:(BOOL)arg1 ;
-(void)restoreEventModelIfAppropriate;
-(void)fetchLOIHistogramForEventLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)_predictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 ;
-(BOOL)relativeHighProbabilityHistogramItem:(id)arg1 toItem:(id)arg2 ;
-(BOOL)deleteEventModel;
-(void)_finishRestoreEventModelWithIdentifiers:(id)arg1 histoItems:(id)arg2 locationsOfInterest:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)_getLocationOfInterestWithIdentifier:(id)arg1 fromArray:(id)arg2 ;
-(BOOL)locationsOfInterestsAvailable;
-(void)_restoreEventModelWithHandler:(/*^block*/id)arg1 ;
-(BOOL)_persistUserInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 ;
-(void)_submitMetricAutofillWithInteraction:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_submitMetricResponseWithInteraction:(unsigned long long)arg1 feedback:(id)arg2 identifier:(id)arg3 ;
-(BOOL)_deleteUserInteractionsBeforeDate:(id)arg1 ;
-(void)fetchAllLOIHistogramsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)persistEventModel;
-(void)restoreEventModelWithHandler:(/*^block*/id)arg1 ;
-(BOOL)_hasSuggestedLocationForEvent:(id)arg1 ;
-(id)_suggestedLocationForEvent:(id)arg1 ;
-(void)_submitMetricScoreBoardOnDate:(id)arg1 submissionHandler:(/*^block*/id)arg2 ;
-(void)_submitMetricScoreBoardFromStartDate:(id)arg1 endDate:(id)arg2 submissionHandler:(/*^block*/id)arg3 ;
-(id)lastDateOfLOIVisits:(id)arg1 ;
-(id)_geoLocationOfEvent:(id)arg1 ;
-(unsigned long long)_locationStateOfEvent:(id)arg1 ;
-(unsigned long long)verifyPresenceOfUserWithEventLocation:(id)arg1 deviceLOIs:(id)arg2 ;
-(id)categoryForLocationState:(unsigned long long)arg1 ttlTrigggerd:(BOOL)arg2 ;
-(id)keywordForCategory:(id)arg1 visited:(unsigned long long)arg2 ;
-(id)appendFieldToCategoryString:(id)arg1 field:(id)arg2 value:(long long)arg3 ;
-(unsigned long long)lengthOfEvent:(id)arg1 ;
-(unsigned long long)timeOfDayOfEvent:(id)arg1 ;
-(id)scoreBoardFromEventCounter:(id)arg1 categories:(id)arg2 ;
-(void)_submitMetricScoreBoardOnDate:(id)arg1 ;
@end


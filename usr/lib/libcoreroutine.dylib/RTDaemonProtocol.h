/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTDaemonProtocol <NSObject>
@required
-(void)setRestorationIdentifier:(id)arg1;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 reply:(/*^block*/id)arg4;
-(void)fetchRoutineEnabledWithReply:(/*^block*/id)arg1;
-(void)setRoutineEnabled:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)clearRoutineWithReply:(/*^block*/id)arg1;
-(void)fetchCloudSyncAuthorizationStateWithReply:(/*^block*/id)arg1;
-(void)updateCloudSyncProvisionedForAccount:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)fetchAllLocationsOfInterestForSettingsWithReply:(/*^block*/id)arg1;
-(void)fetchRoutineModeFromLocation:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 reply:(/*^block*/id)arg4;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(/*^block*/id)arg3;
-(void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(/*^block*/id)arg3;
-(void)startMonitoringVisitsWithReply:(/*^block*/id)arg1;
-(void)stopMonitoringVisitsWithReply:(/*^block*/id)arg1;
-(void)startLeechingVisitsWithReply:(/*^block*/id)arg1;
-(void)stopLeechingVisitsWithReply:(/*^block*/id)arg1;
-(void)startLeechingLowConfidenceVisitsWithReply:(/*^block*/id)arg1;
-(void)stopLeechingLowConfidenceVisitsWithReply:(/*^block*/id)arg1;
-(void)fetchStoredVisitsWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchPathToDiagnosticFilesWithReply:(/*^block*/id)arg1;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)fetchMonitoredScenarioTriggerTypesWithReply:(/*^block*/id)arg1;
-(void)fetchLastVehicleEventsWithReply:(/*^block*/id)arg1;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 reply:(/*^block*/id)arg3;
-(void)clearAllVehicleEventsWithReply:(/*^block*/id)arg1;
-(void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2 reply:(/*^block*/id)arg3;
-(void)engageInVehicleEventWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startMonitoringVehicleEventsWithReply:(/*^block*/id)arg1;
-(void)stopMonitoringVehicleEventsWithReply:(/*^block*/id)arg1;
-(void)fetchAutomaticVehicleEventDetectionSupportedWithReply:(/*^block*/id)arg1;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 reply:(/*^block*/id)arg2;
-(void)addLocationOfInterestOfType:(long long)arg1 mapItemStorage:(id)arg2 customLabel:(id)arg3 reply:(/*^block*/id)arg4;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItemStorage:(id)arg3 customLabel:(id)arg4 reply:(/*^block*/id)arg5;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItemStorage:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 customLabel:(id)arg3 reply:(/*^block*/id)arg4;
-(void)removeLocationOfInterestWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)removeVisitWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchPlaceInferencesWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchFormattedPostalAddressesFromMeCard:(/*^block*/id)arg1;
-(void)fetchStoredLocationsWithContext:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(id)arg2 reply:(/*^block*/id)arg3;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 reply:(/*^block*/id)arg5;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNTrace;

@interface MNTraceLoader : NSObject {

	MNTrace* _trace;

}
-(id)loadTraceWithPath:(id)arg1 outError:(id*)arg2 ;
-(BOOL)_loadTraceVersion;
-(BOOL)_updateTraceFromVersion:(unsigned long long)arg1 outError:(id*)arg2 ;
-(BOOL)_loadInfoTable;
-(BOOL)_loadLocationsTable;
-(BOOL)_loadDirectionsTable;
-(BOOL)_loadETAUpdatesTable;
-(BOOL)_loadCompassHeadingDataTable;
-(BOOL)_loadMotionDataTable;
-(BOOL)_loadVehicleDataTable;
-(BOOL)_loadRouteSelectionsTable;
-(BOOL)_loadAnnotatedUserBehaviorTable;
-(BOOL)_loadAnnotatedUserEnvironmentTable;
-(BOOL)_loadCommuteDestinationsTable;
-(BOOL)_loadCommuteDirectionsRequestsTable;
-(BOOL)_loadMiscInfo;
-(BOOL)_executeQuery:(id)arg1 rowHandler:(/*^block*/id)arg2 ;
-(BOOL)_tableExists:(id)arg1 ;
-(id)_handleUpdateError;
@end

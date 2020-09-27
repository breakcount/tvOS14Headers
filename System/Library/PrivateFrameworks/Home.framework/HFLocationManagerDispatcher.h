/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CLLocationManager, NSHashTable, NSMutableArray, NAFuture, NSString;

@interface HFLocationManagerDispatcher : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _hasInitializedAuthorizationStatus;
	int _cachedAuthorizationStatus;
	CLLocationManager* _locationManager;
	NSHashTable* _locationObservers;
	NSMutableArray* _pendingAuthorizationStatusFutures;

}

@property (nonatomic,readonly) CLLocationManager * locationManager;                             //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) NSHashTable * locationObservers;                                   //@synthesize locationObservers=_locationObservers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingAuthorizationStatusFutures;              //@synthesize pendingAuthorizationStatusFutures=_pendingAuthorizationStatusFutures - In the implementation block
@property (assign,nonatomic) int cachedAuthorizationStatus;                                     //@synthesize cachedAuthorizationStatus=_cachedAuthorizationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasInitializedAuthorizationStatus;                            //@synthesize hasInitializedAuthorizationStatus=_hasInitializedAuthorizationStatus - In the implementation block
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) NAFuture * authorizationStatusFuture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDispatcher;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(int)authorizationStatus;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3 ;
-(void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3 ;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didFinishDeferredUpdatesWithError:(id)arg2 ;
-(CLLocationManager *)locationManager;
-(NAFuture *)authorizationStatusFuture;
-(BOOL)hasInitializedAuthorizationStatus;
-(int)cachedAuthorizationStatus;
-(NSMutableArray *)pendingAuthorizationStatusFutures;
-(void)_updateCachedAuthorizationStatus:(int)arg1 ;
-(void)setHasInitializedAuthorizationStatus:(BOOL)arg1 ;
-(void)setCachedAuthorizationStatus:(int)arg1 ;
-(NSHashTable *)locationObservers;
-(void)dispatchLocationManagerObserverMessage:(SEL)arg1 withBlock:(/*^block*/id)arg2 sender:(id)arg3 ;
-(void)_updateMacAuthorizationStatus:(int)arg1 ;
-(void)_authorizeHomeKitLocationServices;
-(void)setLocationObservers:(NSHashTable *)arg1 ;
@end


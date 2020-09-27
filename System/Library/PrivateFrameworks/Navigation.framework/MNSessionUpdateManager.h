/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitRouteUpdaterDelegate.h>

@protocol MNSessionUpdateManagerDelegate;
@class NSString, GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOLatLng, GEOTransitRouteUpdater, NSMutableDictionary, NSTimer, NSDate, GEOETATrafficUpdateRequest, GEOComposedETARoute, NSError;

@interface MNSessionUpdateManager : NSObject <GEOTransitRouteUpdaterDelegate> {

	id<MNSessionUpdateManagerDelegate> _delegate;
	NSString* _requestingAppIdentifier;
	GEOApplicationAuditToken* _auditToken;
	GEODataRequestThrottlerToken* _throttleToken;
	GEOLatLng* _tripOrigin;
	GEOTransitRouteUpdater* _transitUpdater;
	NSMutableDictionary* _subscribers;
	NSTimer* _etaTimer;
	double _etaRequestInterval;
	double _initialRequestDelay;
	double _opportunisticRequestTimeWindow;
	NSDate* _dateOfLastUpdate;
	BOOL _lastRequestWasServerDriven;
	unsigned long long _maxAlternateRoutesCount;
	BOOL _isPaused;
	GEOETATrafficUpdateRequest* _pendingETARequest;
	GEOComposedETARoute* _pendingETARoute;
	NSError* _retryError;

}

@property (assign,nonatomic,__weak) id<MNSessionUpdateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * requestingAppIdentifier;                                //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;                           //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,retain) GEODataRequestThrottlerToken * throttleToken;                    //@synthesize throttleToken=_throttleToken - In the implementation block
@property (assign,nonatomic) unsigned long long maxAlternateRoutesCount;                      //@synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount - In the implementation block
@property (nonatomic,retain) GEOLatLng * tripOrigin;                                          //@synthesize tripOrigin=_tripOrigin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<MNSessionUpdateManagerDelegate>)delegate;
-(void)setDelegate:(id<MNSessionUpdateManagerDelegate>)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(void)transitRouteUpdater:(id)arg1 willSendRequests:(id)arg2 ;
-(void)transitRouteUpdater:(id)arg1 willUpdateTransitForRouteIDs:(id)arg2 ;
-(void)transitRouteUpdater:(id)arg1 didFailUpdateForRouteIDs:(id)arg2 withError:(id)arg3 ;
-(void)transitRouteUpdater:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)transitRouteUpdater:(id)arg1 didUpdateTransitRoutes:(id)arg2 ;
-(GEODataRequestThrottlerToken *)throttleToken;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(void)setTripOrigin:(GEOLatLng *)arg1 ;
-(void)stopUpdateRequests;
-(NSString *)requestingAppIdentifier;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
-(unsigned long long)maxAlternateRoutesCount;
-(void)setMaxAlternateRoutesCount:(unsigned long long)arg1 ;
-(GEOLatLng *)tripOrigin;
-(void)_handleETAResponse:(id)arg1 forRouteInfo:(id)arg2 etaRoute:(id)arg3 request:(id)arg4 error:(id)arg5 ;
-(void)startUpdateRequestsForRoutes:(id)arg1 andNavigationType:(int)arg2 ;
-(void)_scheduleETATimerWithInterval:(double)arg1 ;
-(void)_terminateETARequests;
-(void)_continueETARequests;
-(void)_sendETARequest;
-(BOOL)_hasAtLeastOneActiveSubscriber;
-(void)_sendETARequestWithRouteAttributes:(id)arg1 ;
-(id)_baseETARequest;
-(id)_updateETARequest:(id)arg1 withRouteInfo:(id)arg2 andUserLocation:(id)arg3 ;
-(void)_updateRouteAttributesFor:(id)arg1 route:(id)arg2 updatedLocation:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)restartUpdateTimer;
-(void)requestUpdateForETAUPosition:(id)arg1 ;
-(void)pauseUpdateRequestsForSubscriber:(id)arg1 ;
-(void)resumeUpdateRequestsForSubscriber:(id)arg1 ;
-(void)setThrottleToken:(GEODataRequestThrottlerToken *)arg1 ;
@end


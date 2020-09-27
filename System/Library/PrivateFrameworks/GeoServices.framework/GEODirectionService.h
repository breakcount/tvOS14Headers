/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEODirectionsRequester;

@interface GEODirectionService : NSObject {

	GEODirectionsRequester* _directionsRequester;

}

@property (nonatomic,readonly) GEODirectionsRequester * directionsRequester;              //@synthesize directionsRequester=_directionsRequester - In the implementation block
+(id)sharedService;
-(id)init;
-(id)directionsURL;
-(GEODirectionsRequester *)directionsRequester;
-(id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 sessionID:(GEOSessionID)arg7 ;
-(id)ticketForSearchAlongRoute:(id)arg1 transportType:(int)arg2 currentLocation:(id)arg3 originalRouteZilchPoints:(id)arg4 originalRouteID:(id)arg5 returnToOriginalDestination:(BOOL)arg6 isReroute:(BOOL)arg7 routeAttributes:(id)arg8 ;
-(id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 sessionID:(GEOSessionID)arg7 ;
-(id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 sessionID:(GEOSessionID)arg7 ;
-(id)ticketForCyclingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 sessionID:(GEOSessionID)arg7 ;
-(id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 ;
-(id)ticketForDrivingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 originalRequest:(id)arg3 stepIndex:(unsigned long long)arg4 routeCoordinate:(SCD_Struct_GE83)arg5 routeAttributes:(id)arg6 originalDirectionsResponseID:(id)arg7 previousRequestTime:(double)arg8 requestingAppIdentifier:(id)arg9 evInfo:(id)arg10 ;
-(id)ticketForDrivingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRoute:(id)arg3 returnToOriginalDestination:(BOOL)arg4 isReroute:(BOOL)arg5 routeAttributes:(id)arg6 ;
-(id)ticketForDrivingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 ;
-(id)ticketForDrivingDoomFromOrigin:(id)arg1 toDestination:(id)arg2 requestPriority:(id)arg3 routeAttributes:(id)arg4 ;
-(id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 ;
-(id)ticketForWalkingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeCoordinate:(SCD_Struct_GE83)arg4 routeAttributes:(id)arg5 originalDirectionsResponseID:(id)arg6 previousRequestTime:(double)arg7 requestingAppIdentifier:(id)arg8 ;
-(id)ticketForWalkingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 ;
-(id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 ;
-(id)ticketForTransitRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeAttributes:(id)arg4 originalDirectionsResponseID:(id)arg5 previousRequestTime:(double)arg6 ;
-(id)ticketForTransitRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 ;
-(id)ticketForCyclingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 ;
-(id)ticketForCyclingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeCoordinate:(SCD_Struct_GE83)arg4 routeAttributes:(id)arg5 originalDirectionsResponseID:(id)arg6 previousRequestTime:(double)arg7 requestingAppIdentifier:(id)arg8 ;
-(id)ticketForCyclingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRoute:(id)arg3 returnToOriginalDestination:(BOOL)arg4 isReroute:(BOOL)arg5 routeAttributes:(id)arg6 ;
-(id)ticketForCyclingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 ;
@end


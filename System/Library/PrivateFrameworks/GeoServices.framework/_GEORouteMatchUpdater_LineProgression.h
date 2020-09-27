/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedTransitTripRouteStep;

@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater {

	GEOComposedTransitTripRouteStep* _boardStep;
	GEOComposedTransitTripRouteStep* _alightStep;
	PolylineCoordinate _startRouteCoordinate;

}
-(unsigned long long)priority;
-(id)initWithTransitRouteMatcher:(id)arg1 tripSegment:(id)arg2 ;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
@end


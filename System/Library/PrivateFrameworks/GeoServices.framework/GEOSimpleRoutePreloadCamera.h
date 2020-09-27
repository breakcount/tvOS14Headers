/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEORoutePreloadCamera.h>

@class NSString;

@interface GEOSimpleRoutePreloadCamera : NSObject <GEORoutePreloadCamera> {

	unsigned long long _zoomLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)zoomLevel;
-(id)initWithZoomLevel:(unsigned long long)arg1 ;
-(void)implicateTilesForCoordinate:(GEOCoarseLocationLatLng)arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(BOOL)arg4 into:(id)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 tileSetStyles:(id)arg8 ;
@end


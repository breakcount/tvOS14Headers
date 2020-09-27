/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEODirectionsResponse, MKMapItem, NSArray, NSURL, NSString;

@interface MKDirectionsResponse : NSObject {

	GEODirectionsResponse* _geoResponse;
	MKMapItem* _source;
	MKMapItem* _destination;
	NSArray* _routes;

}

@property (nonatomic,retain,readonly) NSURL * _mapsURL; 
@property (nonatomic,retain,readonly) GEODirectionsResponse * _geoResponse; 
@property (nonatomic,retain,readonly) NSString * _incidentDescription; 
@property (nonatomic,readonly) MKMapItem * source;                                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) MKMapItem * destination;                                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSArray * routes;                                         //@synthesize routes=_routes - In the implementation block
+(id)_responseWithGEODirectionsRouteResponse:(id)arg1 routeRequest:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5 error:(id*)arg6 ;
-(MKMapItem *)source;
-(MKMapItem *)destination;
-(NSArray *)routes;
-(NSURL *)_mapsURL;
-(NSString *)_incidentDescription;
-(id)_initWithGEORouteResponse:(id)arg1 routeRequest:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5 ;
-(GEODirectionsResponse *)_geoResponse;
@end


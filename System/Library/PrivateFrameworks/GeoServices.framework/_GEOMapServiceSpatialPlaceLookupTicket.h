/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/_GEOPlaceRequestTicket.h>
#import <libobjc.A.dylib/GEOMapServiceSpatialPlaceLookupTicket.h>

@class NSArray, GEOMapServiceTraits, NSString;

@interface _GEOMapServiceSpatialPlaceLookupTicket : _GEOPlaceRequestTicket <GEOMapServiceSpatialPlaceLookupTicket> {

	NSArray* _parameters;

}

@property (nonatomic,readonly) NSArray * parameters;                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)maxParametersCount;
-(NSArray *)parameters;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 queue:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 onQueue:(id)arg2 withResult:(id)arg3 error:(id)arg4 ;
-(void)handleResponse:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)spatialPlaceLookupResultsFromResponse:(id)arg1 ;
-(void)createSpatialPlaceLookupResultForLookupResults:(id)arg1 mapItems:(id)arg2 completion:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)mapItemsForPlaceLookupResponses:(id)arg1 usingIdentifierToMapItemMap:(id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)initWithRequest:(id)arg1 parameters:(id)arg2 traits:(id)arg3 ;
@end


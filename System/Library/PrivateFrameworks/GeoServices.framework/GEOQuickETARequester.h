/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOQuickETARequest, GEOETARequest, GEODirectionsRequest, NSString;

@interface GEOQuickETARequester : NSObject {

	GEOQuickETARequest* _request;
	GEOETARequest* _simpleETARequest;
	GEODirectionsRequest* _directionsETARequest;
	NSString* _loggingFacility;

}
+(BOOL)requestETAFromOrigin:(id)arg1 toDestinations:(id)arg2 transportType:(int)arg3 timepoint:(GEOTimepoint)arg4 includeDistance:(BOOL)arg5 commonOptions:(id)arg6 automobileOptions:(id)arg7 walkingOptions:(id)arg8 transitOptions:(id)arg9 cyclingOptions:(id)arg10 auditToken:(id)arg11 handler:(/*^block*/id)arg12 callbackQueue:(id)arg13 ;
+(BOOL)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)cancel;
-(id)initWithRequest:(id)arg1 ;
-(void)_calculateSimpleETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithHandler:(/*^block*/id)arg3 ;
-(void)_calculateRoutingETAWithSummary:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)calculateETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithResponseHandler:(/*^block*/id)arg3 ;
-(void)_calculateSimpleETAFromAPI:(BOOL)arg1 WithHandler:(/*^block*/id)arg2 ;
-(void)_calculateRoutingETAWithHandler:(/*^block*/id)arg1 ;
-(void)calculateETAWithResponseHandler:(/*^block*/id)arg1 ;
-(void)calculateETAFromAPI:(BOOL)arg1 WithResponseHandler:(/*^block*/id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOTransitRoutingIncidentMessage;
@class GEOAlert, NSString;

@interface GEODirectionsError : NSObject <NSSecureCoding> {

	GEOAlert* _alert;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	id<GEOTransitRoutingIncidentMessage> _routingIncidentMessage;

}

@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> incidentMessage; 
@property (nonatomic,readonly) long long firstDirectionsErrorCode; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)_copyProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(long long)_errorCodeForProblemDetail:(GEOProblemDetail)arg1 ;
-(BOOL)_errorCode:(long long)arg1 toProblem:(out int*)arg2 ;
-(id)initWithResponse:(id)arg1 ;
-(id)initWithWaypointIndex:(unsigned long long)arg1 ;
-(id<GEOTransitRoutingIncidentMessage>)incidentMessage;
-(long long)firstDirectionsErrorCode;
-(BOOL)hasError:(long long)arg1 ;
@end


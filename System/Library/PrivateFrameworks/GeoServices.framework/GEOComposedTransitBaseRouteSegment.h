/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteSegment.h>

@interface GEOComposedTransitBaseRouteSegment : GEOComposedRouteSegment {

	NSRange _transitStepRange;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 routeSegmentType:(long long)arg2 stepRange:(NSRange)arg3 transitStepRange:(NSRange)arg4 pointRange:(NSRange)arg5 ;
-(id)startingTransitStop;
-(id)endingTransitStop;
-(NSRange)transitStepRange;
@end

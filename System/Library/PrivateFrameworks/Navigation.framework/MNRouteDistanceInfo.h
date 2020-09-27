/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface MNRouteDistanceInfo : NSObject <NSSecureCoding> {

	unsigned long long _legIndex;
	NSUUID* _routeID;
	double _distanceRemainingToEndOfLeg;
	double _distanceRemainingToEndOfRoute;

}

@property (nonatomic,readonly) double distanceRemainingToEndOfLeg;                //@synthesize distanceRemainingToEndOfLeg=_distanceRemainingToEndOfLeg - In the implementation block
@property (nonatomic,readonly) double distanceRemainingToEndOfRoute;              //@synthesize distanceRemainingToEndOfRoute=_distanceRemainingToEndOfRoute - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)distanceRemainingToEndOfLeg;
-(double)distanceRemainingToEndOfRoute;
-(id)initWithDistanceRemainingToEndOfLeg:(double)arg1 distanceRemainingToEndOfRoute:(double)arg2 forLegIndex:(unsigned long long)arg3 forRouteID:(id)arg4 ;
@end


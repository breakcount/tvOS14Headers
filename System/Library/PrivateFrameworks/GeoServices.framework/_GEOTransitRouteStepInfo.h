/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTransitStep, GEOStep;

@interface _GEOTransitRouteStepInfo : NSObject {

	long long _routeSegmentType;
	NSRange _pointRange;
	GEOTransitStep* _transitStep;
	unsigned _duration;
	GEOStep* _walkingStep;
	NSRange _maneuverPointRange;

}

@property (assign,nonatomic) long long routeSegmentType;                //@synthesize routeSegmentType=_routeSegmentType - In the implementation block
@property (assign,nonatomic) NSRange pointRange;                        //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,retain) GEOTransitStep * transitStep;              //@synthesize transitStep=_transitStep - In the implementation block
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) GEOStep * walkingStep;                     //@synthesize walkingStep=_walkingStep - In the implementation block
@property (assign,nonatomic) NSRange maneuverPointRange;                //@synthesize maneuverPointRange=_maneuverPointRange - In the implementation block
@property (nonatomic,readonly) double distance; 
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(double)distance;
-(GEOTransitStep *)transitStep;
-(NSRange)pointRange;
-(void)setPointRange:(NSRange)arg1 ;
-(long long)routeSegmentType;
-(NSRange)maneuverPointRange;
-(unsigned long long)numPoints;
-(void)setRouteSegmentType:(long long)arg1 ;
-(void)setTransitStep:(GEOTransitStep *)arg1 ;
-(GEOStep *)walkingStep;
-(void)setWalkingStep:(GEOStep *)arg1 ;
-(void)setManeuverPointRange:(NSRange)arg1 ;
@end


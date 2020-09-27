/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEORouteBuilderOutput.h>

@class NSArray;

@interface GEOTransitRouteBuilderOutput : GEORouteBuilderOutput {

	BOOL _isWalkingOnlyRoute;
	NSArray* _rideSelections;
	NSArray* _sectionOptions;

}

@property (nonatomic,readonly) BOOL isWalkingOnlyRoute;               //@synthesize isWalkingOnlyRoute=_isWalkingOnlyRoute - In the implementation block
@property (nonatomic,readonly) NSArray * rideSelections;              //@synthesize rideSelections=_rideSelections - In the implementation block
@property (nonatomic,readonly) NSArray * sectionOptions;              //@synthesize sectionOptions=_sectionOptions - In the implementation block
-(NSArray *)sectionOptions;
-(void)setSectionOptions:(NSArray *)arg1 ;
-(BOOL)isWalkingOnlyRoute;
-(NSArray *)rideSelections;
-(void)setRideSelections:(NSArray *)arg1 ;
-(void)setIsWalkingOnlyRoute:(BOOL)arg1 ;
@end


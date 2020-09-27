/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitBaseRouteSegment.h>

@class NSArray, GEOComposedTransitTripRouteStep, NSTimeZone, NSDate;

@interface GEOComposedTransitTripRouteSegment : GEOComposedTransitBaseRouteSegment {

	unsigned long long _boardStepIndex;
	unsigned long long _alightStepIndex;
	unsigned long long _blockTransferStepIndex;
	unsigned long long _numberOfTransitStops;
	unsigned long long _selectedRideOptionIndex;
	NSArray* _actionSheetDescriptions;
	NSArray* _routeDetailsOptionsArtwork;
	NSArray* _actionSheetOptionsArtwork;
	NSArray* _transitLineOptions;
	NSArray* _alightNotifications;

}

@property (nonatomic,readonly) id<GEOTransitSystem> transitSystem; 
@property (nonatomic,readonly) id<GEOTransitLine> transitLine; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * boardStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * alightStep; 
@property (nonatomic,readonly) NSTimeZone * departureTimeZone; 
@property (nonatomic,readonly) NSDate * departureTime; 
@property (nonatomic,readonly) NSArray * departureTimes; 
@property (nonatomic,readonly) NSArray * transitLineOptions;                              //@synthesize transitLineOptions=_transitLineOptions - In the implementation block
@property (nonatomic,readonly) double departureFrequencyMin; 
@property (nonatomic,readonly) double departureFrequencyMax; 
@property (nonatomic,readonly) NSDate * lastStepArrivalDate; 
@property (nonatomic,readonly) NSArray * routeLineArtwork; 
@property (nonatomic,readonly) unsigned long long rideOptionsCount; 
@property (assign,nonatomic) unsigned long long selectedRideOptionIndex;                  //@synthesize selectedRideOptionIndex=_selectedRideOptionIndex - In the implementation block
@property (nonatomic,readonly) BOOL notifyBeforeAlightStep; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)departureTime;
-(double)departureFrequencyMin;
-(double)departureFrequencyMax;
-(unsigned long long)numberOfTransitStops;
-(unsigned long long)rideOptionsCount;
-(void)setSelectedRideOptionIndex:(unsigned long long)arg1 ;
-(NSArray *)routeLineArtwork;
-(id<GEOTransitLine>)transitLine;
-(NSTimeZone *)departureTimeZone;
-(NSArray *)departureTimes;
-(id<GEOTransitSystem>)transitSystem;
-(BOOL)_needsStepData;
-(void)_cacheStepData;
-(GEOComposedTransitTripRouteStep *)boardStep;
-(id)blockTransferStep;
-(GEOComposedTransitTripRouteStep *)alightStep;
-(id)initWithComposedRoute:(id)arg1 rideSelections:(id)arg2 sectionOptions:(id)arg3 decoderData:(id)arg4 tripIndex:(unsigned long long)arg5 stepRange:(NSRange)arg6 transitStepRange:(NSRange)arg7 pointRange:(NSRange)arg8 ;
-(id)routeDetailsPrimaryArtworkForRideOption:(unsigned long long)arg1 ;
-(id)actionSheetArtworkForRideOption:(unsigned long long)arg1 ;
-(id)actionSheetDescriptionForRideOption:(unsigned long long)arg1 ;
-(id)transitLineForRideOption:(unsigned long long)arg1 ;
-(NSDate *)lastStepArrivalDate;
-(BOOL)notifyBeforeAlightStep;
-(unsigned long long)selectedRideOptionIndex;
-(NSArray *)transitLineOptions;
@end


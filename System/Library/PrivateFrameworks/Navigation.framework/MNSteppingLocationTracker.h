/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNLocationTracker.h>
#import <libobjc.A.dylib/MNArrivalUpdaterDelegate.h>

@class GEORouteMatcher, MNArrivalUpdater, NSString;

@interface MNSteppingLocationTracker : MNLocationTracker <MNArrivalUpdaterDelegate> {

	GEORouteMatcher* _routeMatcher;
	MNArrivalUpdater* _arrivalUpdater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)transportType;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(void)startTracking;
-(void)stopTracking;
-(id)matchedLocationForLocation:(id)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(void)resetForTracePlayerAtLocation:(id)arg1 ;
-(void)arrivalUpdaterDidArrive:(id)arg1 atEndOfLegAtIndex:(unsigned long long)arg2 ;
@end


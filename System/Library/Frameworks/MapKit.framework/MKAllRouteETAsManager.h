/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKAllRouteETAsManagerDelegate;
@class _MKRouteETAFetcher, GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions, MKMapItem;

@interface MKAllRouteETAsManager : NSObject {

	_MKRouteETAFetcher* _etaFetcher;
	id<MKAllRouteETAsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKAllRouteETAsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,copy) GEOTransitOptions * transitOptions; 
@property (nonatomic,copy) GEOCyclingOptions * cyclingOptions; 
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,retain) MKMapItem * originMapItem; 
-(id)init;
-(id<MKAllRouteETAsManagerDelegate>)delegate;
-(void)setDelegate:(id<MKAllRouteETAsManagerDelegate>)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOCyclingOptions *)cyclingOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)updateETA;
-(MKMapItem *)originMapItem;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
@end


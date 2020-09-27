/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEORoutePreloader, GEOComposedRoute;


@protocol GEORoutePreloadStrategy <NSObject>
@property (assign,nonatomic,__weak) GEORoutePreloader * preloader; 
@property (nonatomic,retain) GEOComposedRoute * route; 
@required
-(void)start;
-(void)stop;
-(void)setPreloader:(id)arg1;
-(void)updateWithRoute:(id)arg1 routeMatch:(id)arg2;
-(void)performTearDown;
-(GEOComposedRoute *)route;
-(void)updateWithRouteMatch:(id)arg1;
-(void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
-(void)setRoute:(id)arg1;
-(GEORoutePreloader *)preloader;

@end

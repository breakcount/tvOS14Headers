/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, GEOLocationShifter;

@interface GEOCoarseLocationProvider : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned long long _inFlightTileLoadsCount;
	GEOLocationShifter* _locationShifter;

}
-(id)init;
-(BOOL)_snapNonMercatorCoordinateIfNecessary:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_fetchBasicCoarseEquivalentForLocation:(id)arg1 fallbackIsPermanent:(BOOL)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)_fetchRepresentativePointFromData:(id)arg1 location:(id)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)fetchCoarseEquivalentForLocation:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

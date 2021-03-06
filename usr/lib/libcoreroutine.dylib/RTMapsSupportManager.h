/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTMapServiceManager;

@interface RTMapsSupportManager : RTService {

	RTMapServiceManager* _mapServiceManager;

}

@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;              //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
-(id)init;
-(void)_setup;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithMapServiceManager:(id)arg1 ;
-(void)_createQueries;
-(void)_showParkedCarBulletinForEvent:(id)arg1 ;
-(void)_showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)_clearParkedCarBulletin;
-(void)_fetchFavoritePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchPinnedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchHistoryEntryPlaceDisplaysWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchHistoryEntryRoutesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)showParkedCarBulletinForEvent:(id)arg1 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)clearParkedCarBulletin;
-(void)fetchFavoritePlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchPinnedPlacesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchHistoryEntryPlaceDisplaysWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchHistoryEntryRoutesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
@end


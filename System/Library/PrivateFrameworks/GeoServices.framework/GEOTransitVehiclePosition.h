/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol GEOTransitVehiclePosition <NSObject>
@property (nonatomic,readonly) unsigned long long tripID; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) double heading; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSString * direction; 
@property (nonatomic,copy,readonly) NSString * headsign; 
@property (nonatomic,copy,readonly) NSString * colorHexString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkDataSource; 
@required
-(NSDate *)timestamp;
-(GEOCoarseLocationLatLng)coordinate;
-(NSString *)direction;
-(double)heading;
-(unsigned long long)tripID;
-(NSString *)headsign;
-(NSString *)colorHexString;
-(id<GEOTransitArtworkDataSource>)artworkDataSource;

@end

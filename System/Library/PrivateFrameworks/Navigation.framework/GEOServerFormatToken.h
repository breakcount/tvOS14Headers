/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol GEOServerFormatToken <NSObject,NSCoding>
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * token; 
@property (nonatomic,readonly) unsigned value1; 
@property (nonatomic,readonly) unsigned value2; 
@property (nonatomic,readonly) NSArray * value3s; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) float percentageValue; 
@property (nonatomic,readonly) BOOL shouldScaleUnits; 
@property (nonatomic,readonly) id<GEOServerFormatTokenPriceValue> priceValue; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkValue; 
@property (nonatomic,readonly) NSArray * timeStampValues; 
@property (nonatomic,readonly) id<GEOServerFormatTokenCountdownValue> countdownValue; 
@required
-(NSString *)stringValue;
-(long long)type;
-(NSString *)token;
-(unsigned)value1;
-(unsigned)value2;
-(NSArray *)value3s;
-(id<GEOServerFormatTokenPriceValue>)priceValue;
-(id<GEOTransitArtworkDataSource>)artworkValue;
-(NSArray *)timeStampValues;
-(float)percentageValue;
-(id<GEOServerFormatTokenCountdownValue>)countdownValue;
-(BOOL)shouldScaleUnits;

@end


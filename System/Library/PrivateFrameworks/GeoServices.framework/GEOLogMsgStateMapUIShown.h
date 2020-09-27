/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateMapUIShown : PBCodable <NSCopying> {

	BOOL _isAirQualityShown;
	BOOL _isVenueExperienceShown;
	BOOL _isWeatherShown;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasIsAirQualityShown; 
@property (assign,nonatomic) BOOL isAirQualityShown; 
@property (assign,nonatomic) BOOL hasIsWeatherShown; 
@property (assign,nonatomic) BOOL isWeatherShown; 
@property (assign,nonatomic) BOOL hasIsVenueExperienceShown; 
@property (assign,nonatomic) BOOL isVenueExperienceShown; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setIsAirQualityShown:(BOOL)arg1 ;
-(void)setIsWeatherShown:(BOOL)arg1 ;
-(void)setIsVenueExperienceShown:(BOOL)arg1 ;
-(BOOL)isAirQualityShown;
-(void)setHasIsAirQualityShown:(BOOL)arg1 ;
-(BOOL)hasIsAirQualityShown;
-(BOOL)isWeatherShown;
-(void)setHasIsWeatherShown:(BOOL)arg1 ;
-(BOOL)hasIsWeatherShown;
-(BOOL)isVenueExperienceShown;
-(void)setHasIsVenueExperienceShown:(BOOL)arg1 ;
-(BOOL)hasIsVenueExperienceShown;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOSharedNavETAInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _etaTimestamp;
	double _latitude;
	double _longitude;
	double _remainingDistance;
	double _remainingTime;
	struct {
		unsigned has_etaTimestamp : 1;
		unsigned has_latitude : 1;
		unsigned has_longitude : 1;
		unsigned has_remainingDistance : 1;
		unsigned has_remainingTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRemainingDistance; 
@property (assign,nonatomic) double remainingDistance; 
@property (assign,nonatomic) BOOL hasRemainingTime; 
@property (assign,nonatomic) double remainingTime; 
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasEtaTimestamp; 
@property (assign,nonatomic) double etaTimestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(void)setRemainingTime:(double)arg1 ;
-(double)remainingTime;
-(void)setHasRemainingTime:(BOOL)arg1 ;
-(BOOL)hasRemainingTime;
-(void)setRemainingDistance:(double)arg1 ;
-(void)setEtaTimestamp:(double)arg1 ;
-(double)remainingDistance;
-(void)setHasRemainingDistance:(BOOL)arg1 ;
-(BOOL)hasRemainingDistance;
-(double)etaTimestamp;
-(void)setHasEtaTimestamp:(BOOL)arg1 ;
-(BOOL)hasEtaTimestamp;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOWaypointRouteFeatures : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _avoidsHighways;
	BOOL _avoidsTolls;
	BOOL _avoidsTraffic;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasAvoidsTolls; 
@property (assign,nonatomic) BOOL avoidsTolls; 
@property (assign,nonatomic) BOOL hasAvoidsHighways; 
@property (assign,nonatomic) BOOL avoidsHighways; 
@property (assign,nonatomic) BOOL hasAvoidsTraffic; 
@property (assign,nonatomic) BOOL avoidsTraffic; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)avoidsTolls;
-(BOOL)avoidsHighways;
-(BOOL)avoidsTraffic;
-(void)setAvoidsTolls:(BOOL)arg1 ;
-(void)setAvoidsHighways:(BOOL)arg1 ;
-(void)setAvoidsTraffic:(BOOL)arg1 ;
-(void)setHasAvoidsTolls:(BOOL)arg1 ;
-(BOOL)hasAvoidsTolls;
-(void)setHasAvoidsHighways:(BOOL)arg1 ;
-(BOOL)hasAvoidsHighways;
-(void)setHasAvoidsTraffic:(BOOL)arg1 ;
-(BOOL)hasAvoidsTraffic;
@end


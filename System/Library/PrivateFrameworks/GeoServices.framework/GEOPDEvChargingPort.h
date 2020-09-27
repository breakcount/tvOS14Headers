/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDEvChargingPort : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _chargingConnectorType;
	int _chargingLevel;
	unsigned _power;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasPower; 
@property (assign,nonatomic) unsigned power; 
@property (assign,nonatomic) BOOL hasChargingConnectorType; 
@property (assign,nonatomic) int chargingConnectorType; 
@property (assign,nonatomic) BOOL hasChargingLevel; 
@property (assign,nonatomic) int chargingLevel; 
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
-(unsigned)power;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPower:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setChargingConnectorType:(int)arg1 ;
-(void)setChargingLevel:(int)arg1 ;
-(void)setHasPower:(BOOL)arg1 ;
-(BOOL)hasPower;
-(int)chargingConnectorType;
-(void)setHasChargingConnectorType:(BOOL)arg1 ;
-(BOOL)hasChargingConnectorType;
-(id)chargingConnectorTypeAsString:(int)arg1 ;
-(int)StringAsChargingConnectorType:(id)arg1 ;
-(int)chargingLevel;
-(void)setHasChargingLevel:(BOOL)arg1 ;
-(BOOL)hasChargingLevel;
-(id)chargingLevelAsString:(int)arg1 ;
-(int)StringAsChargingLevel:(id)arg1 ;
@end


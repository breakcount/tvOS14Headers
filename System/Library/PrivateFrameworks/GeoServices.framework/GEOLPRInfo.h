/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSData;

@interface GEOLPRInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _licensePlate;
	NSString* _powerTypeKey;
	unsigned long long _timestamp;
	NSString* _vehicleTypeKey;
	NSData* _versionId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_timestamp : 1;
		unsigned read_unknownFields : 1;
		unsigned read_licensePlate : 1;
		unsigned read_powerTypeKey : 1;
		unsigned read_vehicleTypeKey : 1;
		unsigned read_versionId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLicensePlate; 
@property (nonatomic,retain) NSString * licensePlate; 
@property (nonatomic,readonly) BOOL hasVehicleTypeKey; 
@property (nonatomic,retain) NSString * vehicleTypeKey; 
@property (nonatomic,readonly) BOOL hasPowerTypeKey; 
@property (nonatomic,retain) NSString * powerTypeKey; 
@property (nonatomic,readonly) BOOL hasVersionId; 
@property (nonatomic,retain) NSData * versionId; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)licensePlate;
-(NSString *)vehicleTypeKey;
-(NSString *)powerTypeKey;
-(NSData *)versionId;
-(void)setLicensePlate:(NSString *)arg1 ;
-(void)setVehicleTypeKey:(NSString *)arg1 ;
-(void)setPowerTypeKey:(NSString *)arg1 ;
-(void)setVersionId:(NSData *)arg1 ;
-(BOOL)hasLicensePlate;
-(BOOL)hasVehicleTypeKey;
-(BOOL)hasPowerTypeKey;
-(BOOL)hasVersionId;
@end


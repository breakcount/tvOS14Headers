/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPAccessPointCorrections, GEORPFeedbackAddressFields, GEORPCorrectedCoordinate, GEORPMapLocation;

@interface GEORPAddressCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPAccessPointCorrections* _accessPoint;
	GEORPFeedbackAddressFields* _addressFields;
	GEORPCorrectedCoordinate* _coordinate;
	GEORPMapLocation* _mapLocation;
	GEORPFeedbackAddressFields* _originalAddressFields;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_accessPoint : 1;
		unsigned read_addressFields : 1;
		unsigned read_coordinate : 1;
		unsigned read_mapLocation : 1;
		unsigned read_originalAddressFields : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAddressFields; 
@property (nonatomic,retain) GEORPFeedbackAddressFields * addressFields; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * coordinate; 
@property (nonatomic,readonly) BOOL hasMapLocation; 
@property (nonatomic,retain) GEORPMapLocation * mapLocation; 
@property (nonatomic,readonly) BOOL hasAccessPoint; 
@property (nonatomic,retain) GEORPAccessPointCorrections * accessPoint; 
@property (nonatomic,readonly) BOOL hasOriginalAddressFields; 
@property (nonatomic,retain) GEORPFeedbackAddressFields * originalAddressFields; 
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
-(GEORPCorrectedCoordinate *)coordinate;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEORPFeedbackAddressFields *)addressFields;
-(GEORPMapLocation *)mapLocation;
-(GEORPAccessPointCorrections *)accessPoint;
-(GEORPFeedbackAddressFields *)originalAddressFields;
-(void)setAddressFields:(GEORPFeedbackAddressFields *)arg1 ;
-(void)setCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(void)setMapLocation:(GEORPMapLocation *)arg1 ;
-(void)setAccessPoint:(GEORPAccessPointCorrections *)arg1 ;
-(void)setOriginalAddressFields:(GEORPFeedbackAddressFields *)arg1 ;
-(BOOL)hasAddressFields;
-(BOOL)hasCoordinate;
-(BOOL)hasMapLocation;
-(BOOL)hasAccessPoint;
-(BOOL)hasOriginalAddressFields;
@end


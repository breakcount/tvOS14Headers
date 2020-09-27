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

@class PBDataReader, PBUnknownFields, GEORoadAccessPoint, GEORPCorrectedString;

@interface GEORPEditedAccessPoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORoadAccessPoint* _corrected;
	GEORPCorrectedString* _name;
	GEORoadAccessPoint* _original;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_corrected : 1;
		unsigned read_name : 1;
		unsigned read_original : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOriginal; 
@property (nonatomic,retain) GEORoadAccessPoint * original; 
@property (nonatomic,readonly) BOOL hasCorrected; 
@property (nonatomic,retain) GEORoadAccessPoint * corrected; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEORPCorrectedString * name; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(GEORPCorrectedString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(GEORPCorrectedString *)arg1 ;
-(id)dictionaryRepresentation;
-(GEORoadAccessPoint *)original;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEORoadAccessPoint *)corrected;
-(void)setOriginal:(GEORoadAccessPoint *)arg1 ;
-(void)setCorrected:(GEORoadAccessPoint *)arg1 ;
-(BOOL)hasOriginal;
-(BOOL)hasCorrected;
@end


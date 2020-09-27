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

@class PBDataReader, PBUnknownFields, GEORPPoiImageFeedbackContext, GEORPPoiImageFeedbackCorrections;

@interface GEORPPoiImageFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPPoiImageFeedbackContext* _poiImageContext;
	GEORPPoiImageFeedbackCorrections* _poiImageCorrections;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_poiImageContext : 1;
		unsigned read_poiImageCorrections : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPoiImageContext; 
@property (nonatomic,retain) GEORPPoiImageFeedbackContext * poiImageContext; 
@property (nonatomic,readonly) BOOL hasPoiImageCorrections; 
@property (nonatomic,retain) GEORPPoiImageFeedbackCorrections * poiImageCorrections; 
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
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEORPPoiImageFeedbackContext *)poiImageContext;
-(GEORPPoiImageFeedbackCorrections *)poiImageCorrections;
-(void)setPoiImageContext:(GEORPPoiImageFeedbackContext *)arg1 ;
-(void)setPoiImageCorrections:(GEORPPoiImageFeedbackCorrections *)arg1 ;
-(BOOL)hasPoiImageContext;
-(BOOL)hasPoiImageCorrections;
@end


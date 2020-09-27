/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEORPScorecard;

@interface GEORPPoiEnrichment : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _images;
	GEORPScorecard* _scorecard;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasScorecard; 
@property (nonatomic,retain) GEORPScorecard * scorecard; 
@property (nonatomic,retain) NSMutableArray * images; 
+(BOOL)isValid:(id)arg1 ;
+(Class)imageType;
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
-(NSMutableArray *)images;
-(void)addImage:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(unsigned long long)imagesCount;
-(void)clearImages;
-(id)imageAtIndex:(unsigned long long)arg1 ;
-(void)setImages:(NSMutableArray *)arg1 ;
-(GEORPScorecard *)scorecard;
-(void)setScorecard:(GEORPScorecard *)arg1 ;
-(BOOL)hasScorecard;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOLPRRegionInfo, GEOLPRBoundingBoxE7;

@interface GEOLPRRegion : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _displayNames;
	GEOLPRRegionInfo* _info;
	GEOLPRBoundingBoxE7* _regionBoundingBox;
	NSMutableArray* _subRegions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_displayNames : 1;
		unsigned read_info : 1;
		unsigned read_regionBoundingBox : 1;
		unsigned read_subRegions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * displayNames; 
@property (nonatomic,retain) NSMutableArray * subRegions; 
@property (nonatomic,readonly) BOOL hasInfo; 
@property (nonatomic,retain) GEOLPRRegionInfo * info; 
@property (nonatomic,readonly) BOOL hasRegionBoundingBox; 
@property (nonatomic,retain) GEOLPRBoundingBoxE7 * regionBoundingBox; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayNameType;
+(Class)subRegionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLPRRegionInfo *)info;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEOLPRBoundingBoxE7 *)regionBoundingBox;
-(void)setInfo:(GEOLPRRegionInfo *)arg1 ;
-(BOOL)hasInfo;
-(void)addDisplayName:(id)arg1 ;
-(void)addSubRegions:(id)arg1 ;
-(void)setRegionBoundingBox:(GEOLPRBoundingBoxE7 *)arg1 ;
-(unsigned long long)displayNamesCount;
-(void)clearDisplayNames;
-(id)displayNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)subRegionsCount;
-(void)clearSubRegions;
-(id)subRegionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)displayNames;
-(void)setDisplayNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)subRegions;
-(void)setSubRegions:(NSMutableArray *)arg1 ;
-(BOOL)hasRegionBoundingBox;
@end


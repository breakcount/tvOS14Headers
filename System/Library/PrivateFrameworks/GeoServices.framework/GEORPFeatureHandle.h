/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPFeatureHandle : PBCodable <NSCopying> {

	GEORPFeatureHandleStyleAttribute* _styleAttributes;
	unsigned long long _styleAttributesCount;
	unsigned long long _styleAttributesSpace;
	unsigned _featureIndex;
	unsigned _featureTileX;
	unsigned _featureTileY;
	unsigned _featureTileZ;
	unsigned _identifier;
	int _style;
	int _type;
	struct {
		unsigned has_featureIndex : 1;
		unsigned has_featureTileX : 1;
		unsigned has_featureTileY : 1;
		unsigned has_featureTileZ : 1;
		unsigned has_identifier : 1;
		unsigned has_style : 1;
		unsigned has_type : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFeatureIndex; 
@property (assign,nonatomic) unsigned featureIndex; 
@property (assign,nonatomic) BOOL hasFeatureTileX; 
@property (assign,nonatomic) unsigned featureTileX; 
@property (assign,nonatomic) BOOL hasFeatureTileY; 
@property (assign,nonatomic) unsigned featureTileY; 
@property (assign,nonatomic) BOOL hasFeatureTileZ; 
@property (assign,nonatomic) unsigned featureTileZ; 
@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) unsigned long long styleAttributesCount; 
@property (nonatomic,readonly) GEORPFeatureHandleStyleAttribute* styleAttributes; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned)featureIndex;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasStyle;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(GEORPFeatureHandleStyleAttribute*)styleAttributes;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)clearStyleAttributes;
-(void)setFeatureIndex:(unsigned)arg1 ;
-(void)setFeatureTileX:(unsigned)arg1 ;
-(void)setFeatureTileY:(unsigned)arg1 ;
-(void)setFeatureTileZ:(unsigned)arg1 ;
-(void)addStyleAttribute:(GEORPFeatureHandleStyleAttribute)arg1 ;
-(unsigned long long)styleAttributesCount;
-(GEORPFeatureHandleStyleAttribute)styleAttributeAtIndex:(unsigned long long)arg1 ;
-(void)setHasFeatureIndex:(BOOL)arg1 ;
-(BOOL)hasFeatureIndex;
-(unsigned)featureTileX;
-(void)setHasFeatureTileX:(BOOL)arg1 ;
-(BOOL)hasFeatureTileX;
-(unsigned)featureTileY;
-(void)setHasFeatureTileY:(BOOL)arg1 ;
-(BOOL)hasFeatureTileY;
-(unsigned)featureTileZ;
-(void)setHasFeatureTileZ:(BOOL)arg1 ;
-(BOOL)hasFeatureTileZ;
-(void)setStyleAttributes:(GEORPFeatureHandleStyleAttribute*)arg1 count:(unsigned long long)arg2 ;
@end


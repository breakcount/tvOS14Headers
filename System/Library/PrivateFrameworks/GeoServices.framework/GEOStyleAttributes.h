/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOStyleAttributes : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributes;
	unsigned long long _customIconId;
	SCD_Struct_GE118 _flags;

}

@property (nonatomic,retain) NSMutableArray * attributes; 
@property (assign,nonatomic) BOOL hasCustomIconId; 
@property (assign,nonatomic) unsigned long long customIconId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributeType;
+(BOOL)isValid:(id)arg1 ;
+(id)attributesForTransitLine:(id)arg1 ;
+(id)attributesForTransitSystem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)attributes;
-(id)dictionaryRepresentation;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addAttribute:(id)arg1 ;
-(unsigned long long)attributesCount;
-(void)clearAttributes;
-(id)attributeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)customIconId;
-(id)initWithGEOFeatureStyleAttributes:(id)arg1 ;
-(void)setCustomIconId:(unsigned long long)arg1 ;
-(void)setHasCustomIconId:(BOOL)arg1 ;
-(BOOL)hasCustomIconId;
@end


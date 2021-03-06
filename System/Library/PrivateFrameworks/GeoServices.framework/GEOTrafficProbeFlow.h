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

@interface GEOTrafficProbeFlow : PBCodable <NSCopying> {

	unsigned _aggregationCount;
	unsigned _aggregationWindowSeconds;
	unsigned _partialTraversalAggregationCount;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasAggregationCount; 
@property (assign,nonatomic) unsigned aggregationCount; 
@property (assign,nonatomic) BOOL hasAggregationWindowSeconds; 
@property (assign,nonatomic) unsigned aggregationWindowSeconds; 
@property (assign,nonatomic) BOOL hasPartialTraversalAggregationCount; 
@property (assign,nonatomic) unsigned partialTraversalAggregationCount; 
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
-(void)setAggregationCount:(unsigned)arg1 ;
-(void)setAggregationWindowSeconds:(unsigned)arg1 ;
-(void)setPartialTraversalAggregationCount:(unsigned)arg1 ;
-(unsigned)aggregationCount;
-(void)setHasAggregationCount:(BOOL)arg1 ;
-(BOOL)hasAggregationCount;
-(unsigned)aggregationWindowSeconds;
-(void)setHasAggregationWindowSeconds:(BOOL)arg1 ;
-(BOOL)hasAggregationWindowSeconds;
-(unsigned)partialTraversalAggregationCount;
-(void)setHasPartialTraversalAggregationCount:(BOOL)arg1 ;
-(BOOL)hasPartialTraversalAggregationCount;
@end


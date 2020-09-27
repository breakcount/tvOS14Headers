/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDRoadAccessInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _roadAccessPoints;

}

@property (nonatomic,retain) NSMutableArray * roadAccessPoints; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)roadAccessInfoForPlaceData:(id)arg1 ;
+(Class)roadAccessPointType;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)roadAccessPointsCount;
-(NSMutableArray *)roadAccessPoints;
-(id)roadAccessPointAtIndex:(unsigned long long)arg1 ;
-(void)addRoadAccessPoint:(id)arg1 ;
-(void)clearRoadAccessPoints;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
@end


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

@interface GEOPDPlacecardLayoutConfiguration : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _entries;

}

@property (nonatomic,retain) NSMutableArray * entries; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)entriesType;
+(id)placecardLayoutConfigurationPlaceData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)entries;
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
-(void)addEntries:(id)arg1 ;
-(unsigned long long)entriesCount;
-(void)clearEntries;
-(id)entriesAtIndex:(unsigned long long)arg1 ;
-(void)setEntries:(NSMutableArray *)arg1 ;
@end


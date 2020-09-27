/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDSearchSubstringDescriptor : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _spanDatas;
	int _beginIndex;
	int _endIndex;
	int _stringType;

}

@property (assign,nonatomic) int stringType; 
@property (assign,nonatomic) int beginIndex; 
@property (assign,nonatomic) int endIndex; 
@property (nonatomic,retain) NSMutableArray * spanDatas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)spanDataType;
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
-(NSMutableArray *)spanDatas;
-(void)setStringType:(int)arg1 ;
-(void)setBeginIndex:(int)arg1 ;
-(void)setEndIndex:(int)arg1 ;
-(void)addSpanData:(id)arg1 ;
-(unsigned long long)spanDatasCount;
-(void)clearSpanDatas;
-(id)spanDataAtIndex:(unsigned long long)arg1 ;
-(int)stringType;
-(id)stringTypeAsString:(int)arg1 ;
-(int)StringAsStringType:(id)arg1 ;
-(int)beginIndex;
-(int)endIndex;
-(void)setSpanDatas:(NSMutableArray *)arg1 ;
@end


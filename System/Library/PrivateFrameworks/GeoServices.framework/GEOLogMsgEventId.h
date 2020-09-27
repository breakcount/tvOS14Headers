/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventId : PBCodable <NSCopying> {

	unsigned long long _high;
	unsigned long long _low;
	SCD_Struct_GE114 _flags;

}

@property (assign,nonatomic) BOOL hasHigh; 
@property (assign,nonatomic) unsigned long long high; 
@property (assign,nonatomic) BOOL hasLow; 
@property (assign,nonatomic) unsigned long long low; 
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
-(void)setHigh:(unsigned long long)arg1 ;
-(void)setLow:(unsigned long long)arg1 ;
-(unsigned long long)high;
-(void)setHasHigh:(BOOL)arg1 ;
-(BOOL)hasHigh;
-(unsigned long long)low;
-(void)setHasLow:(BOOL)arg1 ;
-(BOOL)hasLow;
@end


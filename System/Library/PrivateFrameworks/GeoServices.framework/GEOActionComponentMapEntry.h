/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOActionComponentMapEntry : PBCodable <NSCopying> {

	SCD_Struct_GE85* _placeDataComponents;
	int _actionComponent;
	SCD_Struct_GE118 _flags;

}

@property (assign,nonatomic) BOOL hasActionComponent; 
@property (assign,nonatomic) int actionComponent; 
@property (nonatomic,readonly) unsigned long long placeDataComponentsCount; 
@property (nonatomic,readonly) int* placeDataComponents; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setActionComponent:(int)arg1 ;
-(void)addPlaceDataComponents:(int)arg1 ;
-(unsigned long long)placeDataComponentsCount;
-(void)clearPlaceDataComponents;
-(int)placeDataComponentsAtIndex:(unsigned long long)arg1 ;
-(int)actionComponent;
-(void)setHasActionComponent:(BOOL)arg1 ;
-(BOOL)hasActionComponent;
-(id)actionComponentAsString:(int)arg1 ;
-(int)StringAsActionComponent:(id)arg1 ;
-(int*)placeDataComponents;
-(void)setPlaceDataComponents:(int*)arg1 count:(unsigned long long)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOWalkingOptions : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _avoidedModes;
	double _preferredSpeed;
	struct {
		unsigned has_preferredSpeed : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPreferredSpeed; 
@property (assign,nonatomic) double preferredSpeed; 
@property (nonatomic,readonly) unsigned long long avoidedModesCount; 
@property (nonatomic,readonly) int* avoidedModes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addAvoidedMode:(int)arg1 ;
-(unsigned long long)avoidedModesCount;
-(void)clearAvoidedModes;
-(int)avoidedModeAtIndex:(unsigned long long)arg1 ;
-(int*)avoidedModes;
-(void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)avoidedModesAsString:(int)arg1 ;
-(int)StringAsAvoidedModes:(id)arg1 ;
-(void)setPreferredSpeed:(double)arg1 ;
-(double)preferredSpeed;
-(void)setHasPreferredSpeed:(BOOL)arg1 ;
-(BOOL)hasPreferredSpeed;
@end


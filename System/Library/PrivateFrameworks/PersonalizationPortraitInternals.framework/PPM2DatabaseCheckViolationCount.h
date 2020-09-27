/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2DatabaseCheckViolationCount : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	int _pragmaCheckType;
	unsigned _schemaVersion;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) BOOL hasSchemaVersion; 
@property (assign,nonatomic) unsigned schemaVersion;                   //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPragmaCheckType; 
@property (assign,nonatomic) int pragmaCheckType;                      //@synthesize pragmaCheckType=_pragmaCheckType - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)schemaVersion;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSchemaVersion:(unsigned)arg1 ;
-(void)setHasSchemaVersion:(BOOL)arg1 ;
-(BOOL)hasSchemaVersion;
-(BOOL)hasActiveTreatments;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(int)pragmaCheckType;
-(void)setPragmaCheckType:(int)arg1 ;
-(void)setHasPragmaCheckType:(BOOL)arg1 ;
-(BOOL)hasPragmaCheckType;
-(id)pragmaCheckTypeAsString:(int)arg1 ;
-(int)StringAsPragmaCheckType:(id)arg1 ;
@end


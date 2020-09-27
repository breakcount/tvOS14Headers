/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSidecarHistogramBin : PBCodable <NSCopying> {

	double _binEnd;
	double _binStart;
	double _value;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasBinStart; 
@property (assign,nonatomic) double binStart;               //@synthesize binStart=_binStart - In the implementation block
@property (assign,nonatomic) BOOL hasBinEnd; 
@property (assign,nonatomic) double binEnd;                 //@synthesize binEnd=_binEnd - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                  //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(BOOL)hasValue;
-(void)setBinStart:(double)arg1 ;
-(void)setHasBinStart:(BOOL)arg1 ;
-(BOOL)hasBinStart;
-(void)setBinEnd:(double)arg1 ;
-(void)setHasBinEnd:(BOOL)arg1 ;
-(BOOL)hasBinEnd;
-(double)binStart;
-(double)binEnd;
@end


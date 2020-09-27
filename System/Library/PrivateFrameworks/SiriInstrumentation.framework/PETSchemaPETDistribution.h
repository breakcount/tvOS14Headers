/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface PETSchemaPETDistribution : PBCodable {

	double _min;
	double _max;
	double _mean;
	double _variance;
	SCD_Struct_LT2 _has;

}

@property (assign,nonatomic) double min;                       //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) BOOL hasMin; 
@property (assign,nonatomic) double max;                       //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) BOOL hasMax; 
@property (assign,nonatomic) double mean;                      //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) BOOL hasMean; 
@property (assign,nonatomic) double variance;                  //@synthesize variance=_variance - In the implementation block
@property (assign,nonatomic) BOOL hasVariance; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMax:(double)arg1 ;
-(double)max;
-(double)min;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasMax:(BOOL)arg1 ;
-(BOOL)hasMax;
-(double)mean;
-(void)setMean:(double)arg1 ;
-(double)variance;
-(id)initWithJSON:(id)arg1 ;
-(void)setMin:(double)arg1 ;
-(void)setHasMin:(BOOL)arg1 ;
-(BOOL)hasMin;
-(void)setHasMean:(BOOL)arg1 ;
-(BOOL)hasMean;
-(void)setVariance:(double)arg1 ;
-(void)setHasVariance:(BOOL)arg1 ;
-(BOOL)hasVariance;
-(NSData *)jsonData;
@end


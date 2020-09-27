/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PFLTaskLocalPrivacyParams : PBCodable <NSCopying> {

	double _clippingNormMax;
	long long _normBinCount;
	SCD_Struct_PF1 _has;

}

@property (assign,nonatomic) BOOL hasNormBinCount; 
@property (assign,nonatomic) long long normBinCount;               //@synthesize normBinCount=_normBinCount - In the implementation block
@property (assign,nonatomic) BOOL hasClippingNormMax; 
@property (assign,nonatomic) double clippingNormMax;               //@synthesize clippingNormMax=_clippingNormMax - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)normBinCount;
-(void)setNormBinCount:(long long)arg1 ;
-(void)setHasNormBinCount:(BOOL)arg1 ;
-(BOOL)hasNormBinCount;
-(void)setClippingNormMax:(double)arg1 ;
-(void)setHasClippingNormMax:(BOOL)arg1 ;
-(BOOL)hasClippingNormMax;
-(double)clippingNormMax;
@end


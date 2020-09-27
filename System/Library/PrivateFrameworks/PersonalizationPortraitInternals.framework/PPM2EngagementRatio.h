/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2EngagementRatio : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	int _domain;
	unsigned _engagedCount;
	unsigned _evaluatedCount;
	unsigned _k;
	unsigned _rejectedCount;
	SCD_Struct_PP20 _has;

}

@property (assign,nonatomic) BOOL hasK; 
@property (assign,k,nonatomic) unsigned k;                             //@synthesize k=_k - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluatedCount; 
@property (assign,nonatomic) unsigned evaluatedCount;                  //@synthesize evaluatedCount=_evaluatedCount - In the implementation block
@property (assign,nonatomic) BOOL hasEngagedCount; 
@property (assign,nonatomic) unsigned engagedCount;                    //@synthesize engagedCount=_engagedCount - In the implementation block
@property (assign,nonatomic) BOOL hasRejectedCount; 
@property (assign,nonatomic) unsigned rejectedCount;                   //@synthesize rejectedCount=_rejectedCount - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) int domain;                               //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)domain;
-(void)setDomain:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDomain;
-(void)setK:(unsigned)arg1 ;
-(unsigned)k;
-(void)setHasDomain:(BOOL)arg1 ;
-(BOOL)hasActiveTreatments;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(id)domainAsString:(int)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(void)setHasK:(BOOL)arg1 ;
-(BOOL)hasK;
-(void)setEvaluatedCount:(unsigned)arg1 ;
-(void)setHasEvaluatedCount:(BOOL)arg1 ;
-(BOOL)hasEvaluatedCount;
-(unsigned)evaluatedCount;
-(void)setEngagedCount:(unsigned)arg1 ;
-(void)setHasEngagedCount:(BOOL)arg1 ;
-(BOOL)hasEngagedCount;
-(void)setRejectedCount:(unsigned)arg1 ;
-(void)setHasRejectedCount:(BOOL)arg1 ;
-(BOOL)hasRejectedCount;
-(unsigned)engagedCount;
-(unsigned)rejectedCount;
@end


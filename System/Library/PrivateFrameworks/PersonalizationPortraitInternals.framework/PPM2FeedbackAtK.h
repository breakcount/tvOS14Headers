/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:30 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2FeedbackAtK : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	unsigned _bucket;
	int _domain;
	unsigned _evaluatedCount;
	int _feedbackType;
	unsigned _k;
	SCD_Struct_PP20 _has;

}

@property (assign,nonatomic) BOOL hasK; 
@property (assign,k,nonatomic) unsigned k;                             //@synthesize k=_k - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluatedCount; 
@property (assign,nonatomic) unsigned evaluatedCount;                  //@synthesize evaluatedCount=_evaluatedCount - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) int domain;                               //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType;                         //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
@property (assign,nonatomic) BOOL hasBucket; 
@property (assign,nonatomic) unsigned bucket;                          //@synthesize bucket=_bucket - In the implementation block
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
-(void)setFeedbackType:(int)arg1 ;
-(int)feedbackType;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(BOOL)hasFeedbackType;
-(id)feedbackTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackType:(id)arg1 ;
-(void)setBucket:(unsigned)arg1 ;
-(void)setHasBucket:(BOOL)arg1 ;
-(BOOL)hasBucket;
-(unsigned)bucket;
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
@end


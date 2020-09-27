/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:34 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPPBFeedbackItem : PBCodable <NSCopying> {

	int _feedbackType;
	float _mappingWeight;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType;                   //@synthesize feedbackType=_feedbackType - In the implementation block
@property (assign,nonatomic) BOOL hasMappingWeight; 
@property (assign,nonatomic) float mappingWeight;                //@synthesize mappingWeight=_mappingWeight - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFeedbackType:(int)arg1 ;
-(int)feedbackType;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(BOOL)hasFeedbackType;
-(void)setMappingWeight:(float)arg1 ;
-(void)setHasMappingWeight:(BOOL)arg1 ;
-(BOOL)hasMappingWeight;
-(float)mappingWeight;
@end

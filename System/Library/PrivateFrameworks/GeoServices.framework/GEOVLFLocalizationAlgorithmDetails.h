/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLFLocalizationAlgorithmDetails : PBCodable <NSCopying> {

	unsigned _numberOfInliers;
	unsigned _numberOfKeypoints;
	unsigned _numberOfMatches;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasNumberOfKeypoints; 
@property (assign,nonatomic) unsigned numberOfKeypoints; 
@property (assign,nonatomic) BOOL hasNumberOfMatches; 
@property (assign,nonatomic) unsigned numberOfMatches; 
@property (assign,nonatomic) BOOL hasNumberOfInliers; 
@property (assign,nonatomic) unsigned numberOfInliers; 
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
-(void)setNumberOfKeypoints:(unsigned)arg1 ;
-(void)setNumberOfMatches:(unsigned)arg1 ;
-(void)setNumberOfInliers:(unsigned)arg1 ;
-(unsigned)numberOfKeypoints;
-(void)setHasNumberOfKeypoints:(BOOL)arg1 ;
-(BOOL)hasNumberOfKeypoints;
-(unsigned)numberOfMatches;
-(void)setHasNumberOfMatches:(BOOL)arg1 ;
-(BOOL)hasNumberOfMatches;
-(unsigned)numberOfInliers;
-(void)setHasNumberOfInliers:(BOOL)arg1 ;
-(BOOL)hasNumberOfInliers;
@end


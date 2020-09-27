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

@class NSString;

@interface GEOVLFUsageTileID : PBCodable <NSCopying> {

	NSString* _buildId;
	double _uncertainty;
	double _xCoordinate;
	double _yCoordinate;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasBuildId; 
@property (nonatomic,retain) NSString * buildId; 
@property (assign,nonatomic) BOOL hasXCoordinate; 
@property (assign,nonatomic) double xCoordinate; 
@property (assign,nonatomic) BOOL hasYCoordinate; 
@property (assign,nonatomic) double yCoordinate; 
@property (assign,nonatomic) BOOL hasUncertainty; 
@property (assign,nonatomic) double uncertainty; 
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
-(void)setUncertainty:(double)arg1 ;
-(void)setHasUncertainty:(BOOL)arg1 ;
-(BOOL)hasUncertainty;
-(double)uncertainty;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)buildId;
-(void)setBuildId:(NSString *)arg1 ;
-(void)setXCoordinate:(double)arg1 ;
-(void)setYCoordinate:(double)arg1 ;
-(BOOL)hasBuildId;
-(double)xCoordinate;
-(void)setHasXCoordinate:(BOOL)arg1 ;
-(BOOL)hasXCoordinate;
-(double)yCoordinate;
-(void)setHasYCoordinate:(BOOL)arg1 ;
-(BOOL)hasYCoordinate;
@end


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

@interface SISchemaLocation : PBCodable {

	float _latitude;
	float _longitude;
	float _horizontalAccuracyInMeters;
	SCD_Struct_LT0 _has;

}

@property (assign,nonatomic) float latitude;                                  //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) float longitude;                                 //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) float horizontalAccuracyInMeters;                //@synthesize horizontalAccuracyInMeters=_horizontalAccuracyInMeters - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracyInMeters; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(float)latitude;
-(float)longitude;
-(void)setLongitude:(float)arg1 ;
-(void)setLatitude:(float)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(NSData *)jsonData;
-(void)setHorizontalAccuracyInMeters:(float)arg1 ;
-(float)horizontalAccuracyInMeters;
-(BOOL)hasHorizontalAccuracyInMeters;
-(void)setHasHorizontalAccuracyInMeters:(BOOL)arg1 ;
@end

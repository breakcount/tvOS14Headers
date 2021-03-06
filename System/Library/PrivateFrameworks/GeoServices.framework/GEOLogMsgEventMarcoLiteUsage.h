/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventMarcoLiteUsage : PBCodable <NSCopying> {

	NSMutableArray* _usageStates;
	unsigned _totalNavTime;
	int _vioTrigger;
	SCD_Struct_GE114 _flags;

}

@property (assign,nonatomic) BOOL hasTotalNavTime; 
@property (assign,nonatomic) unsigned totalNavTime; 
@property (nonatomic,retain) NSMutableArray * usageStates; 
@property (assign,nonatomic) BOOL hasVioTrigger; 
@property (assign,nonatomic) int vioTrigger; 
+(BOOL)isValid:(id)arg1 ;
+(Class)usageStatesType;
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
-(void)setTotalNavTime:(unsigned)arg1 ;
-(NSMutableArray *)usageStates;
-(void)setUsageStates:(NSMutableArray *)arg1 ;
-(void)setVioTrigger:(int)arg1 ;
-(void)addUsageStates:(id)arg1 ;
-(unsigned long long)usageStatesCount;
-(void)clearUsageStates;
-(id)usageStatesAtIndex:(unsigned long long)arg1 ;
-(unsigned)totalNavTime;
-(void)setHasTotalNavTime:(BOOL)arg1 ;
-(BOOL)hasTotalNavTime;
-(int)vioTrigger;
-(void)setHasVioTrigger:(BOOL)arg1 ;
-(BOOL)hasVioTrigger;
-(id)vioTriggerAsString:(int)arg1 ;
-(int)StringAsVioTrigger:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsAutoJoinNwExclusion : PBCodable <NSCopying> {

	unsigned _reasonCode;
	int _rssi;
	unsigned _usageRank;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasReasonCode; 
@property (assign,nonatomic) unsigned reasonCode;              //@synthesize reasonCode=_reasonCode - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                         //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasUsageRank; 
@property (assign,nonatomic) unsigned usageRank;               //@synthesize usageRank=_usageRank - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)rssi;
-(void)setRssi:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setReasonCode:(unsigned)arg1 ;
-(void)setHasReasonCode:(BOOL)arg1 ;
-(BOOL)hasReasonCode;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setUsageRank:(unsigned)arg1 ;
-(void)setHasUsageRank:(BOOL)arg1 ;
-(BOOL)hasUsageRank;
-(unsigned)reasonCode;
-(unsigned)usageRank;
@end


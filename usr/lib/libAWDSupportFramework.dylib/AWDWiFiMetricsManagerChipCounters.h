/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, AWDWiFiMetricsManagerFrameCounterStats, AWDWPA2Counters, AWDChipCountersRx, AWDMacCountersRx, AWDMacCountersRxErrors, AWDRxPhyErrors, AWDChipErrorCountersTx, AWDChipCountersTx;

@interface AWDWiFiMetricsManagerChipCounters : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _frameCounterPerInterfaces;
	AWDWiFiMetricsManagerFrameCounterStats* _frameCounters;
	AWDWPA2Counters* _mcastWPA2Counters;
	AWDChipCountersRx* _rxGeneralStats;
	AWDMacCountersRx* _rxMACCounterStats;
	AWDMacCountersRxErrors* _rxMACErrorStats;
	AWDRxPhyErrors* _rxPhyErrors;
	AWDChipErrorCountersTx* _txErrorStats;
	AWDChipCountersTx* _txGeneralStats;
	AWDWPA2Counters* _ucastWPA2Counters;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasFrameCounters; 
@property (nonatomic,retain) AWDWiFiMetricsManagerFrameCounterStats * frameCounters;              //@synthesize frameCounters=_frameCounters - In the implementation block
@property (nonatomic,readonly) BOOL hasTxGeneralStats; 
@property (nonatomic,retain) AWDChipCountersTx * txGeneralStats;                                  //@synthesize txGeneralStats=_txGeneralStats - In the implementation block
@property (nonatomic,readonly) BOOL hasTxErrorStats; 
@property (nonatomic,retain) AWDChipErrorCountersTx * txErrorStats;                               //@synthesize txErrorStats=_txErrorStats - In the implementation block
@property (nonatomic,readonly) BOOL hasRxGeneralStats; 
@property (nonatomic,retain) AWDChipCountersRx * rxGeneralStats;                                  //@synthesize rxGeneralStats=_rxGeneralStats - In the implementation block
@property (nonatomic,readonly) BOOL hasRxMACErrorStats; 
@property (nonatomic,retain) AWDMacCountersRxErrors * rxMACErrorStats;                            //@synthesize rxMACErrorStats=_rxMACErrorStats - In the implementation block
@property (nonatomic,readonly) BOOL hasRxMACCounterStats; 
@property (nonatomic,retain) AWDMacCountersRx * rxMACCounterStats;                                //@synthesize rxMACCounterStats=_rxMACCounterStats - In the implementation block
@property (nonatomic,readonly) BOOL hasRxPhyErrors; 
@property (nonatomic,retain) AWDRxPhyErrors * rxPhyErrors;                                        //@synthesize rxPhyErrors=_rxPhyErrors - In the implementation block
@property (nonatomic,readonly) BOOL hasUcastWPA2Counters; 
@property (nonatomic,retain) AWDWPA2Counters * ucastWPA2Counters;                                 //@synthesize ucastWPA2Counters=_ucastWPA2Counters - In the implementation block
@property (nonatomic,readonly) BOOL hasMcastWPA2Counters; 
@property (nonatomic,retain) AWDWPA2Counters * mcastWPA2Counters;                                 //@synthesize mcastWPA2Counters=_mcastWPA2Counters - In the implementation block
@property (nonatomic,retain) NSMutableArray * frameCounterPerInterfaces;                          //@synthesize frameCounterPerInterfaces=_frameCounterPerInterfaces - In the implementation block
+(Class)frameCounterPerInterfaceType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setFrameCounters:(AWDWiFiMetricsManagerFrameCounterStats *)arg1 ;
-(void)setTxGeneralStats:(AWDChipCountersTx *)arg1 ;
-(void)setTxErrorStats:(AWDChipErrorCountersTx *)arg1 ;
-(void)setRxGeneralStats:(AWDChipCountersRx *)arg1 ;
-(void)setRxMACErrorStats:(AWDMacCountersRxErrors *)arg1 ;
-(void)setRxMACCounterStats:(AWDMacCountersRx *)arg1 ;
-(void)setRxPhyErrors:(AWDRxPhyErrors *)arg1 ;
-(void)setUcastWPA2Counters:(AWDWPA2Counters *)arg1 ;
-(void)setMcastWPA2Counters:(AWDWPA2Counters *)arg1 ;
-(void)setFrameCounterPerInterfaces:(NSMutableArray *)arg1 ;
-(void)addFrameCounterPerInterface:(id)arg1 ;
-(unsigned long long)frameCounterPerInterfacesCount;
-(void)clearFrameCounterPerInterfaces;
-(id)frameCounterPerInterfaceAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFrameCounters;
-(BOOL)hasTxGeneralStats;
-(BOOL)hasTxErrorStats;
-(BOOL)hasRxGeneralStats;
-(BOOL)hasRxMACErrorStats;
-(BOOL)hasRxMACCounterStats;
-(BOOL)hasRxPhyErrors;
-(BOOL)hasUcastWPA2Counters;
-(BOOL)hasMcastWPA2Counters;
-(AWDWiFiMetricsManagerFrameCounterStats *)frameCounters;
-(AWDChipCountersTx *)txGeneralStats;
-(AWDChipErrorCountersTx *)txErrorStats;
-(AWDChipCountersRx *)rxGeneralStats;
-(AWDMacCountersRxErrors *)rxMACErrorStats;
-(AWDMacCountersRx *)rxMACCounterStats;
-(AWDRxPhyErrors *)rxPhyErrors;
-(AWDWPA2Counters *)ucastWPA2Counters;
-(AWDWPA2Counters *)mcastWPA2Counters;
-(NSMutableArray *)frameCounterPerInterfaces;
@end


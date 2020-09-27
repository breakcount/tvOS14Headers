/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiWcpsStats : PBCodable <NSCopying> {

	unsigned long long _avgCca;
	unsigned long long _avgRssi;
	unsigned long long _avgRxRetry;
	unsigned long long _avgSnr;
	unsigned long long _avgTxAirLatency;
	unsigned long long _avgTxPacketLoss;
	unsigned long long _avgTxRetrans;
	unsigned long long _cntAwdlActive;
	unsigned long long _cntDisBtConnLatHi;
	unsigned long long _cntDisBtEv3;
	unsigned long long _cntRedBtConnLatLow;
	unsigned long long _cntRedBtDisconnLatHi;
	unsigned long long _cntVoBadPeriods;
	unsigned long long _cntVoGoodPeriods;
	unsigned long long _durationBucket;
	unsigned long long _endCca;
	unsigned long long _endLinkState;
	unsigned long long _endRssi;
	unsigned long long _endRxRetry;
	unsigned long long _endSnr;
	unsigned long long _endTxAirLatency;
	unsigned long long _endTxPacketLoss;
	unsigned long long _endTxRetrans;
	unsigned long long _maxCca;
	unsigned long long _maxRssi;
	unsigned long long _maxRxRetry;
	unsigned long long _maxTxAirLatency;
	unsigned long long _maxTxPacketLoss;
	unsigned long long _maxTxRetrans;
	unsigned long long _maxnSnr;
	unsigned long long _minCca;
	unsigned long long _minRssi;
	unsigned long long _minRxRetry;
	unsigned long long _minSnr;
	unsigned long long _minTxAirLatency;
	unsigned long long _minTxPacketLoss;
	unsigned long long _minTxRetrans;
	unsigned long long _percentageActive;
	unsigned long long _percentagePowerSave;
	unsigned long long _percentageWcpsDisabled;
	unsigned long long _percentageWcpsEnabled;
	unsigned long long _percentageWcpsReduced;
	unsigned long long _timestamp;
	SCD_Struct_AW28 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationBucket; 
@property (assign,nonatomic) unsigned long long durationBucket;                      //@synthesize durationBucket=_durationBucket - In the implementation block
@property (assign,nonatomic) BOOL hasPercentageActive; 
@property (assign,nonatomic) unsigned long long percentageActive;                    //@synthesize percentageActive=_percentageActive - In the implementation block
@property (assign,nonatomic) BOOL hasPercentagePowerSave; 
@property (assign,nonatomic) unsigned long long percentagePowerSave;                 //@synthesize percentagePowerSave=_percentagePowerSave - In the implementation block
@property (assign,nonatomic) BOOL hasPercentageWcpsEnabled; 
@property (assign,nonatomic) unsigned long long percentageWcpsEnabled;               //@synthesize percentageWcpsEnabled=_percentageWcpsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPercentageWcpsReduced; 
@property (assign,nonatomic) unsigned long long percentageWcpsReduced;               //@synthesize percentageWcpsReduced=_percentageWcpsReduced - In the implementation block
@property (assign,nonatomic) BOOL hasPercentageWcpsDisabled; 
@property (assign,nonatomic) unsigned long long percentageWcpsDisabled;              //@synthesize percentageWcpsDisabled=_percentageWcpsDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasCntVoGoodPeriods; 
@property (assign,nonatomic) unsigned long long cntVoGoodPeriods;                    //@synthesize cntVoGoodPeriods=_cntVoGoodPeriods - In the implementation block
@property (assign,nonatomic) BOOL hasCntVoBadPeriods; 
@property (assign,nonatomic) unsigned long long cntVoBadPeriods;                     //@synthesize cntVoBadPeriods=_cntVoBadPeriods - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRssi; 
@property (assign,nonatomic) unsigned long long avgRssi;                             //@synthesize avgRssi=_avgRssi - In the implementation block
@property (assign,nonatomic) BOOL hasAvgSnr; 
@property (assign,nonatomic) unsigned long long avgSnr;                              //@synthesize avgSnr=_avgSnr - In the implementation block
@property (assign,nonatomic) BOOL hasAvgCca; 
@property (assign,nonatomic) unsigned long long avgCca;                              //@synthesize avgCca=_avgCca - In the implementation block
@property (assign,nonatomic) BOOL hasAvgTxAirLatency; 
@property (assign,nonatomic) unsigned long long avgTxAirLatency;                     //@synthesize avgTxAirLatency=_avgTxAirLatency - In the implementation block
@property (assign,nonatomic) BOOL hasAvgTxPacketLoss; 
@property (assign,nonatomic) unsigned long long avgTxPacketLoss;                     //@synthesize avgTxPacketLoss=_avgTxPacketLoss - In the implementation block
@property (assign,nonatomic) BOOL hasAvgTxRetrans; 
@property (assign,nonatomic) unsigned long long avgTxRetrans;                        //@synthesize avgTxRetrans=_avgTxRetrans - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRxRetry; 
@property (assign,nonatomic) unsigned long long avgRxRetry;                          //@synthesize avgRxRetry=_avgRxRetry - In the implementation block
@property (assign,nonatomic) BOOL hasEndRssi; 
@property (assign,nonatomic) unsigned long long endRssi;                             //@synthesize endRssi=_endRssi - In the implementation block
@property (assign,nonatomic) BOOL hasEndSnr; 
@property (assign,nonatomic) unsigned long long endSnr;                              //@synthesize endSnr=_endSnr - In the implementation block
@property (assign,nonatomic) BOOL hasEndCca; 
@property (assign,nonatomic) unsigned long long endCca;                              //@synthesize endCca=_endCca - In the implementation block
@property (assign,nonatomic) BOOL hasEndTxAirLatency; 
@property (assign,nonatomic) unsigned long long endTxAirLatency;                     //@synthesize endTxAirLatency=_endTxAirLatency - In the implementation block
@property (assign,nonatomic) BOOL hasEndTxPacketLoss; 
@property (assign,nonatomic) unsigned long long endTxPacketLoss;                     //@synthesize endTxPacketLoss=_endTxPacketLoss - In the implementation block
@property (assign,nonatomic) BOOL hasEndTxRetrans; 
@property (assign,nonatomic) unsigned long long endTxRetrans;                        //@synthesize endTxRetrans=_endTxRetrans - In the implementation block
@property (assign,nonatomic) BOOL hasEndRxRetry; 
@property (assign,nonatomic) unsigned long long endRxRetry;                          //@synthesize endRxRetry=_endRxRetry - In the implementation block
@property (assign,nonatomic) BOOL hasMinRssi; 
@property (assign,nonatomic) unsigned long long minRssi;                             //@synthesize minRssi=_minRssi - In the implementation block
@property (assign,nonatomic) BOOL hasMinSnr; 
@property (assign,nonatomic) unsigned long long minSnr;                              //@synthesize minSnr=_minSnr - In the implementation block
@property (assign,nonatomic) BOOL hasMinCca; 
@property (assign,nonatomic) unsigned long long minCca;                              //@synthesize minCca=_minCca - In the implementation block
@property (assign,nonatomic) BOOL hasMinTxAirLatency; 
@property (assign,nonatomic) unsigned long long minTxAirLatency;                     //@synthesize minTxAirLatency=_minTxAirLatency - In the implementation block
@property (assign,nonatomic) BOOL hasMinTxPacketLoss; 
@property (assign,nonatomic) unsigned long long minTxPacketLoss;                     //@synthesize minTxPacketLoss=_minTxPacketLoss - In the implementation block
@property (assign,nonatomic) BOOL hasMinTxRetrans; 
@property (assign,nonatomic) unsigned long long minTxRetrans;                        //@synthesize minTxRetrans=_minTxRetrans - In the implementation block
@property (assign,nonatomic) BOOL hasMinRxRetry; 
@property (assign,nonatomic) unsigned long long minRxRetry;                          //@synthesize minRxRetry=_minRxRetry - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRssi; 
@property (assign,nonatomic) unsigned long long maxRssi;                             //@synthesize maxRssi=_maxRssi - In the implementation block
@property (assign,nonatomic) BOOL hasMaxnSnr; 
@property (assign,nonatomic) unsigned long long maxnSnr;                             //@synthesize maxnSnr=_maxnSnr - In the implementation block
@property (assign,nonatomic) BOOL hasMaxCca; 
@property (assign,nonatomic) unsigned long long maxCca;                              //@synthesize maxCca=_maxCca - In the implementation block
@property (assign,nonatomic) BOOL hasMaxTxAirLatency; 
@property (assign,nonatomic) unsigned long long maxTxAirLatency;                     //@synthesize maxTxAirLatency=_maxTxAirLatency - In the implementation block
@property (assign,nonatomic) BOOL hasMaxTxPacketLoss; 
@property (assign,nonatomic) unsigned long long maxTxPacketLoss;                     //@synthesize maxTxPacketLoss=_maxTxPacketLoss - In the implementation block
@property (assign,nonatomic) BOOL hasMaxTxRetrans; 
@property (assign,nonatomic) unsigned long long maxTxRetrans;                        //@synthesize maxTxRetrans=_maxTxRetrans - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRxRetry; 
@property (assign,nonatomic) unsigned long long maxRxRetry;                          //@synthesize maxRxRetry=_maxRxRetry - In the implementation block
@property (assign,nonatomic) BOOL hasCntRedBtConnLatLow; 
@property (assign,nonatomic) unsigned long long cntRedBtConnLatLow;                  //@synthesize cntRedBtConnLatLow=_cntRedBtConnLatLow - In the implementation block
@property (assign,nonatomic) BOOL hasCntRedBtDisconnLatHi; 
@property (assign,nonatomic) unsigned long long cntRedBtDisconnLatHi;                //@synthesize cntRedBtDisconnLatHi=_cntRedBtDisconnLatHi - In the implementation block
@property (assign,nonatomic) BOOL hasCntDisBtConnLatHi; 
@property (assign,nonatomic) unsigned long long cntDisBtConnLatHi;                   //@synthesize cntDisBtConnLatHi=_cntDisBtConnLatHi - In the implementation block
@property (assign,nonatomic) BOOL hasCntDisBtEv3; 
@property (assign,nonatomic) unsigned long long cntDisBtEv3;                         //@synthesize cntDisBtEv3=_cntDisBtEv3 - In the implementation block
@property (assign,nonatomic) BOOL hasCntAwdlActive; 
@property (assign,nonatomic) unsigned long long cntAwdlActive;                       //@synthesize cntAwdlActive=_cntAwdlActive - In the implementation block
@property (assign,nonatomic) BOOL hasEndLinkState; 
@property (assign,nonatomic) unsigned long long endLinkState;                        //@synthesize endLinkState=_endLinkState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setDurationBucket:(unsigned long long)arg1 ;
-(void)setHasDurationBucket:(BOOL)arg1 ;
-(BOOL)hasDurationBucket;
-(void)setPercentageActive:(unsigned long long)arg1 ;
-(void)setHasPercentageActive:(BOOL)arg1 ;
-(BOOL)hasPercentageActive;
-(void)setPercentagePowerSave:(unsigned long long)arg1 ;
-(void)setHasPercentagePowerSave:(BOOL)arg1 ;
-(BOOL)hasPercentagePowerSave;
-(void)setPercentageWcpsEnabled:(unsigned long long)arg1 ;
-(void)setHasPercentageWcpsEnabled:(BOOL)arg1 ;
-(BOOL)hasPercentageWcpsEnabled;
-(void)setPercentageWcpsReduced:(unsigned long long)arg1 ;
-(void)setHasPercentageWcpsReduced:(BOOL)arg1 ;
-(BOOL)hasPercentageWcpsReduced;
-(void)setPercentageWcpsDisabled:(unsigned long long)arg1 ;
-(void)setHasPercentageWcpsDisabled:(BOOL)arg1 ;
-(BOOL)hasPercentageWcpsDisabled;
-(void)setCntVoGoodPeriods:(unsigned long long)arg1 ;
-(void)setHasCntVoGoodPeriods:(BOOL)arg1 ;
-(BOOL)hasCntVoGoodPeriods;
-(void)setCntVoBadPeriods:(unsigned long long)arg1 ;
-(void)setHasCntVoBadPeriods:(BOOL)arg1 ;
-(BOOL)hasCntVoBadPeriods;
-(void)setAvgRssi:(unsigned long long)arg1 ;
-(void)setHasAvgRssi:(BOOL)arg1 ;
-(BOOL)hasAvgRssi;
-(void)setAvgSnr:(unsigned long long)arg1 ;
-(void)setHasAvgSnr:(BOOL)arg1 ;
-(BOOL)hasAvgSnr;
-(void)setAvgCca:(unsigned long long)arg1 ;
-(void)setHasAvgCca:(BOOL)arg1 ;
-(BOOL)hasAvgCca;
-(void)setAvgTxAirLatency:(unsigned long long)arg1 ;
-(void)setHasAvgTxAirLatency:(BOOL)arg1 ;
-(BOOL)hasAvgTxAirLatency;
-(void)setAvgTxPacketLoss:(unsigned long long)arg1 ;
-(void)setHasAvgTxPacketLoss:(BOOL)arg1 ;
-(BOOL)hasAvgTxPacketLoss;
-(void)setAvgTxRetrans:(unsigned long long)arg1 ;
-(void)setHasAvgTxRetrans:(BOOL)arg1 ;
-(BOOL)hasAvgTxRetrans;
-(void)setAvgRxRetry:(unsigned long long)arg1 ;
-(void)setHasAvgRxRetry:(BOOL)arg1 ;
-(BOOL)hasAvgRxRetry;
-(void)setEndRssi:(unsigned long long)arg1 ;
-(void)setHasEndRssi:(BOOL)arg1 ;
-(BOOL)hasEndRssi;
-(void)setEndSnr:(unsigned long long)arg1 ;
-(void)setHasEndSnr:(BOOL)arg1 ;
-(BOOL)hasEndSnr;
-(void)setEndCca:(unsigned long long)arg1 ;
-(void)setHasEndCca:(BOOL)arg1 ;
-(BOOL)hasEndCca;
-(void)setEndTxAirLatency:(unsigned long long)arg1 ;
-(void)setHasEndTxAirLatency:(BOOL)arg1 ;
-(BOOL)hasEndTxAirLatency;
-(void)setEndTxPacketLoss:(unsigned long long)arg1 ;
-(void)setHasEndTxPacketLoss:(BOOL)arg1 ;
-(BOOL)hasEndTxPacketLoss;
-(void)setEndTxRetrans:(unsigned long long)arg1 ;
-(void)setHasEndTxRetrans:(BOOL)arg1 ;
-(BOOL)hasEndTxRetrans;
-(void)setEndRxRetry:(unsigned long long)arg1 ;
-(void)setHasEndRxRetry:(BOOL)arg1 ;
-(BOOL)hasEndRxRetry;
-(void)setMinRssi:(unsigned long long)arg1 ;
-(void)setHasMinRssi:(BOOL)arg1 ;
-(BOOL)hasMinRssi;
-(void)setMinSnr:(unsigned long long)arg1 ;
-(void)setHasMinSnr:(BOOL)arg1 ;
-(BOOL)hasMinSnr;
-(void)setMinCca:(unsigned long long)arg1 ;
-(void)setHasMinCca:(BOOL)arg1 ;
-(BOOL)hasMinCca;
-(void)setMinTxAirLatency:(unsigned long long)arg1 ;
-(void)setHasMinTxAirLatency:(BOOL)arg1 ;
-(BOOL)hasMinTxAirLatency;
-(void)setMinTxPacketLoss:(unsigned long long)arg1 ;
-(void)setHasMinTxPacketLoss:(BOOL)arg1 ;
-(BOOL)hasMinTxPacketLoss;
-(void)setMinTxRetrans:(unsigned long long)arg1 ;
-(void)setHasMinTxRetrans:(BOOL)arg1 ;
-(BOOL)hasMinTxRetrans;
-(void)setMinRxRetry:(unsigned long long)arg1 ;
-(void)setHasMinRxRetry:(BOOL)arg1 ;
-(BOOL)hasMinRxRetry;
-(void)setMaxRssi:(unsigned long long)arg1 ;
-(void)setHasMaxRssi:(BOOL)arg1 ;
-(BOOL)hasMaxRssi;
-(void)setMaxnSnr:(unsigned long long)arg1 ;
-(void)setHasMaxnSnr:(BOOL)arg1 ;
-(BOOL)hasMaxnSnr;
-(void)setMaxCca:(unsigned long long)arg1 ;
-(void)setHasMaxCca:(BOOL)arg1 ;
-(BOOL)hasMaxCca;
-(void)setMaxTxAirLatency:(unsigned long long)arg1 ;
-(void)setHasMaxTxAirLatency:(BOOL)arg1 ;
-(BOOL)hasMaxTxAirLatency;
-(void)setMaxTxPacketLoss:(unsigned long long)arg1 ;
-(void)setHasMaxTxPacketLoss:(BOOL)arg1 ;
-(BOOL)hasMaxTxPacketLoss;
-(void)setMaxTxRetrans:(unsigned long long)arg1 ;
-(void)setHasMaxTxRetrans:(BOOL)arg1 ;
-(BOOL)hasMaxTxRetrans;
-(void)setMaxRxRetry:(unsigned long long)arg1 ;
-(void)setHasMaxRxRetry:(BOOL)arg1 ;
-(BOOL)hasMaxRxRetry;
-(void)setCntRedBtConnLatLow:(unsigned long long)arg1 ;
-(void)setHasCntRedBtConnLatLow:(BOOL)arg1 ;
-(BOOL)hasCntRedBtConnLatLow;
-(void)setCntRedBtDisconnLatHi:(unsigned long long)arg1 ;
-(void)setHasCntRedBtDisconnLatHi:(BOOL)arg1 ;
-(BOOL)hasCntRedBtDisconnLatHi;
-(void)setCntDisBtConnLatHi:(unsigned long long)arg1 ;
-(void)setHasCntDisBtConnLatHi:(BOOL)arg1 ;
-(BOOL)hasCntDisBtConnLatHi;
-(void)setCntDisBtEv3:(unsigned long long)arg1 ;
-(void)setHasCntDisBtEv3:(BOOL)arg1 ;
-(BOOL)hasCntDisBtEv3;
-(void)setCntAwdlActive:(unsigned long long)arg1 ;
-(void)setHasCntAwdlActive:(BOOL)arg1 ;
-(BOOL)hasCntAwdlActive;
-(void)setEndLinkState:(unsigned long long)arg1 ;
-(void)setHasEndLinkState:(BOOL)arg1 ;
-(BOOL)hasEndLinkState;
-(unsigned long long)durationBucket;
-(unsigned long long)percentageActive;
-(unsigned long long)percentagePowerSave;
-(unsigned long long)percentageWcpsEnabled;
-(unsigned long long)percentageWcpsReduced;
-(unsigned long long)percentageWcpsDisabled;
-(unsigned long long)cntVoGoodPeriods;
-(unsigned long long)cntVoBadPeriods;
-(unsigned long long)avgRssi;
-(unsigned long long)avgSnr;
-(unsigned long long)avgCca;
-(unsigned long long)avgTxAirLatency;
-(unsigned long long)avgTxPacketLoss;
-(unsigned long long)avgTxRetrans;
-(unsigned long long)avgRxRetry;
-(unsigned long long)endRssi;
-(unsigned long long)endSnr;
-(unsigned long long)endCca;
-(unsigned long long)endTxAirLatency;
-(unsigned long long)endTxPacketLoss;
-(unsigned long long)endTxRetrans;
-(unsigned long long)endRxRetry;
-(unsigned long long)minRssi;
-(unsigned long long)minSnr;
-(unsigned long long)minCca;
-(unsigned long long)minTxAirLatency;
-(unsigned long long)minTxPacketLoss;
-(unsigned long long)minTxRetrans;
-(unsigned long long)minRxRetry;
-(unsigned long long)maxRssi;
-(unsigned long long)maxnSnr;
-(unsigned long long)maxCca;
-(unsigned long long)maxTxAirLatency;
-(unsigned long long)maxTxPacketLoss;
-(unsigned long long)maxTxRetrans;
-(unsigned long long)maxRxRetry;
-(unsigned long long)cntRedBtConnLatLow;
-(unsigned long long)cntRedBtDisconnLatHi;
-(unsigned long long)cntDisBtConnLatHi;
-(unsigned long long)cntDisBtEv3;
-(unsigned long long)cntAwdlActive;
-(unsigned long long)endLinkState;
@end


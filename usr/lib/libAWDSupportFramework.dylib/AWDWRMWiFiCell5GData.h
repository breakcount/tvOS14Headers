/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWRMWiFiCell5GData : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _cellDataLQM;
	unsigned _cellDlBw;
	unsigned _cellEstimatedBw;
	unsigned _cellEstimatedLoad;
	unsigned _cellLteEstimatedThroughput;
	int _cellLteRSRP;
	int _cellLteRSRQ;
	int _cellLteSNR;
	unsigned _cellMaxDlCaNumConfigured;
	unsigned _cellMaxUlCaNumConfigured;
	unsigned _cellNrEstimatedThroughput;
	unsigned _cellNrFR2active;
	int _cellNrRSRP;
	int _cellNrRSRQ;
	int _cellNrSNR;
	unsigned _cellNsaEnabled;
	NSString* _cellRatType;
	unsigned _cellRrcState;
	unsigned _cellUlBw;
	unsigned _recommendedlink;
	unsigned _wifPoi;
	unsigned _wifiCca;
	unsigned _wifiEstThoughtput;
	unsigned _wifiQbssLoad;
	int _wifiRssi;
	unsigned _wifiRxRetry;
	unsigned _wifiSnr;
	unsigned _wifiStationCount;
	unsigned _wifiTxPER;
	unsigned _wifiWghtAVGRXPHYRATE;
	unsigned _wifiWghtAVGSNR;
	unsigned _wifiWghtAVGTXPHYRATE;
	int _wifiWgtAVGRSSI;
	unsigned _wifiWifiEstThoughtputConfidence;
	SCD_Struct_AW39 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRssi; 
@property (assign,nonatomic) int wifiRssi;                                          //@synthesize wifiRssi=_wifiRssi - In the implementation block
@property (assign,nonatomic) BOOL hasWifiSnr; 
@property (assign,nonatomic) unsigned wifiSnr;                                      //@synthesize wifiSnr=_wifiSnr - In the implementation block
@property (assign,nonatomic) BOOL hasWifiTxPER; 
@property (assign,nonatomic) unsigned wifiTxPER;                                    //@synthesize wifiTxPER=_wifiTxPER - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRxRetry; 
@property (assign,nonatomic) unsigned wifiRxRetry;                                  //@synthesize wifiRxRetry=_wifiRxRetry - In the implementation block
@property (assign,nonatomic) BOOL hasWifiCca; 
@property (assign,nonatomic) unsigned wifiCca;                                      //@synthesize wifiCca=_wifiCca - In the implementation block
@property (assign,nonatomic) BOOL hasWifiQbssLoad; 
@property (assign,nonatomic) unsigned wifiQbssLoad;                                 //@synthesize wifiQbssLoad=_wifiQbssLoad - In the implementation block
@property (assign,nonatomic) BOOL hasWifiStationCount; 
@property (assign,nonatomic) unsigned wifiStationCount;                             //@synthesize wifiStationCount=_wifiStationCount - In the implementation block
@property (assign,nonatomic) BOOL hasWifPoi; 
@property (assign,nonatomic) unsigned wifPoi;                                       //@synthesize wifPoi=_wifPoi - In the implementation block
@property (assign,nonatomic) BOOL hasWifiWgtAVGRSSI; 
@property (assign,nonatomic) int wifiWgtAVGRSSI;                                    //@synthesize wifiWgtAVGRSSI=_wifiWgtAVGRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasWifiWghtAVGSNR; 
@property (assign,nonatomic) unsigned wifiWghtAVGSNR;                               //@synthesize wifiWghtAVGSNR=_wifiWghtAVGSNR - In the implementation block
@property (assign,nonatomic) BOOL hasWifiWghtAVGTXPHYRATE; 
@property (assign,nonatomic) unsigned wifiWghtAVGTXPHYRATE;                         //@synthesize wifiWghtAVGTXPHYRATE=_wifiWghtAVGTXPHYRATE - In the implementation block
@property (assign,nonatomic) BOOL hasWifiWghtAVGRXPHYRATE; 
@property (assign,nonatomic) unsigned wifiWghtAVGRXPHYRATE;                         //@synthesize wifiWghtAVGRXPHYRATE=_wifiWghtAVGRXPHYRATE - In the implementation block
@property (assign,nonatomic) BOOL hasWifiEstThoughtput; 
@property (assign,nonatomic) unsigned wifiEstThoughtput;                            //@synthesize wifiEstThoughtput=_wifiEstThoughtput - In the implementation block
@property (assign,nonatomic) BOOL hasWifiWifiEstThoughtputConfidence; 
@property (assign,nonatomic) unsigned wifiWifiEstThoughtputConfidence;              //@synthesize wifiWifiEstThoughtputConfidence=_wifiWifiEstThoughtputConfidence - In the implementation block
@property (nonatomic,readonly) BOOL hasCellRatType; 
@property (nonatomic,retain) NSString * cellRatType;                                //@synthesize cellRatType=_cellRatType - In the implementation block
@property (assign,nonatomic) BOOL hasCellLteRSRP; 
@property (assign,nonatomic) int cellLteRSRP;                                       //@synthesize cellLteRSRP=_cellLteRSRP - In the implementation block
@property (assign,nonatomic) BOOL hasCellLteSNR; 
@property (assign,nonatomic) int cellLteSNR;                                        //@synthesize cellLteSNR=_cellLteSNR - In the implementation block
@property (assign,nonatomic) BOOL hasCellLteRSRQ; 
@property (assign,nonatomic) int cellLteRSRQ;                                       //@synthesize cellLteRSRQ=_cellLteRSRQ - In the implementation block
@property (assign,nonatomic) BOOL hasCellNrRSRP; 
@property (assign,nonatomic) int cellNrRSRP;                                        //@synthesize cellNrRSRP=_cellNrRSRP - In the implementation block
@property (assign,nonatomic) BOOL hasCellNrRSRQ; 
@property (assign,nonatomic) int cellNrRSRQ;                                        //@synthesize cellNrRSRQ=_cellNrRSRQ - In the implementation block
@property (assign,nonatomic) BOOL hasCellNrSNR; 
@property (assign,nonatomic) int cellNrSNR;                                         //@synthesize cellNrSNR=_cellNrSNR - In the implementation block
@property (assign,nonatomic) BOOL hasCellDataLQM; 
@property (assign,nonatomic) unsigned cellDataLQM;                                  //@synthesize cellDataLQM=_cellDataLQM - In the implementation block
@property (assign,nonatomic) BOOL hasCellRrcState; 
@property (assign,nonatomic) unsigned cellRrcState;                                 //@synthesize cellRrcState=_cellRrcState - In the implementation block
@property (assign,nonatomic) BOOL hasCellNrFR2active; 
@property (assign,nonatomic) unsigned cellNrFR2active;                              //@synthesize cellNrFR2active=_cellNrFR2active - In the implementation block
@property (assign,nonatomic) BOOL hasCellLteEstimatedThroughput; 
@property (assign,nonatomic) unsigned cellLteEstimatedThroughput;                   //@synthesize cellLteEstimatedThroughput=_cellLteEstimatedThroughput - In the implementation block
@property (assign,nonatomic) BOOL hasCellNrEstimatedThroughput; 
@property (assign,nonatomic) unsigned cellNrEstimatedThroughput;                    //@synthesize cellNrEstimatedThroughput=_cellNrEstimatedThroughput - In the implementation block
@property (assign,nonatomic) BOOL hasCellNsaEnabled; 
@property (assign,nonatomic) unsigned cellNsaEnabled;                               //@synthesize cellNsaEnabled=_cellNsaEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasCellDlBw; 
@property (assign,nonatomic) unsigned cellDlBw;                                     //@synthesize cellDlBw=_cellDlBw - In the implementation block
@property (assign,nonatomic) BOOL hasCellUlBw; 
@property (assign,nonatomic) unsigned cellUlBw;                                     //@synthesize cellUlBw=_cellUlBw - In the implementation block
@property (assign,nonatomic) BOOL hasCellMaxDlCaNumConfigured; 
@property (assign,nonatomic) unsigned cellMaxDlCaNumConfigured;                     //@synthesize cellMaxDlCaNumConfigured=_cellMaxDlCaNumConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasCellMaxUlCaNumConfigured; 
@property (assign,nonatomic) unsigned cellMaxUlCaNumConfigured;                     //@synthesize cellMaxUlCaNumConfigured=_cellMaxUlCaNumConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasCellEstimatedLoad; 
@property (assign,nonatomic) unsigned cellEstimatedLoad;                            //@synthesize cellEstimatedLoad=_cellEstimatedLoad - In the implementation block
@property (assign,nonatomic) BOOL hasCellEstimatedBw; 
@property (assign,nonatomic) unsigned cellEstimatedBw;                              //@synthesize cellEstimatedBw=_cellEstimatedBw - In the implementation block
@property (assign,nonatomic) BOOL hasRecommendedlink; 
@property (assign,nonatomic) unsigned recommendedlink;                              //@synthesize recommendedlink=_recommendedlink - In the implementation block
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
-(void)setWifiRssi:(int)arg1 ;
-(void)setHasWifiRssi:(BOOL)arg1 ;
-(BOOL)hasWifiRssi;
-(int)wifiRssi;
-(void)setCellNsaEnabled:(unsigned)arg1 ;
-(void)setHasCellNsaEnabled:(BOOL)arg1 ;
-(BOOL)hasCellNsaEnabled;
-(void)setCellNrRSRP:(int)arg1 ;
-(void)setHasCellNrRSRP:(BOOL)arg1 ;
-(BOOL)hasCellNrRSRP;
-(void)setCellNrRSRQ:(int)arg1 ;
-(void)setHasCellNrRSRQ:(BOOL)arg1 ;
-(BOOL)hasCellNrRSRQ;
-(void)setCellNrSNR:(int)arg1 ;
-(void)setHasCellNrSNR:(BOOL)arg1 ;
-(BOOL)hasCellNrSNR;
-(void)setCellLteRSRQ:(int)arg1 ;
-(void)setHasCellLteRSRQ:(BOOL)arg1 ;
-(BOOL)hasCellLteRSRQ;
-(unsigned)cellNsaEnabled;
-(int)cellNrRSRP;
-(int)cellNrRSRQ;
-(int)cellNrSNR;
-(int)cellLteRSRQ;
-(void)setWifiTxPER:(unsigned)arg1 ;
-(void)setHasWifiTxPER:(BOOL)arg1 ;
-(BOOL)hasWifiTxPER;
-(void)setWifiRxRetry:(unsigned)arg1 ;
-(void)setHasWifiRxRetry:(BOOL)arg1 ;
-(BOOL)hasWifiRxRetry;
-(unsigned)wifiTxPER;
-(unsigned)wifiRxRetry;
-(void)setCellRatType:(NSString *)arg1 ;
-(void)setWifiSnr:(unsigned)arg1 ;
-(void)setHasWifiSnr:(BOOL)arg1 ;
-(BOOL)hasWifiSnr;
-(void)setWifiCca:(unsigned)arg1 ;
-(void)setHasWifiCca:(BOOL)arg1 ;
-(BOOL)hasWifiCca;
-(void)setWifiQbssLoad:(unsigned)arg1 ;
-(void)setHasWifiQbssLoad:(BOOL)arg1 ;
-(BOOL)hasWifiQbssLoad;
-(void)setWifiStationCount:(unsigned)arg1 ;
-(void)setHasWifiStationCount:(BOOL)arg1 ;
-(BOOL)hasWifiStationCount;
-(void)setWifPoi:(unsigned)arg1 ;
-(void)setHasWifPoi:(BOOL)arg1 ;
-(BOOL)hasWifPoi;
-(void)setWifiWgtAVGRSSI:(int)arg1 ;
-(void)setHasWifiWgtAVGRSSI:(BOOL)arg1 ;
-(BOOL)hasWifiWgtAVGRSSI;
-(void)setWifiWghtAVGSNR:(unsigned)arg1 ;
-(void)setHasWifiWghtAVGSNR:(BOOL)arg1 ;
-(BOOL)hasWifiWghtAVGSNR;
-(void)setWifiWghtAVGTXPHYRATE:(unsigned)arg1 ;
-(void)setHasWifiWghtAVGTXPHYRATE:(BOOL)arg1 ;
-(BOOL)hasWifiWghtAVGTXPHYRATE;
-(void)setWifiWghtAVGRXPHYRATE:(unsigned)arg1 ;
-(void)setHasWifiWghtAVGRXPHYRATE:(BOOL)arg1 ;
-(BOOL)hasWifiWghtAVGRXPHYRATE;
-(void)setWifiEstThoughtput:(unsigned)arg1 ;
-(void)setHasWifiEstThoughtput:(BOOL)arg1 ;
-(BOOL)hasWifiEstThoughtput;
-(void)setWifiWifiEstThoughtputConfidence:(unsigned)arg1 ;
-(void)setHasWifiWifiEstThoughtputConfidence:(BOOL)arg1 ;
-(BOOL)hasWifiWifiEstThoughtputConfidence;
-(BOOL)hasCellRatType;
-(void)setCellLteRSRP:(int)arg1 ;
-(void)setHasCellLteRSRP:(BOOL)arg1 ;
-(BOOL)hasCellLteRSRP;
-(void)setCellLteSNR:(int)arg1 ;
-(void)setHasCellLteSNR:(BOOL)arg1 ;
-(BOOL)hasCellLteSNR;
-(void)setCellDataLQM:(unsigned)arg1 ;
-(void)setHasCellDataLQM:(BOOL)arg1 ;
-(BOOL)hasCellDataLQM;
-(void)setCellRrcState:(unsigned)arg1 ;
-(void)setHasCellRrcState:(BOOL)arg1 ;
-(BOOL)hasCellRrcState;
-(void)setCellNrFR2active:(unsigned)arg1 ;
-(void)setHasCellNrFR2active:(BOOL)arg1 ;
-(BOOL)hasCellNrFR2active;
-(void)setCellLteEstimatedThroughput:(unsigned)arg1 ;
-(void)setHasCellLteEstimatedThroughput:(BOOL)arg1 ;
-(BOOL)hasCellLteEstimatedThroughput;
-(void)setCellNrEstimatedThroughput:(unsigned)arg1 ;
-(void)setHasCellNrEstimatedThroughput:(BOOL)arg1 ;
-(BOOL)hasCellNrEstimatedThroughput;
-(void)setCellDlBw:(unsigned)arg1 ;
-(void)setHasCellDlBw:(BOOL)arg1 ;
-(BOOL)hasCellDlBw;
-(void)setCellUlBw:(unsigned)arg1 ;
-(void)setHasCellUlBw:(BOOL)arg1 ;
-(BOOL)hasCellUlBw;
-(void)setCellMaxDlCaNumConfigured:(unsigned)arg1 ;
-(void)setHasCellMaxDlCaNumConfigured:(BOOL)arg1 ;
-(BOOL)hasCellMaxDlCaNumConfigured;
-(void)setCellMaxUlCaNumConfigured:(unsigned)arg1 ;
-(void)setHasCellMaxUlCaNumConfigured:(BOOL)arg1 ;
-(BOOL)hasCellMaxUlCaNumConfigured;
-(void)setCellEstimatedLoad:(unsigned)arg1 ;
-(void)setHasCellEstimatedLoad:(BOOL)arg1 ;
-(BOOL)hasCellEstimatedLoad;
-(void)setCellEstimatedBw:(unsigned)arg1 ;
-(void)setHasCellEstimatedBw:(BOOL)arg1 ;
-(BOOL)hasCellEstimatedBw;
-(void)setRecommendedlink:(unsigned)arg1 ;
-(void)setHasRecommendedlink:(BOOL)arg1 ;
-(BOOL)hasRecommendedlink;
-(unsigned)wifiSnr;
-(unsigned)wifiCca;
-(unsigned)wifiQbssLoad;
-(unsigned)wifiStationCount;
-(unsigned)wifPoi;
-(int)wifiWgtAVGRSSI;
-(unsigned)wifiWghtAVGSNR;
-(unsigned)wifiWghtAVGTXPHYRATE;
-(unsigned)wifiWghtAVGRXPHYRATE;
-(unsigned)wifiEstThoughtput;
-(unsigned)wifiWifiEstThoughtputConfidence;
-(NSString *)cellRatType;
-(int)cellLteRSRP;
-(int)cellLteSNR;
-(unsigned)cellDataLQM;
-(unsigned)cellRrcState;
-(unsigned)cellNrFR2active;
-(unsigned)cellLteEstimatedThroughput;
-(unsigned)cellNrEstimatedThroughput;
-(unsigned)cellDlBw;
-(unsigned)cellUlBw;
-(unsigned)cellMaxDlCaNumConfigured;
-(unsigned)cellMaxUlCaNumConfigured;
-(unsigned)cellEstimatedLoad;
-(unsigned)cellEstimatedBw;
-(unsigned)recommendedlink;
@end


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

@class NSMutableArray;

@interface AWDWiFiMetricsManagerRangingReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _awdlLatency;
	unsigned _numMeasurements;
	unsigned _peerMasterChannel;
	unsigned _peerPreferredChannel;
	unsigned _peerPreferredChannelFlags;
	unsigned _protocolVersion;
	unsigned _rangingBandwidth;
	unsigned _rangingChannel;
	unsigned _rangingChannelQuality;
	unsigned _rangingLatency;
	unsigned _resultFlags;
	unsigned _resultStatus;
	NSMutableArray* _rttSamples;
	unsigned _selfMasterChannel;
	unsigned _selfPreferredChannel;
	unsigned _selfPreferredChannelFlags;
	unsigned _validCount;
	SCD_Struct_AW30 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSelfPreferredChannel; 
@property (assign,nonatomic) unsigned selfPreferredChannel;                   //@synthesize selfPreferredChannel=_selfPreferredChannel - In the implementation block
@property (assign,nonatomic) BOOL hasSelfPreferredChannelFlags; 
@property (assign,nonatomic) unsigned selfPreferredChannelFlags;              //@synthesize selfPreferredChannelFlags=_selfPreferredChannelFlags - In the implementation block
@property (assign,nonatomic) BOOL hasSelfMasterChannel; 
@property (assign,nonatomic) unsigned selfMasterChannel;                      //@synthesize selfMasterChannel=_selfMasterChannel - In the implementation block
@property (assign,nonatomic) BOOL hasPeerPreferredChannel; 
@property (assign,nonatomic) unsigned peerPreferredChannel;                   //@synthesize peerPreferredChannel=_peerPreferredChannel - In the implementation block
@property (assign,nonatomic) BOOL hasPeerPreferredChannelFlags; 
@property (assign,nonatomic) unsigned peerPreferredChannelFlags;              //@synthesize peerPreferredChannelFlags=_peerPreferredChannelFlags - In the implementation block
@property (assign,nonatomic) BOOL hasPeerMasterChannel; 
@property (assign,nonatomic) unsigned peerMasterChannel;                      //@synthesize peerMasterChannel=_peerMasterChannel - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion;                        //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasRangingChannel; 
@property (assign,nonatomic) unsigned rangingChannel;                         //@synthesize rangingChannel=_rangingChannel - In the implementation block
@property (assign,nonatomic) BOOL hasRangingBandwidth; 
@property (assign,nonatomic) unsigned rangingBandwidth;                       //@synthesize rangingBandwidth=_rangingBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasResultFlags; 
@property (assign,nonatomic) unsigned resultFlags;                            //@synthesize resultFlags=_resultFlags - In the implementation block
@property (assign,nonatomic) BOOL hasResultStatus; 
@property (assign,nonatomic) unsigned resultStatus;                           //@synthesize resultStatus=_resultStatus - In the implementation block
@property (assign,nonatomic) BOOL hasValidCount; 
@property (assign,nonatomic) unsigned validCount;                             //@synthesize validCount=_validCount - In the implementation block
@property (assign,nonatomic) BOOL hasNumMeasurements; 
@property (assign,nonatomic) unsigned numMeasurements;                        //@synthesize numMeasurements=_numMeasurements - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlLatency; 
@property (assign,nonatomic) unsigned awdlLatency;                            //@synthesize awdlLatency=_awdlLatency - In the implementation block
@property (assign,nonatomic) BOOL hasRangingLatency; 
@property (assign,nonatomic) unsigned rangingLatency;                         //@synthesize rangingLatency=_rangingLatency - In the implementation block
@property (nonatomic,retain) NSMutableArray * rttSamples;                     //@synthesize rttSamples=_rttSamples - In the implementation block
@property (assign,nonatomic) BOOL hasRangingChannelQuality; 
@property (assign,nonatomic) unsigned rangingChannelQuality;                  //@synthesize rangingChannelQuality=_rangingChannelQuality - In the implementation block
+(Class)rttSamplesType;
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
-(void)setProtocolVersion:(unsigned)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasProtocolVersion;
-(unsigned)protocolVersion;
-(void)setRttSamples:(NSMutableArray *)arg1 ;
-(void)addRttSamples:(id)arg1 ;
-(unsigned long long)rttSamplesCount;
-(void)clearRttSamples;
-(id)rttSamplesAtIndex:(unsigned long long)arg1 ;
-(void)setSelfPreferredChannel:(unsigned)arg1 ;
-(void)setHasSelfPreferredChannel:(BOOL)arg1 ;
-(BOOL)hasSelfPreferredChannel;
-(void)setSelfPreferredChannelFlags:(unsigned)arg1 ;
-(void)setHasSelfPreferredChannelFlags:(BOOL)arg1 ;
-(BOOL)hasSelfPreferredChannelFlags;
-(void)setSelfMasterChannel:(unsigned)arg1 ;
-(void)setHasSelfMasterChannel:(BOOL)arg1 ;
-(BOOL)hasSelfMasterChannel;
-(void)setPeerPreferredChannel:(unsigned)arg1 ;
-(void)setHasPeerPreferredChannel:(BOOL)arg1 ;
-(BOOL)hasPeerPreferredChannel;
-(void)setPeerPreferredChannelFlags:(unsigned)arg1 ;
-(void)setHasPeerPreferredChannelFlags:(BOOL)arg1 ;
-(BOOL)hasPeerPreferredChannelFlags;
-(void)setPeerMasterChannel:(unsigned)arg1 ;
-(void)setHasPeerMasterChannel:(BOOL)arg1 ;
-(BOOL)hasPeerMasterChannel;
-(void)setRangingChannel:(unsigned)arg1 ;
-(void)setHasRangingChannel:(BOOL)arg1 ;
-(BOOL)hasRangingChannel;
-(void)setRangingBandwidth:(unsigned)arg1 ;
-(void)setHasRangingBandwidth:(BOOL)arg1 ;
-(BOOL)hasRangingBandwidth;
-(void)setResultFlags:(unsigned)arg1 ;
-(void)setHasResultFlags:(BOOL)arg1 ;
-(BOOL)hasResultFlags;
-(void)setResultStatus:(unsigned)arg1 ;
-(void)setHasResultStatus:(BOOL)arg1 ;
-(BOOL)hasResultStatus;
-(void)setValidCount:(unsigned)arg1 ;
-(void)setHasValidCount:(BOOL)arg1 ;
-(BOOL)hasValidCount;
-(void)setNumMeasurements:(unsigned)arg1 ;
-(void)setHasNumMeasurements:(BOOL)arg1 ;
-(BOOL)hasNumMeasurements;
-(void)setAwdlLatency:(unsigned)arg1 ;
-(void)setHasAwdlLatency:(BOOL)arg1 ;
-(BOOL)hasAwdlLatency;
-(void)setRangingLatency:(unsigned)arg1 ;
-(void)setHasRangingLatency:(BOOL)arg1 ;
-(BOOL)hasRangingLatency;
-(void)setRangingChannelQuality:(unsigned)arg1 ;
-(void)setHasRangingChannelQuality:(BOOL)arg1 ;
-(BOOL)hasRangingChannelQuality;
-(unsigned)selfPreferredChannel;
-(unsigned)selfPreferredChannelFlags;
-(unsigned)selfMasterChannel;
-(unsigned)peerPreferredChannel;
-(unsigned)peerPreferredChannelFlags;
-(unsigned)peerMasterChannel;
-(unsigned)rangingChannel;
-(unsigned)rangingBandwidth;
-(unsigned)resultFlags;
-(unsigned)resultStatus;
-(unsigned)validCount;
-(unsigned)numMeasurements;
-(unsigned)awdlLatency;
-(unsigned)rangingLatency;
-(NSMutableArray *)rttSamples;
-(unsigned)rangingChannelQuality;
@end


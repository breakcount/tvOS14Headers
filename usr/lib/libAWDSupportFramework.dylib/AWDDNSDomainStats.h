/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDDNSDomainStats : PBCodable <NSCopying> {

	SCD_Struct_AW21* _answeredQuerySendCounts;
	SCD_Struct_AW21* _dnsOverTCPStates;
	SCD_Struct_AW21* _expiredAnswerStates;
	SCD_Struct_AW21* _negAnsweredQuerySendCounts;
	SCD_Struct_AW21* _negResponseLatencyMs;
	SCD_Struct_AW21* _responseLatencyMs;
	SCD_Struct_AW21* _unansweredQueryDurationMs;
	SCD_Struct_AW21* _unansweredQuerySendCounts;
	NSString* _domain;
	int _networkType;
	int _recordType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                                   //@synthesize networkType=_networkType - In the implementation block
@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                                                 //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) unsigned long long answeredQuerySendCountsCount; 
@property (nonatomic,readonly) unsigned* answeredQuerySendCounts; 
@property (nonatomic,readonly) unsigned long long unansweredQuerySendCountsCount; 
@property (nonatomic,readonly) unsigned* unansweredQuerySendCounts; 
@property (nonatomic,readonly) unsigned long long responseLatencyMsCount; 
@property (nonatomic,readonly) unsigned* responseLatencyMs; 
@property (assign,nonatomic) BOOL hasRecordType; 
@property (assign,nonatomic) int recordType;                                                    //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,readonly) unsigned long long negAnsweredQuerySendCountsCount; 
@property (nonatomic,readonly) unsigned* negAnsweredQuerySendCounts; 
@property (nonatomic,readonly) unsigned long long negResponseLatencyMsCount; 
@property (nonatomic,readonly) unsigned* negResponseLatencyMs; 
@property (nonatomic,readonly) unsigned long long unansweredQueryDurationMsCount; 
@property (nonatomic,readonly) unsigned* unansweredQueryDurationMs; 
@property (nonatomic,readonly) unsigned long long expiredAnswerStatesCount; 
@property (nonatomic,readonly) unsigned* expiredAnswerStates; 
@property (nonatomic,readonly) unsigned long long dnsOverTCPStatesCount; 
@property (nonatomic,readonly) unsigned* dnsOverTCPStates; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)recordType;
-(void)setRecordType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasRecordType:(BOOL)arg1 ;
-(BOOL)hasRecordType;
-(unsigned long long)answeredQuerySendCountsCount;
-(void)clearAnsweredQuerySendCounts;
-(unsigned)answeredQuerySendCountAtIndex:(unsigned long long)arg1 ;
-(void)addAnsweredQuerySendCount:(unsigned)arg1 ;
-(unsigned long long)unansweredQuerySendCountsCount;
-(void)clearUnansweredQuerySendCounts;
-(unsigned)unansweredQuerySendCountAtIndex:(unsigned long long)arg1 ;
-(void)addUnansweredQuerySendCount:(unsigned)arg1 ;
-(unsigned long long)responseLatencyMsCount;
-(void)clearResponseLatencyMs;
-(unsigned)responseLatencyMsAtIndex:(unsigned long long)arg1 ;
-(void)addResponseLatencyMs:(unsigned)arg1 ;
-(unsigned long long)negAnsweredQuerySendCountsCount;
-(void)clearNegAnsweredQuerySendCounts;
-(unsigned)negAnsweredQuerySendCountAtIndex:(unsigned long long)arg1 ;
-(void)addNegAnsweredQuerySendCount:(unsigned)arg1 ;
-(unsigned long long)negResponseLatencyMsCount;
-(void)clearNegResponseLatencyMs;
-(unsigned)negResponseLatencyMsAtIndex:(unsigned long long)arg1 ;
-(void)addNegResponseLatencyMs:(unsigned)arg1 ;
-(unsigned long long)unansweredQueryDurationMsCount;
-(void)clearUnansweredQueryDurationMs;
-(unsigned)unansweredQueryDurationMsAtIndex:(unsigned long long)arg1 ;
-(void)addUnansweredQueryDurationMs:(unsigned)arg1 ;
-(unsigned long long)expiredAnswerStatesCount;
-(void)clearExpiredAnswerStates;
-(unsigned)expiredAnswerStateAtIndex:(unsigned long long)arg1 ;
-(void)addExpiredAnswerState:(unsigned)arg1 ;
-(unsigned long long)dnsOverTCPStatesCount;
-(void)clearDnsOverTCPStates;
-(unsigned)dnsOverTCPStateAtIndex:(unsigned long long)arg1 ;
-(void)addDnsOverTCPState:(unsigned)arg1 ;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(BOOL)hasDomain;
-(unsigned*)answeredQuerySendCounts;
-(void)setAnsweredQuerySendCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)unansweredQuerySendCounts;
-(void)setUnansweredQuerySendCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)responseLatencyMs;
-(void)setResponseLatencyMs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)recordTypeAsString:(int)arg1 ;
-(int)StringAsRecordType:(id)arg1 ;
-(unsigned*)negAnsweredQuerySendCounts;
-(void)setNegAnsweredQuerySendCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)negResponseLatencyMs;
-(void)setNegResponseLatencyMs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)unansweredQueryDurationMs;
-(void)setUnansweredQueryDurationMs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)expiredAnswerStates;
-(void)setExpiredAnswerStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)dnsOverTCPStates;
-(void)setDnsOverTCPStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end


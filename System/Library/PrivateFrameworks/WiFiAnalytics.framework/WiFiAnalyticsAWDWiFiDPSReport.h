/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, WiFiAnalyticsAWDWiFiDPSEpilogue, WiFiAnalyticsAWDWiFiDPSSnapshot;

@interface WiFiAnalyticsAWDWiFiDPSReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _dpsCounterSamples;
	WiFiAnalyticsAWDWiFiDPSEpilogue* _dpsEpiloge;
	NSMutableArray* _probeResults;
	WiFiAnalyticsAWDWiFiDPSSnapshot* _snapshot;
	NSMutableArray* _stallNotifications;
	SCD_Struct_Wi1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * stallNotifications;                       //@synthesize stallNotifications=_stallNotifications - In the implementation block
@property (nonatomic,retain) NSMutableArray * probeResults;                             //@synthesize probeResults=_probeResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * dpsCounterSamples;                        //@synthesize dpsCounterSamples=_dpsCounterSamples - In the implementation block
@property (nonatomic,readonly) BOOL hasDpsEpiloge; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSEpilogue * dpsEpiloge;              //@synthesize dpsEpiloge=_dpsEpiloge - In the implementation block
@property (nonatomic,readonly) BOOL hasSnapshot; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSSnapshot * snapshot;                //@synthesize snapshot=_snapshot - In the implementation block
+(Class)stallNotificationType;
+(Class)probeResultType;
+(Class)dpsCounterSampleType;
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
-(void)setStallNotifications:(NSMutableArray *)arg1 ;
-(void)setProbeResults:(NSMutableArray *)arg1 ;
-(void)setDpsCounterSamples:(NSMutableArray *)arg1 ;
-(void)setDpsEpiloge:(WiFiAnalyticsAWDWiFiDPSEpilogue *)arg1 ;
-(void)setSnapshot:(WiFiAnalyticsAWDWiFiDPSSnapshot *)arg1 ;
-(void)addStallNotification:(id)arg1 ;
-(void)addProbeResult:(id)arg1 ;
-(void)addDpsCounterSample:(id)arg1 ;
-(unsigned long long)stallNotificationsCount;
-(void)clearStallNotifications;
-(id)stallNotificationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)probeResultsCount;
-(void)clearProbeResults;
-(id)probeResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dpsCounterSamplesCount;
-(void)clearDpsCounterSamples;
-(id)dpsCounterSampleAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDpsEpiloge;
-(BOOL)hasSnapshot;
-(NSMutableArray *)stallNotifications;
-(NSMutableArray *)probeResults;
-(NSMutableArray *)dpsCounterSamples;
-(WiFiAnalyticsAWDWiFiDPSEpilogue *)dpsEpiloge;
-(WiFiAnalyticsAWDWiFiDPSSnapshot *)snapshot;
@end


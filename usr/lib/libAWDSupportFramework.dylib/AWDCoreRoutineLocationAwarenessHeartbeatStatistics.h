/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineLocationAwarenessBasicHistogram;

@interface AWDCoreRoutineLocationAwarenessHeartbeatStatistics : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _heartbeatActiveRequestCount;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _heartbeatTimerFiringCount;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _heartbeatValidLocationCount;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasHeartbeatTimerFiringCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * heartbeatTimerFiringCount;                //@synthesize heartbeatTimerFiringCount=_heartbeatTimerFiringCount - In the implementation block
@property (nonatomic,readonly) BOOL hasHeartbeatActiveRequestCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * heartbeatActiveRequestCount;              //@synthesize heartbeatActiveRequestCount=_heartbeatActiveRequestCount - In the implementation block
@property (nonatomic,readonly) BOOL hasHeartbeatValidLocationCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * heartbeatValidLocationCount;              //@synthesize heartbeatValidLocationCount=_heartbeatValidLocationCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHeartbeatTimerFiringCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setHeartbeatActiveRequestCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setHeartbeatValidLocationCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(BOOL)hasHeartbeatTimerFiringCount;
-(BOOL)hasHeartbeatActiveRequestCount;
-(BOOL)hasHeartbeatValidLocationCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)heartbeatTimerFiringCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)heartbeatActiveRequestCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)heartbeatValidLocationCount;
@end


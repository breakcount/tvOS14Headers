/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitBackingStoreCKRebuildEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _containerType;
	int _rebuildStatus;
	int _zoneType;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRebuildStatus; 
@property (assign,nonatomic) int rebuildStatus;                         //@synthesize rebuildStatus=_rebuildStatus - In the implementation block
@property (assign,nonatomic) BOOL hasContainerType; 
@property (assign,nonatomic) int containerType;                         //@synthesize containerType=_containerType - In the implementation block
@property (assign,nonatomic) BOOL hasZoneType; 
@property (assign,nonatomic) int zoneType;                              //@synthesize zoneType=_zoneType - In the implementation block
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
-(int)containerType;
-(BOOL)hasContainerType;
-(void)setContainerType:(int)arg1 ;
-(void)setHasContainerType:(BOOL)arg1 ;
-(id)containerTypeAsString:(int)arg1 ;
-(int)StringAsContainerType:(id)arg1 ;
-(int)zoneType;
-(void)setZoneType:(int)arg1 ;
-(void)setHasZoneType:(BOOL)arg1 ;
-(BOOL)hasZoneType;
-(id)zoneTypeAsString:(int)arg1 ;
-(int)StringAsZoneType:(id)arg1 ;
-(int)rebuildStatus;
-(void)setRebuildStatus:(int)arg1 ;
-(void)setHasRebuildStatus:(BOOL)arg1 ;
-(BOOL)hasRebuildStatus;
-(id)rebuildStatusAsString:(int)arg1 ;
-(int)StringAsRebuildStatus:(id)arg1 ;
@end


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

@class NSData;

@interface AWDWifiMetricWiFiTetheredDeviceOUI : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _tetheredOUI;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) BOOL hasTetheredOUI; 
@property (nonatomic,retain) NSData * tetheredOUI;                      //@synthesize tetheredOUI=_tetheredOUI - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
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
-(void)setTetheredOUI:(NSData *)arg1 ;
-(BOOL)hasTetheredOUI;
-(NSData *)tetheredOUI;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSMessageDeliveryPath : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _deliveryPathType;
	NSString* _service;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                        //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasDeliveryPathType; 
@property (assign,nonatomic) unsigned deliveryPathType;                 //@synthesize deliveryPathType=_deliveryPathType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)service;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasService;
-(void)setDeliveryPathType:(unsigned)arg1 ;
-(void)setHasDeliveryPathType:(BOOL)arg1 ;
-(BOOL)hasDeliveryPathType;
-(unsigned)deliveryPathType;
@end


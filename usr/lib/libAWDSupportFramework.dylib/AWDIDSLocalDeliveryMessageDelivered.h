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

@interface AWDIDSLocalDeliveryMessageDelivered : PBCodable <NSCopying> {

	unsigned long long _deliveryError;
	unsigned long long _isToDefaultPairedDevice;
	unsigned long long _linkType;
	unsigned long long _messageSize;
	unsigned long long _priority;
	unsigned long long _rTT;
	unsigned long long _timestamp;
	NSString* _service;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                                      //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasIsToDefaultPairedDevice; 
@property (assign,nonatomic) unsigned long long isToDefaultPairedDevice;              //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL hasMessageSize; 
@property (assign,nonatomic) unsigned long long messageSize;                          //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) BOOL hasDeliveryError; 
@property (assign,nonatomic) unsigned long long deliveryError;                        //@synthesize deliveryError=_deliveryError - In the implementation block
@property (assign,nonatomic) BOOL hasRTT; 
@property (assign,nonatomic) unsigned long long rTT;                                  //@synthesize rTT=_rTT - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned long long linkType;                             //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;                             //@synthesize priority=_priority - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)service;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)linkType;
-(void)setLinkType:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasService;
-(void)setIsToDefaultPairedDevice:(unsigned long long)arg1 ;
-(void)setHasIsToDefaultPairedDevice:(BOOL)arg1 ;
-(BOOL)hasIsToDefaultPairedDevice;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(void)setHasMessageSize:(BOOL)arg1 ;
-(BOOL)hasMessageSize;
-(void)setRTT:(unsigned long long)arg1 ;
-(void)setHasRTT:(BOOL)arg1 ;
-(BOOL)hasRTT;
-(void)setHasPriority:(BOOL)arg1 ;
-(BOOL)hasPriority;
-(unsigned long long)isToDefaultPairedDevice;
-(unsigned long long)messageSize;
-(unsigned long long)rTT;
-(void)setHasLinkType:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(void)setDeliveryError:(unsigned long long)arg1 ;
-(void)setHasDeliveryError:(BOOL)arg1 ;
-(BOOL)hasDeliveryError;
-(unsigned long long)deliveryError;
@end


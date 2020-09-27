/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:46 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaClientEventMetadata : PBCodable {

	NSData* _turnID;
	NSData* _siriDeviceID;
	NSString* _eventGeneratedTimestampRefId;
	long long _eventGeneratedRelativeToBootTimeTimestampNs;
	SCD_Struct_SI1 _has;
	BOOL _hasTurnID;
	BOOL _hasSiriDeviceID;
	BOOL _hasEventGeneratedTimestampRefId;

}

@property (nonatomic,copy) NSData * turnID;                                                      //@synthesize turnID=_turnID - In the implementation block
@property (assign,nonatomic) BOOL hasTurnID;                                                     //@synthesize hasTurnID=_hasTurnID - In the implementation block
@property (nonatomic,copy) NSData * siriDeviceID;                                                //@synthesize siriDeviceID=_siriDeviceID - In the implementation block
@property (assign,nonatomic) BOOL hasSiriDeviceID;                                               //@synthesize hasSiriDeviceID=_hasSiriDeviceID - In the implementation block
@property (nonatomic,copy) NSString * eventGeneratedTimestampRefId;                              //@synthesize eventGeneratedTimestampRefId=_eventGeneratedTimestampRefId - In the implementation block
@property (assign,nonatomic) BOOL hasEventGeneratedTimestampRefId;                               //@synthesize hasEventGeneratedTimestampRefId=_hasEventGeneratedTimestampRefId - In the implementation block
@property (assign,nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs;              //@synthesize eventGeneratedRelativeToBootTimeTimestampNs=_eventGeneratedRelativeToBootTimeTimestampNs - In the implementation block
@property (assign,nonatomic) BOOL hasEventGeneratedRelativeToBootTimeTimestampNs; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(NSData *)turnID;
-(void)setTurnID:(NSData *)arg1 ;
-(BOOL)hasTurnID;
-(void)setSiriDeviceID:(NSData *)arg1 ;
-(void)setEventGeneratedTimestampRefId:(NSString *)arg1 ;
-(void)setEventGeneratedRelativeToBootTimeTimestampNs:(long long)arg1 ;
-(NSData *)siriDeviceID;
-(NSString *)eventGeneratedTimestampRefId;
-(long long)eventGeneratedRelativeToBootTimeTimestampNs;
-(BOOL)hasSiriDeviceID;
-(BOOL)hasEventGeneratedTimestampRefId;
-(BOOL)hasEventGeneratedRelativeToBootTimeTimestampNs;
-(void)setHasEventGeneratedRelativeToBootTimeTimestampNs:(BOOL)arg1 ;
-(void)setHasTurnID:(BOOL)arg1 ;
-(void)setHasSiriDeviceID:(BOOL)arg1 ;
-(void)setHasEventGeneratedTimestampRefId:(BOOL)arg1 ;
@end


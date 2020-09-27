/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, NRPBNumber, NRPBSize, NSString;

@interface NRPBPropertyValue : PBCodable <NSCopying> {

	NSMutableArray* _arrayValues;
	NSData* _dataValue;
	NRPBPropertyValue* _dictionaryKey;
	NRPBNumber* _numberValue;
	NRPBSize* _sizeValue;
	NSString* _stringValue;
	NSData* _uUIDValue;
	BOOL _isDate;
	BOOL _isError;
	BOOL _isMiniUUIDSet;
	BOOL _isSecurePropertyValue;
	BOOL _isSet;
	SCD_Struct_NR3 _has;

}

@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                         //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasNumberValue; 
@property (nonatomic,retain) NRPBNumber * numberValue;                       //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,readonly) BOOL hasUUIDValue; 
@property (nonatomic,retain) NSData * uUIDValue;                             //@synthesize uUIDValue=_uUIDValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDataValue; 
@property (nonatomic,retain) NSData * dataValue;                             //@synthesize dataValue=_dataValue - In the implementation block
@property (nonatomic,readonly) BOOL hasSizeValue; 
@property (nonatomic,retain) NRPBSize * sizeValue;                           //@synthesize sizeValue=_sizeValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDictionaryKey; 
@property (nonatomic,retain) NRPBPropertyValue * dictionaryKey;              //@synthesize dictionaryKey=_dictionaryKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * arrayValues;                   //@synthesize arrayValues=_arrayValues - In the implementation block
@property (assign,nonatomic) BOOL hasIsSet; 
@property (assign,nonatomic) BOOL isSet;                                     //@synthesize isSet=_isSet - In the implementation block
@property (assign,nonatomic) BOOL hasIsSecurePropertyValue; 
@property (assign,nonatomic) BOOL isSecurePropertyValue;                     //@synthesize isSecurePropertyValue=_isSecurePropertyValue - In the implementation block
@property (assign,nonatomic) BOOL hasIsDate; 
@property (assign,nonatomic) BOOL isDate;                                    //@synthesize isDate=_isDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsError; 
@property (assign,nonatomic) BOOL isError;                                   //@synthesize isError=_isError - In the implementation block
@property (assign,nonatomic) BOOL hasIsMiniUUIDSet; 
@property (assign,nonatomic) BOOL isMiniUUIDSet;                             //@synthesize isMiniUUIDSet=_isMiniUUIDSet - In the implementation block
+(Class)arrayValuesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)stringValue;
-(id)dictionaryRepresentation;
-(NRPBSize *)sizeValue;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDataValue:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStringValue;
-(BOOL)hasDataValue;
-(void)copyTo:(id)arg1 ;
-(NSData *)dataValue;
-(BOOL)isDate;
-(NRPBNumber *)numberValue;
-(NRPBPropertyValue *)dictionaryKey;
-(BOOL)isError;
-(void)setSizeValue:(NRPBSize *)arg1 ;
-(void)addArrayValues:(id)arg1 ;
-(void)setNumberValue:(NRPBNumber *)arg1 ;
-(void)setUUIDValue:(NSData *)arg1 ;
-(void)setDictionaryKey:(NRPBPropertyValue *)arg1 ;
-(unsigned long long)arrayValuesCount;
-(void)clearArrayValues;
-(id)arrayValuesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNumberValue;
-(BOOL)hasUUIDValue;
-(BOOL)hasSizeValue;
-(BOOL)hasDictionaryKey;
-(void)setIsSet:(BOOL)arg1 ;
-(void)setHasIsSet:(BOOL)arg1 ;
-(BOOL)hasIsSet;
-(void)setIsSecurePropertyValue:(BOOL)arg1 ;
-(void)setHasIsSecurePropertyValue:(BOOL)arg1 ;
-(BOOL)hasIsSecurePropertyValue;
-(void)setIsDate:(BOOL)arg1 ;
-(void)setHasIsDate:(BOOL)arg1 ;
-(BOOL)hasIsDate;
-(void)setIsError:(BOOL)arg1 ;
-(void)setHasIsError:(BOOL)arg1 ;
-(BOOL)hasIsError;
-(void)setIsMiniUUIDSet:(BOOL)arg1 ;
-(void)setHasIsMiniUUIDSet:(BOOL)arg1 ;
-(BOOL)hasIsMiniUUIDSet;
-(NSData *)uUIDValue;
-(NSMutableArray *)arrayValues;
-(void)setArrayValues:(NSMutableArray *)arg1 ;
-(BOOL)isSet;
-(BOOL)isSecurePropertyValue;
-(BOOL)isMiniUUIDSet;
@end


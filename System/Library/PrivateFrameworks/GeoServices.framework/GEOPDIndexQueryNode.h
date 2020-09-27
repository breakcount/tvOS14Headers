/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDIndexQueryNode : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _field;
	NSMutableArray* _operands;
	NSString* _value;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_field : 1;
		unsigned read_operands : 1;
		unsigned read_value : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) NSString * field; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value; 
@property (nonatomic,retain) NSMutableArray * operands; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)operandType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasValue;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)field;
-(void)setField:(NSString *)arg1 ;
-(void)addOperand:(id)arg1 ;
-(unsigned long long)operandsCount;
-(void)clearOperands;
-(id)operandAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasField;
-(NSMutableArray *)operands;
-(void)setOperands:(NSMutableArray *)arg1 ;
@end


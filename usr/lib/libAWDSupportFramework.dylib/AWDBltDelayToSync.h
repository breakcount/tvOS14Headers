/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBltDelayToSync : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _delayMs;
	BOOL _initial;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDelayMs; 
@property (assign,nonatomic) unsigned delayMs;                          //@synthesize delayMs=_delayMs - In the implementation block
@property (assign,nonatomic) BOOL hasInitial; 
@property (assign,nonatomic) BOOL initial;                              //@synthesize initial=_initial - In the implementation block
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
-(void)setDelayMs:(unsigned)arg1 ;
-(void)setHasDelayMs:(BOOL)arg1 ;
-(BOOL)hasDelayMs;
-(unsigned)delayMs;
-(void)setInitial:(BOOL)arg1 ;
-(void)setHasInitial:(BOOL)arg1 ;
-(BOOL)hasInitial;
-(BOOL)initial;
@end


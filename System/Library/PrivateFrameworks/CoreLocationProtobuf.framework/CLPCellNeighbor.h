/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPCellNeighbor : PBCodable <NSCopying> {

	int _ecn0;
	int _psc;
	int _rscp;
	int _rssi;
	int _uarfcn;
	SCD_Struct_CL5 _has;

}

@property (assign,nonatomic) BOOL hasUarfcn; 
@property (assign,nonatomic) int uarfcn;                  //@synthesize uarfcn=_uarfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPsc; 
@property (assign,nonatomic) int psc;                     //@synthesize psc=_psc - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                    //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                    //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                    //@synthesize rscp=_rscp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)rssi;
-(int)rscp;
-(int)ecn0;
-(void)setRssi:(int)arg1 ;
-(void)setRscp:(int)arg1 ;
-(void)setEcn0:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setHasEcn0:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(void)setHasRscp:(BOOL)arg1 ;
-(BOOL)hasRscp;
-(void)setUarfcn:(int)arg1 ;
-(void)setHasUarfcn:(BOOL)arg1 ;
-(BOOL)hasUarfcn;
-(void)setPsc:(int)arg1 ;
-(void)setHasPsc:(BOOL)arg1 ;
-(BOOL)hasPsc;
-(int)uarfcn;
-(int)psc;
@end


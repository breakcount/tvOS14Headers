/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitCloudSyncInfoTuple : PBCodable <NSCopying> {

	unsigned _count;
	NSString* _value;
	SCD_Struct_AW7 _has;

}

@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                //@synthesize count=_count - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)count;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasValue;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPLocationBound : PBCodable <NSCopying> {

	double _radius;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) double radius;               //@synthesize radius=_radius - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setHasRadius:(BOOL)arg1 ;
-(BOOL)hasRadius;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRColorProtobuf : PBCodable <NSCopying> {

	float _alpha;
	float _blue;
	float _green;
	float _red;
	SCD_Struct_MR15 _has;

}

@property (assign,nonatomic) BOOL hasRed; 
@property (assign,nonatomic) float red;                  //@synthesize red=_red - In the implementation block
@property (assign,nonatomic) BOOL hasGreen; 
@property (assign,nonatomic) float green;                //@synthesize green=_green - In the implementation block
@property (assign,nonatomic) BOOL hasBlue; 
@property (assign,nonatomic) float blue;                 //@synthesize blue=_blue - In the implementation block
@property (assign,nonatomic) BOOL hasAlpha; 
@property (assign,nonatomic) float alpha;                //@synthesize alpha=_alpha - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(float)red;
-(float)green;
-(float)blue;
-(float)alpha;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(void)setBlue:(float)arg1 ;
-(BOOL)hasBlue;
-(void)setHasBlue:(BOOL)arg1 ;
-(void)setGreen:(float)arg1 ;
-(BOOL)hasGreen;
-(void)setHasGreen:(BOOL)arg1 ;
-(void)setRed:(float)arg1 ;
-(BOOL)hasRed;
-(void)setHasRed:(BOOL)arg1 ;
-(void)setHasAlpha:(BOOL)arg1 ;
-(BOOL)hasAlpha;
@end


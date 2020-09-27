/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _MRGameControllerAccelerationProtobuf : PBCodable <NSCopying> {

	NSData* _data;
	float _w;
	float _x;
	float _y;
	float _z;
	SCD_Struct_MR15 _has;

}

@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;               //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL hasX; 
@property (assign,x,nonatomic) float x;                   //@synthesize x=_x - In the implementation block
@property (assign,nonatomic) BOOL hasY; 
@property (assign,y,nonatomic) float y;                   //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,z,nonatomic) float z;                   //@synthesize z=_z - In the implementation block
@property (assign,nonatomic) BOOL hasW; 
@property (assign,w,nonatomic) float w;                   //@synthesize w=_w - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasData;
-(float)x;
-(void)setX:(float)arg1 ;
-(float)y;
-(void)setY:(float)arg1 ;
-(float)w;
-(void)setW:(float)arg1 ;
-(void)setHasW:(BOOL)arg1 ;
-(BOOL)hasW;
-(float)z;
-(void)setZ:(float)arg1 ;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasX;
-(void)setHasY:(BOOL)arg1 ;
-(BOOL)hasY;
-(void)setHasZ:(BOOL)arg1 ;
-(BOOL)hasZ;
@end


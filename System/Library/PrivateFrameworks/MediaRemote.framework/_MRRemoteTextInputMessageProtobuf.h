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

@interface _MRRemoteTextInputMessageProtobuf : PBCodable <NSCopying> {

	double _timestamp;
	unsigned long long _version;
	NSData* _data;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(unsigned long long)version;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned long long)arg1 ;
-(double)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasData;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
@end


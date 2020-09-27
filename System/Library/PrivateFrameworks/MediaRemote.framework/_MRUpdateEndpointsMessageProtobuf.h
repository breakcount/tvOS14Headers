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

@class NSMutableArray;

@interface _MRUpdateEndpointsMessageProtobuf : PBCodable <NSCopying> {

	int _endpointFeatures;
	NSMutableArray* _endpoints;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,retain) NSMutableArray * endpoints;              //@synthesize endpoints=_endpoints - In the implementation block
@property (assign,nonatomic) BOOL hasEndpointFeatures; 
@property (assign,nonatomic) int endpointFeatures;                    //@synthesize endpointFeatures=_endpointFeatures - In the implementation block
+(Class)endpointsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)endpoints;
-(void)setEndpoints:(NSMutableArray *)arg1 ;
-(void)setEndpointFeatures:(int)arg1 ;
-(int)endpointFeatures;
-(void)addEndpoints:(id)arg1 ;
-(unsigned long long)endpointsCount;
-(void)clearEndpoints;
-(id)endpointsAtIndex:(unsigned long long)arg1 ;
-(void)setHasEndpointFeatures:(BOOL)arg1 ;
-(BOOL)hasEndpointFeatures;
-(id)endpointFeaturesAsString:(int)arg1 ;
-(int)StringAsEndpointFeatures:(id)arg1 ;
@end


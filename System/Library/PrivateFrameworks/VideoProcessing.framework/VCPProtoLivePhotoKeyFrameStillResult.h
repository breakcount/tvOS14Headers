/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoLivePhotoKeyFrameStillResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _sharpness;
	float _stillTime;
	float _textureness;
	BOOL _hasFlash;

}

@property (assign,nonatomic) float sharpness;                //@synthesize sharpness=_sharpness - In the implementation block
@property (assign,nonatomic) float textureness;              //@synthesize textureness=_textureness - In the implementation block
@property (assign,nonatomic) BOOL hasFlash;                  //@synthesize hasFlash=_hasFlash - In the implementation block
@property (assign,nonatomic) float stillTime;                //@synthesize stillTime=_stillTime - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)sharpness;
-(void)setSharpness:(float)arg1 ;
-(float)textureness;
-(void)setTextureness:(float)arg1 ;
-(BOOL)hasFlash;
-(void)setHasFlash:(BOOL)arg1 ;
-(float)stillTime;
-(void)setStillTime:(float)arg1 ;
-(id)exportToLegacyDictionary;
@end


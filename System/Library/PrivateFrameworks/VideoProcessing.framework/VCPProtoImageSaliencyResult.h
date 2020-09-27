/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoBounds;

@interface VCPProtoImageSaliencyResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	VCPProtoBounds* _bounds;
	float _confidence;

}

@property (assign,nonatomic) float confidence;                     //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) VCPProtoBounds * bounds;              //@synthesize bounds=_bounds - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(float)confidence;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(VCPProtoBounds *)bounds;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(void)setBounds:(VCPProtoBounds *)arg1 ;
-(id)exportToLegacyDictionary;
@end


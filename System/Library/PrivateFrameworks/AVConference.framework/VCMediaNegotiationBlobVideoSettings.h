/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VCMediaNegotiationBlobVideoSettings : PBCodable <NSCopying> {

	unsigned _customVideoHeight;
	unsigned _customVideoWidth;
	unsigned _pixelFormats;
	unsigned _rtpSSRC;
	unsigned _tilesPerFrame;
	NSMutableArray* _videoPayloadCollections;
	BOOL _allowRTCPFB;
	BOOL _ltrpEnabled;
	SCD_Struct_VC102 _has;

}

@property (assign,nonatomic) unsigned rtpSSRC;                                      //@synthesize rtpSSRC=_rtpSSRC - In the implementation block
@property (assign,nonatomic) BOOL allowRTCPFB;                                      //@synthesize allowRTCPFB=_allowRTCPFB - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoPayloadCollections;              //@synthesize videoPayloadCollections=_videoPayloadCollections - In the implementation block
@property (assign,nonatomic) BOOL hasCustomVideoWidth; 
@property (assign,nonatomic) unsigned customVideoWidth;                             //@synthesize customVideoWidth=_customVideoWidth - In the implementation block
@property (assign,nonatomic) BOOL hasCustomVideoHeight; 
@property (assign,nonatomic) unsigned customVideoHeight;                            //@synthesize customVideoHeight=_customVideoHeight - In the implementation block
@property (assign,nonatomic) BOOL hasTilesPerFrame; 
@property (assign,nonatomic) unsigned tilesPerFrame;                                //@synthesize tilesPerFrame=_tilesPerFrame - In the implementation block
@property (assign,nonatomic) BOOL hasLtrpEnabled; 
@property (assign,nonatomic) BOOL ltrpEnabled;                                      //@synthesize ltrpEnabled=_ltrpEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPixelFormats; 
@property (assign,nonatomic) unsigned pixelFormats;                                 //@synthesize pixelFormats=_pixelFormats - In the implementation block
+(Class)videoPayloadCollectionsType;
+(unsigned)storePixelFormatsInBitMap:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)rtpSSRC;
-(void)setRtpSSRC:(unsigned)arg1 ;
-(unsigned)tilesPerFrame;
-(BOOL)allowRTCPFB;
-(void)setAllowRTCPFB:(BOOL)arg1 ;
-(void)setPixelFormats:(unsigned)arg1 ;
-(unsigned)customVideoWidth;
-(void)setCustomVideoWidth:(unsigned)arg1 ;
-(unsigned)customVideoHeight;
-(void)setCustomVideoHeight:(unsigned)arg1 ;
-(BOOL)ltrpEnabled;
-(void)setLtrpEnabled:(BOOL)arg1 ;
-(unsigned)pixelFormats;
-(void)setVideoPayloadCollections:(NSMutableArray *)arg1 ;
-(void)addVideoPayloadCollections:(id)arg1 ;
-(unsigned long long)videoPayloadCollectionsCount;
-(void)clearVideoPayloadCollections;
-(id)videoPayloadCollectionsAtIndex:(unsigned long long)arg1 ;
-(void)setHasCustomVideoWidth:(BOOL)arg1 ;
-(BOOL)hasCustomVideoWidth;
-(void)setHasCustomVideoHeight:(BOOL)arg1 ;
-(BOOL)hasCustomVideoHeight;
-(void)setTilesPerFrame:(unsigned)arg1 ;
-(void)setHasTilesPerFrame:(BOOL)arg1 ;
-(BOOL)hasTilesPerFrame;
-(void)setHasLtrpEnabled:(BOOL)arg1 ;
-(BOOL)hasLtrpEnabled;
-(void)setHasPixelFormats:(BOOL)arg1 ;
-(BOOL)hasPixelFormats;
-(NSMutableArray *)videoPayloadCollections;
-(id)initWithSSRC:(unsigned)arg1 allowRTCPFB:(BOOL)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(BOOL)arg5 ;
-(id)initWithScreenSSRC:(unsigned)arg1 allowRTCPFB:(BOOL)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(BOOL)arg5 customVideoWidth:(unsigned)arg6 customVideoHeight:(unsigned)arg7 tilesPerFrame:(unsigned)arg8 ltrpEnabled:(BOOL)arg9 pixelFormats:(id)arg10 ;
-(id)newVideoRuleCollectionsForScreen:(BOOL)arg1 isCellular16x9Capable:(BOOL)arg2 isLocalConfig:(BOOL)arg3 ;
-(id)newFeatureStrings;
-(void)printVideoWithLogFile:(void*)arg1 ;
-(void)printScreenWithLogFile:(void*)arg1 ;
-(BOOL)setVideoRuleCollections:(id)arg1 featureStrings:(id)arg2 isScreen:(BOOL)arg3 isCellular16x9Capable:(BOOL)arg4 ;
-(id)getPayloadSettingsForPayload:(int)arg1 ;
-(void)checkAndInsertRuleWithWidth:(unsigned)arg1 height:(unsigned)arg2 framerate:(int)arg3 payload:(int)arg4 priority:(double)arg5 negotiationBitfield:(unsigned*)arg6 negotiationBit:(unsigned)arg7 rules:(id)arg8 isCellular16x9Capable:(BOOL)arg9 ;
-(id)parameterSetStringFromPayloadSettings:(id)arg1 ;
-(void)prepareFormatString:(id)arg1 format:(id)arg2 formatIndex:(unsigned)arg3 preferredFormat:(unsigned)arg4 ;
@end


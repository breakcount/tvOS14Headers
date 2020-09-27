/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:01 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PBSDisplayMode : NSObject <NSCopying, NSSecureCoding> {

	BOOL _canBeUsedToEstablishDisplayOnNextWake;
	BOOL _promotedToReal;
	BOOL _caModeIsVirtual;
	double _refreshRate;
	long long _SDRColorMapping;
	long long _HDR10ChromaSubsampling;
	long long _SDRChromaSubsampling;
	long long _dynamicRange;
	long long _colorGamut;
	double _scale;
	CGVector _resolution;

}

@property (nonatomic,readonly) long long latencyBandwidth; 
@property (assign,nonatomic) CGVector resolution;                                                         //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) double refreshRate;                                                          //@synthesize refreshRate=_refreshRate - In the implementation block
@property (assign,setter=DRColorMapping,nonatomic) long long SDRColorMapping;                             //@synthesize SDRColorMapping=_SDRColorMapping - In the implementation block
@property (assign,nonatomic) long long HDR10ChromaSubsampling;                                            //@synthesize HDR10ChromaSubsampling=_HDR10ChromaSubsampling - In the implementation block
@property (assign,setter=DRChromaSubsampling,nonatomic) long long SDRChromaSubsampling;                   //@synthesize SDRChromaSubsampling=_SDRChromaSubsampling - In the implementation block
@property (assign,nonatomic) long long dynamicRange;                                                      //@synthesize dynamicRange=_dynamicRange - In the implementation block
@property (assign,nonatomic) long long colorGamut;                                                        //@synthesize colorGamut=_colorGamut - In the implementation block
@property (assign,nonatomic) double scale;                                                                //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL canBeUsedToEstablishDisplayOnNextWake;                                  //@synthesize canBeUsedToEstablishDisplayOnNextWake=_canBeUsedToEstablishDisplayOnNextWake - In the implementation block
@property (assign,nonatomic) BOOL promotedToReal;                                                         //@synthesize promotedToReal=_promotedToReal - In the implementation block
@property (assign,nonatomic) BOOL caModeIsVirtual;                                                        //@synthesize caModeIsVirtual=_caModeIsVirtual - In the implementation block
@property (nonatomic,readonly) BOOL isValidBlackScreenRecoveryMode; 
@property (getter=isAboveBandwidthThreshold,nonatomic,readonly) BOOL aboveBandwithThreshold; 
@property (nonatomic,readonly) BOOL isVirtual; 
@property (nonatomic,readonly) CGSize pointSize; 
@property (nonatomic,readonly) NSString * localizedDisplayString; 
@property (nonatomic,readonly) BOOL isValid; 
+(BOOL)supportsSecureCoding;
+(BOOL)allModesAllowed;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(BOOL)isValid;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(double)refreshRate;
-(long long)colorGamut;
-(void)setRefreshRate:(double)arg1 ;
-(BOOL)isVirtual;
-(id)encodedString;
-(CGVector)resolution;
-(void)setResolution:(CGVector)arg1 ;
-(long long)aspectRatio;
-(CGSize)pointSize;
-(long long)dynamicRange;
-(long long)latencyBandwidth;
-(long long)HDR10ChromaSubsampling;
-(BOOL)isAboveBandwidthThreshold;
-(BOOL)isEqualToPBSDisplayMode:(id)arg1 enforceVirtualCheck:(BOOL)arg2 ;
-(void)_updateColorModeFromCAModeString:(id)arg1 ;
-(void)_updateColorGamutFromCAGamutString:(id)arg1 ;
-(BOOL)_conformsToPineBoardPolicy;
-(long long)SDRColorMapping;
-(long long)SDRChromaSubsampling;
-(BOOL)promotedToReal;
-(BOOL)caModeIsVirtual;
-(id)_SDRColorMappingDescription;
-(id)_chromaSubsamplingDescriptionForChroma:(long long)arg1 ;
-(id)_dynamicRangeDescription;
-(id)initWithEncodedString:(id)arg1 ;
-(void)setSDRColorMapping:(long long)arg1 ;
-(void)setDynamicRange:(long long)arg1 ;
-(void)setSDRChromaSubsampling:(long long)arg1 ;
-(void)setHDR10ChromaSubsampling:(long long)arg1 ;
-(void)setColorGamut:(long long)arg1 ;
-(id)initWithCADisplayMode:(id)arg1 usePineBoardPolicy:(BOOL)arg2 encodedPromotedModes:(id)arg3 ;
-(NSString *)localizedDisplayString;
-(BOOL)isValidBlackScreenRecoveryMode;
-(BOOL)canBeUsedToEstablishDisplayOnNextWake;
-(void)setCanBeUsedToEstablishDisplayOnNextWake:(BOOL)arg1 ;
-(void)setPromotedToReal:(BOOL)arg1 ;
-(void)setCaModeIsVirtual:(BOOL)arg1 ;
-(id)_parseVersionAorBorC:(const char*)arg1 ;
@end

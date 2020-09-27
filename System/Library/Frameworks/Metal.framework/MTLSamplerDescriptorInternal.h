/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLSamplerDescriptor.h>

@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {

	MTLSamplerDescriptorPrivate _private;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)forceResourceIndex;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(const MTLSamplerDescriptorPrivate*)descriptorPrivate;
-(BOOL)lodAverage;
-(void)setLodAverage:(BOOL)arg1 ;
-(unsigned long long)minFilter;
-(void)setMinFilter:(unsigned long long)arg1 ;
-(unsigned long long)magFilter;
-(void)setMagFilter:(unsigned long long)arg1 ;
-(unsigned long long)mipFilter;
-(void)setMipFilter:(unsigned long long)arg1 ;
-(unsigned long long)maxAnisotropy;
-(void)setMaxAnisotropy:(unsigned long long)arg1 ;
-(unsigned long long)sAddressMode;
-(void)setSAddressMode:(unsigned long long)arg1 ;
-(unsigned long long)tAddressMode;
-(void)setTAddressMode:(unsigned long long)arg1 ;
-(unsigned long long)rAddressMode;
-(void)setRAddressMode:(unsigned long long)arg1 ;
-(BOOL)normalizedCoordinates;
-(void)setNormalizedCoordinates:(BOOL)arg1 ;
-(float)lodMinClamp;
-(void)setLodMinClamp:(float)arg1 ;
-(float)lodMaxClamp;
-(void)setLodMaxClamp:(float)arg1 ;
-(float)lodBias;
-(void)setLodBias:(float)arg1 ;
-(unsigned long long)compareFunction;
-(void)setCompareFunction:(unsigned long long)arg1 ;
-(BOOL)supportArgumentBuffers;
-(void)setSupportArgumentBuffers:(BOOL)arg1 ;
@end


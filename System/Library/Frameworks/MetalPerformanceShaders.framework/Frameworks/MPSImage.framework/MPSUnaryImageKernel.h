/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSUnaryImageKernel : MPSKernel {

	SCD_Struct_MP13 _offset;
	SCD_Struct_MP10 _clipRect;
	unsigned long long _edgeMode;
	int _checkFlags;
	/*function pointer*/void* _encode;
	void* _encodeData;
	/*function pointer*/void* _getPreferredTileSize;

}

@property (assign,nonatomic) SCD_Struct_MP13 offset;                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP10 clipRect;                 //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) unsigned long long edgeMode;              //@synthesize edgeMode=_edgeMode - In the implementation block
-(id)debugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(SCD_Struct_MP13)offset;
-(void)setOffset:(SCD_Struct_MP13)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(void)setClipRect:(SCD_Struct_MP10)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setEdgeMode:(unsigned long long)arg1 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(unsigned long long)edgeMode;
-(SCD_Struct_MP10)clipRect;
-(BOOL)encodeToCommandBuffer:(id)arg1 inPlaceTexture:(id*)arg2 fallbackCopyAllocator:(/*^block*/id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
@end

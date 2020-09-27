/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayBinarySecondaryGradientKernel.h>

@interface MPSNDArrayConvolution2DGradientWithWeights : MPSNDArrayBinarySecondaryGradientKernel {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	unsigned long long _strideInPixelsX;
	unsigned long long _strideInPixelsY;
	unsigned long long _groups;
	unsigned long long _dilationRateInX;
	unsigned long long _dilationRateInY;
	unsigned long long _channelMultiplier;
	unsigned _dataFormat;
	unsigned _weightsFormat;
	MPSNDArrayConvolutionOffsets _offsets;

}

@property (nonatomic,readonly) MPSNDArrayConvolutionSizes kernelSizes; 
@property (nonatomic,readonly) MPSNDArrayConvolutionSizes strideInPixels; 
@property (nonatomic,readonly) MPSNDArrayConvolutionSizes dilationRates; 
@property (nonatomic,readonly) unsigned long long inputFeatureChannels;                //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannels;               //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long groups;                              //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) unsigned long long channelMultiplier;                   //@synthesize channelMultiplier=_channelMultiplier - In the implementation block
@property (nonatomic,readonly) unsigned dataFormat;                                    //@synthesize dataFormat=_dataFormat - In the implementation block
@property (nonatomic,readonly) unsigned weightsFormat;                                 //@synthesize weightsFormat=_weightsFormat - In the implementation block
@property (assign,nonatomic) MPSNDArrayConvolutionOffsets offsets; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)groups;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)inputFeatureChannels;
-(unsigned long long)outputFeatureChannels;
-(unsigned long long)channelMultiplier;
-(void)setOffsets:(MPSNDArrayConvolutionOffsets)arg1 ;
-(MPSNDArrayConvolutionOffsets)offsets;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsNotToBeBroadcast;
-(1)dimensionsToBeRetained;
-(2)stridesAtSourceIndex:(unsigned long long)arg1 ;
-(1)destinationStrides;
-(unsigned)dataFormat;
-(unsigned)weightsFormat;
-(MPSNDArrayConvolutionSizes)kernelSizes;
-(MPSNDArrayConvolutionSizes)strideInPixels;
-(MPSNDArrayConvolutionSizes)dilationRates;
-(id)initWithDevice:(id)arg1 ndArrayConvolution2DDescriptor:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@protocol MTLBuffer, MPSCNNConvolutionDataSource;
@interface MPSCNNConvolutionGradient : MPSCNNGradientKernel {

	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;
	unsigned long long _groups;
	unsigned long long _channelMultiplier;
	unsigned long long _gradientOption;
	id<MTLBuffer> _weights;
	BOOL _fullyConnected;
	BOOL _convolutionTranspose;
	unsigned _weightsDataType;
	unsigned _preferredWeightsDataType;
	unsigned _weightsLayout;
	id<MPSCNNConvolutionDataSource> _dataSource;
	opaque_pthread_mutex_t _lock;
	BOOL _serializeWeightsAndBiases;

}

@property (nonatomic,readonly) unsigned long long sourceGradientFeatureChannels;               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceImageFeatureChannels;                  //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long groups;                                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) unsigned long long channelMultiplier;                           //@synthesize channelMultiplier=_channelMultiplier - In the implementation block
@property (nonatomic,retain,readonly) id<MPSCNNConvolutionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long gradientOption;                                //@synthesize gradientOption=_gradientOption - In the implementation block
@property (assign,nonatomic) BOOL serializeWeightsAndBiases;                                   //@synthesize serializeWeightsAndBiases=_serializeWeightsAndBiases - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)groups;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)weights;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(SCD_Struct_MP1*)arg4 secondaryOffset:(SCD_Struct_MP1*)arg5 kernelOffset:(SCD_Struct_MP1*)arg6 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned)weightsLayout;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 ;
-(unsigned long long)encodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(unsigned long long)batchEncodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)initialize:(id)arg1 convDesc:(id)arg2 weights:(void*)arg3 dataType:(unsigned)arg4 weightsLayout:(unsigned)arg5 fullyConnected:(BOOL)arg6 convolutionTranspose:(BOOL)arg7 preferredWeightsDataType:(unsigned)arg8 ;
-(void)initialize:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 convolutionTranspose:(BOOL)arg4 ;
-(unsigned)weightsDataType;
-(id<MPSCNNConvolutionDataSource>)dataSource;
-(BOOL)convolutionTranspose;
-(id)PeakAtWeightsWithConvolutionGradientState:(id)arg1 ;
-(unsigned)preferredWeightsDataType;
-(BOOL)filterHandlesPlugin;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(BOOL)arg3 ;
-(id)initWithDevice:(id)arg1 weights:(id)arg2 convolutionTranspose:(BOOL)arg3 ;
-(void)reloadWeightsAndBiasesFromDataSource;
-(void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2 ;
-(id)biases;
-(id)PeakAtWeightsWithConvolutionTransposeGradientState:(id)arg1 ;
-(unsigned long long)sourceGradientFeatureChannels;
-(unsigned long long)sourceImageFeatureChannels;
-(unsigned long long)channelMultiplier;
-(unsigned long long)gradientOption;
-(void)setGradientOption:(unsigned long long)arg1 ;
-(BOOL)serializeWeightsAndBiases;
-(void)setSerializeWeightsAndBiases:(BOOL)arg1 ;
@end


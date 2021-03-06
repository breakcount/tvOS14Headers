/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@protocol MPSNNPadding;
@interface MPSNNMultiaryGradientState : MPSState {

	unsigned long long _srcCount;
	NNKernelSourceParams* _srcInfo;
	MPSImageCoordinate* _srcSizes;
	SCD_Struct_MP4 _clipRect;
	MPSImageCoordinate _destSize;
	unsigned long long _destFeatureChannels;
	unsigned long long _destinationFeatureChannelOffset;
	id<MPSNNPadding> _padding;
	unsigned long long _maxBatchSize;
	BOOL _isBackwards;
	BOOL _initOnce;
	unsigned _provenance;

}
-(void)dealloc;
-(id)initWithSourceCount:(unsigned long long)arg1 ;
@end


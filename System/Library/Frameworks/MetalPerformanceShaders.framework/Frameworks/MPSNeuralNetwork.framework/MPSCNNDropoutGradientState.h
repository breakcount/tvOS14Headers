/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientState.h>

@protocol MTLBuffer;
@interface MPSCNNDropoutGradientState : MPSNNGradientState {

	MPSImageCoordinate _maskStrideInPixels;
	float _keepProbability;
	unsigned long long _resourcePixelFormat;
	MPSImageCoordinate _resourceSize;
	unsigned long long _commonBufferOffsetBytes;
	id<MTLBuffer> _commonMaskBuffer;

}
-(id)init;
-(void)dealloc;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id)maskData;
@end


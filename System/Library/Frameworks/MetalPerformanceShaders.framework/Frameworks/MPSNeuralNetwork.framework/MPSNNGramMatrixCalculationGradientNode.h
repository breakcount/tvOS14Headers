/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSNNGramMatrixCalculationGradientNode : MPSNNGradientFilterNode {

	float _alpha;

}

@property (nonatomic,readonly) float alpha;              //@synthesize alpha=_alpha - In the implementation block
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 ;
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 alpha:(float)arg4 ;
-(float)alpha;
-(FilterGraphNode*)newFilterNode;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 ;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 alpha:(float)arg4 ;
@end


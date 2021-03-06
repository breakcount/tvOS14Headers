/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>
#import <MPSNeuralNetwork/MPSNNTrainableNode.h>

@class NSString;

@interface MPSCNNBatchNormalizationGradientNode : MPSNNGradientFilterNode <MPSNNTrainableNode> {

	unsigned long long _trainingStyle;

}

@property (assign,nonatomic) unsigned long long trainingStyle;              //@synthesize trainingStyle=_trainingStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 ;
-(FilterGraphNode*)newFilterNode;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 ;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(unsigned long long)trainingStyle;
-(void)setTrainingStyle:(unsigned long long)arg1 ;
@end


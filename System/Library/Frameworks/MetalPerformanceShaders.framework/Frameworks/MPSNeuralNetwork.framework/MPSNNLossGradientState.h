/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@class MPSCNNLossLabels;

@interface MPSNNLossGradientState : MPSNNGradientState {

	float _weight;
	float _labelSmoothing;
	float _epsilon;
	float _delta;
	MPSCNNLossLabels* _lossLabels;

}
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithResource:(id)arg1 ;
@end


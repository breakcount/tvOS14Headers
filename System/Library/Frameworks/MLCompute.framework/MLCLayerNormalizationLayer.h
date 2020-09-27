/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@class NSArray, MLCTensor, MLCTensorParameter;

@interface MLCLayerNormalizationLayer : MLCLayer {

	float _varianceEpsilon;
	NSArray* _normalizedShape;
	MLCTensor* _beta;
	MLCTensor* _gamma;
	MLCTensorParameter* _betaParameter;
	MLCTensorParameter* _gammaParameter;

}

@property (nonatomic,copy,readonly) NSArray * normalizedShape;                          //@synthesize normalizedShape=_normalizedShape - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * beta;                                 //@synthesize beta=_beta - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * gamma;                                //@synthesize gamma=_gamma - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * betaParameter;               //@synthesize betaParameter=_betaParameter - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * gammaParameter;              //@synthesize gammaParameter=_gammaParameter - In the implementation block
@property (nonatomic,readonly) float varianceEpsilon;                                   //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
+(id)layerWithNormalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 ;
-(id)description;
-(MLCTensor *)gamma;
-(MLCTensor *)beta;
-(float)varianceEpsilon;
-(MLCTensorParameter *)betaParameter;
-(MLCTensorParameter *)gammaParameter;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)allocateDataForOptimizer:(id)arg1 ;
-(unsigned long long)allocatedDataSizeForTraining:(BOOL)arg1 optimizer:(id)arg2 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(BOOL)isValidTrainingParameters;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(NSArray *)normalizedShape;
-(id)initWithNormalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 ;
@end

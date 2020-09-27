/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCGPUDeviceOps.h>

@class NSArray;

@interface MLCLayerNormGPUDeviceOps : MLCGPUDeviceOps {

	float _varianceEpsilon;
	NSArray* _normalizedShape;
	id _layerNormGammaGradient;
	id _layerNormBetaGradient;
	id _layerNormInverseSqrtVariance;
	id _layerNormInputNormalized;

}

@property (nonatomic,retain) NSArray * normalizedShape;                    //@synthesize normalizedShape=_normalizedShape - In the implementation block
@property (assign,nonatomic) float varianceEpsilon;                        //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (nonatomic,retain) id layerNormGammaGradient;                    //@synthesize layerNormGammaGradient=_layerNormGammaGradient - In the implementation block
@property (nonatomic,retain) id layerNormBetaGradient;                     //@synthesize layerNormBetaGradient=_layerNormBetaGradient - In the implementation block
@property (nonatomic,retain) id layerNormInverseSqrtVariance;              //@synthesize layerNormInverseSqrtVariance=_layerNormInverseSqrtVariance - In the implementation block
@property (nonatomic,retain) id layerNormInputNormalized;                  //@synthesize layerNormInputNormalized=_layerNormInputNormalized - In the implementation block
+(id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(float)varianceEpsilon;
-(id)layerNormBetaGradient;
-(id)layerNormGammaGradient;
-(id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2 ;
-(void)setNormalizedShape:(NSArray *)arg1 ;
-(void)setVarianceEpsilon:(float)arg1 ;
-(void)setLayerNormGammaGradient:(id)arg1 ;
-(void)setLayerNormBetaGradient:(id)arg1 ;
-(NSArray *)normalizedShape;
-(id)layerNormInputNormalized;
-(void)setLayerNormInputNormalized:(id)arg1 ;
-(id)layerNormInverseSqrtVariance;
-(void)setLayerNormInverseSqrtVariance:(id)arg1 ;
@end


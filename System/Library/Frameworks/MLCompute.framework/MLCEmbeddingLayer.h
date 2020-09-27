/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@class MLCEmbeddingDescriptor, MLCTensor, MLCTensorParameter;

@interface MLCEmbeddingLayer : MLCLayer {

	MLCEmbeddingDescriptor* _descriptor;
	MLCTensor* _weights;
	MLCTensorParameter* _weightsParameter;

}

@property (nonatomic,copy,readonly) MLCEmbeddingDescriptor * descriptor;                  //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * weights;                                //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * weightsParameter;              //@synthesize weightsParameter=_weightsParameter - In the implementation block
+(id)layerWithDescriptor:(id)arg1 weights:(id)arg2 ;
+(BOOL)supportsDataType:(int)arg1 onDevice:(id)arg2 ;
-(id)description;
-(MLCEmbeddingDescriptor *)descriptor;
-(MLCTensor *)weights;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)allocateDataForOptimizer:(id)arg1 ;
-(unsigned long long)allocatedDataSizeForTraining:(BOOL)arg1 optimizer:(id)arg2 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(id)resultTensorFromSources:(id)arg1 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(MLCTensorParameter *)weightsParameter;
-(void)allocateGradientsForParameters;
-(id)initWithDescriptor:(id)arg1 weight:(id)arg2 ;
@end

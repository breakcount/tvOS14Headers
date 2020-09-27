/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSMatrix, MPSImage;

@interface MPSCNNLoss : MPSCNNKernel {

	unsigned _lossType;
	int _reductionType;
	BOOL _reduceAcrossBatch;
	float _weight;
	float _labelSmoothing;
	unsigned long long _numberOfClasses;
	float _epsilon;
	float _delta;
	MPSMatrix* _reductionBuffer;
	MPSImage* _firstLossImage;

}

@property (assign,nonatomic) float weight;                                      //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) unsigned lossType;                               //@synthesize lossType=_lossType - In the implementation block
@property (nonatomic,readonly) int reductionType;                               //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) float labelSmoothing;                            //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClasses;              //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (nonatomic,readonly) float epsilon;                                   //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) float delta;                                     //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) BOOL reduceAcrossBatch;                          //@synthesize reduceAcrossBatch=_reduceAcrossBatch - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)epsilon;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(float)delta;
-(id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2 ;
-(unsigned)lossType;
-(int)reductionType;
-(float)labelSmoothing;
-(unsigned long long)numberOfClasses;
-(BOOL)reduceAcrossBatch;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 destinationImages:(id)arg4 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 ;
@end

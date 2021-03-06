/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayInitialization.h>

@interface MPSNDArrayInitializationTruncatedNormal : MPSNDArrayInitialization {

	float _mean;
	float _standardDeviation;

}

@property (nonatomic,readonly) float mean;                           //@synthesize mean=_mean - In the implementation block
@property (nonatomic,readonly) float standardDeviation;              //@synthesize standardDeviation=_standardDeviation - In the implementation block
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(float)mean;
-(float)standardDeviation;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(unsigned long long)kernelDimensionalityForDestinationArray:(id)arg1 ;
-(id)initWithDevice:(id)arg1 mean:(float)arg2 standardDeviation:(float)arg3 seed:(unsigned long long)arg4 ;
@end


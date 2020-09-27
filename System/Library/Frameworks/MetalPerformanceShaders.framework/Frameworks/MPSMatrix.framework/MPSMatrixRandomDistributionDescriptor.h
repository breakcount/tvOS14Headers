/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSMatrixRandomDistributionDescriptor : NSObject <NSCopying> {

	float _minimum;
	float _maximum;
	float _mean;
	float _standardDeviation;
	unsigned long long _distributionType;

}

@property (assign,nonatomic) unsigned long long distributionType;              //@synthesize distributionType=_distributionType - In the implementation block
@property (assign,nonatomic) float minimum;                                    //@synthesize minimum=_minimum - In the implementation block
@property (assign,nonatomic) float maximum;                                    //@synthesize maximum=_maximum - In the implementation block
@property (assign,nonatomic) float mean;                                       //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) float standardDeviation;                          //@synthesize standardDeviation=_standardDeviation - In the implementation block
+(id)uniformDistributionDescriptorWithMinimum:(float)arg1 maximum:(float)arg2 ;
+(id)normalDistributionDescriptorWithMean:(float)arg1 standardDeviation:(float)arg2 ;
+(id)normalDistributionDescriptorWithMean:(float)arg1 standardDeviation:(float)arg2 minimum:(float)arg3 maximum:(float)arg4 ;
+(id)defaultDistributionDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)minimum;
-(void)setMinimum:(float)arg1 ;
-(float)maximum;
-(void)setMaximum:(float)arg1 ;
-(unsigned long long)distributionType;
-(void)setDistributionType:(unsigned long long)arg1 ;
-(float)mean;
-(void)setMean:(float)arg1 ;
-(float)standardDeviation;
-(void)setStandardDeviation:(float)arg1 ;
@end


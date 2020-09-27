/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/MPSCNNBatchNormalizationDataSource.h>

@class MLCTensor, NSString;

@interface _MLCGPUBatchNormDataSource : NSObject <MPSCNNBatchNormalizationDataSource> {

	float _varianceEpsilon;
	unsigned long long _channels;
	MLCTensor* _means;
	MLCTensor* _variances;
	MLCTensor* _betas;
	MLCTensor* _gammas;

}

@property (nonatomic,readonly) unsigned long long channels;               //@synthesize channels=_channels - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * means;                  //@synthesize means=_means - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * variances;              //@synthesize variances=_variances - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * betas;                  //@synthesize betas=_betas - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * gammas;                 //@synthesize gammas=_gammas - In the implementation block
@property (nonatomic,readonly) float varianceEpsilon;                     //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)datasourceWithChannels:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 epsilon:(float)arg6 ;
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)purge;
-(float)epsilon;
-(unsigned long long)channels;
-(float*)gamma;
-(float*)mean;
-(float*)beta;
-(unsigned long long)numberOfFeatureChannels;
-(float*)variance;
-(MLCTensor *)betas;
-(MLCTensor *)gammas;
-(float)varianceEpsilon;
-(id)initWithChannels:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 epsilon:(float)arg6 ;
-(MLCTensor *)means;
-(MLCTensor *)variances;
@end


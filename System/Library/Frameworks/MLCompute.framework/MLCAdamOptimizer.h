/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCOptimizer.h>
#import <MLCompute/MLCOptimizerCompiling.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MLCOptimizerDescriptor, NSString;

@interface MLCAdamOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying> {

	float _beta1;
	float _beta2;
	float _epsilon;
	unsigned long long _timeStep;
	MLCOptimizerDescriptor* _optimizerDescriptor;

}

@property (nonatomic,readonly) MLCOptimizerDescriptor * optimizerDescriptor;              //@synthesize optimizerDescriptor=_optimizerDescriptor - In the implementation block
@property (assign,nonatomic) unsigned long long timeStep;                                 //@synthesize timeStep=_timeStep - In the implementation block
@property (nonatomic,readonly) float beta1;                                               //@synthesize beta1=_beta1 - In the implementation block
@property (nonatomic,readonly) float beta2;                                               //@synthesize beta2=_beta2 - In the implementation block
@property (nonatomic,readonly) float epsilon;                                             //@synthesize epsilon=_epsilon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)optimizerWithDescriptor:(id)arg1 ;
+(id)optimizerWithDescriptor:(id)arg1 beta1:(float)arg2 beta2:(float)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(float)epsilon;
-(float)beta1;
-(float)beta2;
-(unsigned long long)timeStep;
-(void)setTimeStep:(unsigned long long)arg1 ;
-(BOOL)compileForDevice:(id)arg1 ;
-(MLCOptimizerDescriptor *)optimizerDescriptor;
-(id)initWithDescriptor:(id)arg1 beta1:(float)arg2 beta2:(float)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5 ;
@end


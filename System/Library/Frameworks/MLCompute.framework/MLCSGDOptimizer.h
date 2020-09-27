/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCompute-Structs.h>
#import <MLCompute/MLCOptimizer.h>
#import <MLCompute/MLCOptimizerCompiling.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MLCOptimizerDescriptor, NSString;

@interface MLCSGDOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying> {

	BOOL _usesNesterovMomentum;
	float _momentumScale;
	MLCOptimizerDescriptor* _optimizerDescriptor;

}

@property (nonatomic,readonly) MLCOptimizerDescriptor * optimizerDescriptor;              //@synthesize optimizerDescriptor=_optimizerDescriptor - In the implementation block
@property (nonatomic,readonly) float momentumScale;                                       //@synthesize momentumScale=_momentumScale - In the implementation block
@property (nonatomic,readonly) BOOL usesNesterovMomentum;                                 //@synthesize usesNesterovMomentum=_usesNesterovMomentum - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)optimizerWithDescriptor:(id)arg1 ;
+(id)optimizerWithDescriptor:(id)arg1 momentumScale:(float)arg2 usesNestrovMomentum:(BOOL)arg3 ;
+(id)optimizerWithDescriptor:(id)arg1 momentumScale:(float)arg2 usesNesterovMomentum:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(float)momentumScale;
-(BOOL)compileForDevice:(id)arg1 ;
-(id)initWithMomentumScale:(float)arg1 useNesterovMomentum:(BOOL)arg2 optimizerDescriptor:(id)arg3 ;
-(BOOL)usesNesterovMomentum;
-(MLCOptimizerDescriptor *)optimizerDescriptor;
-(BOOL)usesNestrovMomentum;
@end

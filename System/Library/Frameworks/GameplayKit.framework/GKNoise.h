/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary;

@interface GKNoise : NSObject {

	NSMutableArray* _modules;
	NSDictionary* _gradientColors;

}

@property (nonatomic,copy) NSDictionary * gradientColors;              //@synthesize gradientColors=_gradientColors - In the implementation block
+(id)noiseWithNoiseSource:(id)arg1 ;
+(id)noiseWithComponentNoises:(id)arg1 selectionNoise:(id)arg2 componentBoundaries:(id)arg3 boundaryBlendDistances:(id)arg4 ;
+(id)noiseWithNoiseSource:(id)arg1 gradientColors:(id)arg2 ;
+(id)noiseWithComponentNoises:(id)arg1 selectionNoise:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invert;
-(void)scaleBy:;
-(NSDictionary *)gradientColors;
-(void)setGradientColors:(NSDictionary *)arg1 ;
-(id)__modules;
-(float)valueAtPosition:;
-(id)initWithNoiseSource:(id)arg1 ;
-(id)initWithNoiseSource:(id)arg1 gradientColors:(id)arg2 ;
-(void)multiplyWithNoise:(id)arg1 ;
-(void)addWithNoise:(id)arg1 ;
-(void)__blendWithNoise:(id)arg1 selectionNoise:(id)arg2 selectionRangeLowerBound:(double)arg3 selectionRangeUpperBound:(double)arg4 selectionBoundaryBlendDistance:(double)arg5 ;
-(id)cloneRecursive:(id)arg1 ;
-(void)cacheUnaryModule:(id)arg1 ;
-(void)cacheBinaryModule:(id)arg1 rhsNoise:(id)arg2 ;
-(void)cacheQuaternaryModule:(id)arg1 xDisplacementNoise:(id)arg2 yDisplacementNoise:(id)arg3 zDisplacementNoise:(id)arg4 ;
-(void)cacheTernaryModule:(id)arg1 rhsNoise:(id)arg2 selectionNoise:(id)arg3 ;
-(void)applyAbsoluteValue;
-(void)clampWithLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(void)raiseToPower:(double)arg1 ;
-(void)applyTurbulenceWithFrequency:(double)arg1 power:(double)arg2 roughness:(int)arg3 seed:(int)arg4 ;
-(void)remapValuesToCurveWithControlPoints:(id)arg1 ;
-(void)remapValuesToTerracesWithPeaks:(id)arg1 terracesInverted:(BOOL)arg2 ;
-(void)moveBy:;
-(void)rotateBy:;
-(void)minimumWithNoise:(id)arg1 ;
-(void)maximumWithNoise:(id)arg1 ;
-(void)raiseToPowerWithNoise:(id)arg1 ;
-(void)displaceXWithNoise:(id)arg1 yWithNoise:(id)arg2 zWithNoise:(id)arg3 ;
@end


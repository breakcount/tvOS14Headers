/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDynamicAnimation.h>

@interface _UIDynamicValueConvergenceAnimation : _UIDynamicAnimation {

	/*^block*/id _applier;
	double _value;
	double _targetValue;
	double _convergenceRate;
	double _minimumDifference;

}

@property (assign,nonatomic) double value;                          //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double targetValue;                    //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) double convergenceRate;                //@synthesize convergenceRate=_convergenceRate - In the implementation block
@property (assign,nonatomic) double minimumDifference;              //@synthesize minimumDifference=_minimumDifference - In the implementation block
-(double)value;
-(void)setValue:(double)arg1 ;
-(double)targetValue;
-(void)setTargetValue:(double)arg1 ;
-(void)runWithValueApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_animateForInterval:(double)arg1 ;
-(id)initWithValue:(double)arg1 targetValue:(double)arg2 convergenceRate:(double)arg3 minimumDifference:(double)arg4 ;
-(double)convergenceRate;
-(void)setConvergenceRate:(double)arg1 ;
-(double)minimumDifference;
-(void)setMinimumDifference:(double)arg1 ;
@end


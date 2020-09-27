/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewSpringAnimationBehaviorDescribing.h>

@interface UIViewSpringAnimationBehavior : NSObject <UIViewSpringAnimationBehaviorDescribing> {

	double _trackingDampingRatio;
	double _trackingResponse;
	double _dampingRatio;
	double _response;
	double _dampingRatioSmoothing;
	double _responseSmoothing;
	double _inertialTargetSmoothing;
	double _inertialProjectionDeceleration;

}

@property (assign,nonatomic) double inertialTargetSmoothing;                     //@synthesize inertialTargetSmoothing=_inertialTargetSmoothing - In the implementation block
@property (assign,nonatomic) double inertialProjectionDeceleration;              //@synthesize inertialProjectionDeceleration=_inertialProjectionDeceleration - In the implementation block
-(id)init;
-(SCD_Struct_UI147)parametersForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)setDampingRatio:(double)arg1 response:(double)arg2 ;
-(void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 dampingRatioSmoothing:(double)arg3 responseSmoothing:(double)arg4 ;
-(double)inertialTargetSmoothing;
-(void)setInertialTargetSmoothing:(double)arg1 ;
-(double)inertialProjectionDeceleration;
-(void)setInertialProjectionDeceleration:(double)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class NSArray, CAMediaTimingFunction;

@interface SHTaggingViewInnerCirclesLayer : CALayer {

	NSArray* _innerCircleLayers;

}

@property (nonatomic,retain) NSArray * innerCircleLayers;                                    //@synthesize innerCircleLayers=_innerCircleLayers - In the implementation block
@property (nonatomic,readonly) CAMediaTimingFunction * inOutSineTimingFunction; 
@property (nonatomic,readonly) CAMediaTimingFunction * linearTimingFunction; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSublayers;
-(CAMediaTimingFunction *)linearTimingFunction;
-(void)setupSublayers;
-(id)buildInnerCircleLayers;
-(void)setInnerCircleLayers:(NSArray *)arg1 ;
-(NSArray *)innerCircleLayers;
-(void)addCoreAnimationToInnerCircleLayer:(id)arg1 withStartOffset:(double)arg2 ;
-(void)addScaleNullAnimationToInnerCircleLayer:(id)arg1 ;
-(id)innerCircleCoreAnimation;
-(id)innerCircleScaleNullAnimation;
-(CAMediaTimingFunction *)inOutSineTimingFunction;
-(void)startTaggingAnimation;
@end


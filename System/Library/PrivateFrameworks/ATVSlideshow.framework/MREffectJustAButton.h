/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@interface MREffectJustAButton : MREffect {

	BOOL mIsPressed;
	BOOL mIsSet;

}
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)setLiveAttributes:(id)arg1 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
@end


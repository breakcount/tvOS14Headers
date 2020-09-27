/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MZEffectTiming.h>

@class NSString, NSArray;

@interface MREffectOrigamiTiming : NSObject <MZEffectTiming> {

	NSString* _effectID;
	NSArray* _description;
	NSArray* _animationTimeBounds;
	double _durationStretchFactor;
	double _slideTimings[8][2];
	double _phaseInDuration;
	double _mainDuration;
	double _phaseOutDuration;
	double _defaultPhaseInDuration;
	double _defaultMainDuration;
	double _defaultPhaseOutDuration;

}

@property (nonatomic,readonly) double phaseInDuration;               //@synthesize phaseInDuration=_phaseInDuration - In the implementation block
@property (nonatomic,readonly) double mainDuration;                  //@synthesize mainDuration=_mainDuration - In the implementation block
@property (nonatomic,readonly) double phaseOutDuration;              //@synthesize phaseOutDuration=_phaseOutDuration - In the implementation block
-(void)dealloc;
-(id)initWithEffectID:(id)arg1 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)mainDuration;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(double)lowestDisplayTime;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1 ;
@end


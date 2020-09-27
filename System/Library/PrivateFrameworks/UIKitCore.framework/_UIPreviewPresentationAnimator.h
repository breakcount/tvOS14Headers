/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction, CADisplayLink;

@interface _UIPreviewPresentationAnimator : NSObject {

	double _duration;
	CAMediaTimingFunction* _mediaTimingFunction;
	double _startMediaTime;
	/*^block*/id _advanceBlock;
	CADisplayLink* _displayLink;

}

@property (assign,nonatomic) double duration;                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * mediaTimingFunction;              //@synthesize mediaTimingFunction=_mediaTimingFunction - In the implementation block
@property (assign,nonatomic) double startMediaTime;                                    //@synthesize startMediaTime=_startMediaTime - In the implementation block
@property (nonatomic,copy) id advanceBlock;                                            //@synthesize advanceBlock=_advanceBlock - In the implementation block
@property (assign,nonatomic,__weak) CADisplayLink * displayLink;                       //@synthesize displayLink=_displayLink - In the implementation block
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)stopAnimation;
-(CAMediaTimingFunction *)mediaTimingFunction;
-(void)setMediaTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setStartMediaTime:(double)arg1 ;
-(void)setAdvanceBlock:(id)arg1 ;
-(void)_advanceFromDisplayLink:(id)arg1 ;
-(double)startMediaTime;
-(id)advanceBlock;
-(id)initWithDuration:(double)arg1 advanceBlock:(/*^block*/id)arg2 ;
@end


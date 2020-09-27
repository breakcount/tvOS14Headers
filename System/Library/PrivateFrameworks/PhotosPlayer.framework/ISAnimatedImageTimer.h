/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISObservable.h>

@class CADisplayLink, _ISAnimatedImageTimerForwardingProxy;

@interface ISAnimatedImageTimer : ISObservable {

	CADisplayLink* _displayLink;
	_ISAnimatedImageTimerForwardingProxy* _displayLinkProxy;
	double _timestamp;

}

@property (assign,setter=_setTimestamp:,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)sharedTimer;
-(id)init;
-(void)dealloc;
-(double)timestamp;
-(id)mutableChangeObject;
-(void)hasObserversDidChange;
-(void)_updateDisplayLink;
-(void)_fireTimerWithInterval:(double)arg1 ;
-(void)_setTimestamp:(double)arg1 ;
-(void)_iosInitialization;
-(void)_iosUpdateDisplayLink;
-(void)_iosAnimationTimerFired:(id)arg1 ;
-(void)_iosDealloc;
@end


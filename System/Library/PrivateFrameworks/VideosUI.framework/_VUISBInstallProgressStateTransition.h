/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/_VUISBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _VUISBInstallProgressStateTransition : _VUISBIconProgressTransition {

	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	long long _fromState;
	long long _toState;
	double _fraction;

}
+(id)newTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
+(Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)dealloc;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(BOOL)isCompleteWithView:(id)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(id)_initWithFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_updateView:(id)arg1 ;
@end


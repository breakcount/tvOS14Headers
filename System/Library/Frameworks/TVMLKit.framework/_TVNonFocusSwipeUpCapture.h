/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UIPanGestureRecognizer, NSString;

@interface _TVNonFocusSwipeUpCapture : NSObject <UIGestureRecognizerDelegate> {

	UIView* _initiallyFocusedView;
	CGPoint _translation;
	CGPoint _velocity;
	UIPanGestureRecognizer* _gestureRecognizer;
	id _target;
	SEL _action;

}

@property (nonatomic,readonly) UIPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,__weak,readonly) id target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                                              //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)target;
-(SEL)action;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)_onPan:(id)arg1 ;
@end


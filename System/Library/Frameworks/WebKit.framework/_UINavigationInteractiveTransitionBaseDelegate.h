/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UINavigationInteractiveTransitionBaseDelegate <NSObject>
@required
-(void)startInteractiveTransition:(id)arg1;
-(BOOL)shouldBeginInteractiveTransition:(id)arg1;
-(BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3;
-(BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
-(id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3;

@end


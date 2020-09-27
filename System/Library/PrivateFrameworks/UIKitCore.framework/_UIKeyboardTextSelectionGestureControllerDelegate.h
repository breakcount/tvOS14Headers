/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;


@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
@optional
-(BOOL)hasMarkedText;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3;
-(void)setTwoFingerTapTimestamp:(double)arg1;
-(double)timestampOfLastTouchesEnded;
-(BOOL)transitionInProgress;
-(void)willBeginGesture;
-(void)didEndGesture;
-(BOOL)shouldAllowTwoFingerSelectionGestureOnView:(id)arg1;

@required
-(UIKeyboardTaskQueue *)taskQueue;
-(_UIKeyboardTextSelectionController *)textSelectionController;

@end

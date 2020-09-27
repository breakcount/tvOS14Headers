/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKeyboardTextSelectionController.h>

@interface _UIKeyboardAsyncTextSelectionController : _UIKeyboardTextSelectionController {

	BOOL _shouldDelayShowSelectionCommands;

}
-(void)showSelectionCommands;
-(void)selectPositionAtPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)selectPositionAtPoint:(CGPoint)arg1 granularity:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showSelectionView;
-(BOOL)cursorPositionIsContainedByRange:(id)arg1 ;
-(CGRect)caretRectForLeftmostSelectedPosition;
-(CGRect)caretRectForRightmostSelectedPosition;
-(BOOL)shouldAllowSelectionGestureWithTouchType:(long long)arg1 atPoint:(CGPoint)arg2 toProgressToState:(long long)arg3 ;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(void)setRangedSelectionShouldShowGrabbers:(BOOL)arg1 ;
-(void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
@end


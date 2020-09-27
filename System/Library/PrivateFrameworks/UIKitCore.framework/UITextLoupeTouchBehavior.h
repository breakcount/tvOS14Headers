/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextLoupeInteractionBehaviorDelegate.h>

@class UITextRange, _UIKeyboardTextSelectionController, NSString;

@interface UITextLoupeTouchBehavior : NSObject <UITextLoupeInteractionBehaviorDelegate> {

	BOOL _isShiftKeyBeingHeld;
	UITextRange* _originalTextRange;
	_UIKeyboardTextSelectionController* _activeSelectionController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_allowsPaintSelectionForLoupeInteraction:(id)arg1 ;
-(Class)gestureRecognizerClassForLoupeInteraction:(id)arg1 ;
-(void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1 ;
-(void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1 ;
-(void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2 ;
-(BOOL)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(BOOL)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2 ;
-(BOOL)usesTouchAlignment;
-(CGPoint)startPointForLoupeGesture:(id)arg1 ;
-(CGPoint)translationInView:(id)arg1 forLoupeGesture:(id)arg2 ;
-(CGPoint)velocityInView:(id)arg1 forLoupeGesture:(id)arg2 ;
-(void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(/*^block*/id)arg3 translation:(/*^block*/id)arg4 velocity:(/*^block*/id)arg5 modifierFlags:(long long)arg6 shouldCancel:(BOOL*)arg7 ;
@end


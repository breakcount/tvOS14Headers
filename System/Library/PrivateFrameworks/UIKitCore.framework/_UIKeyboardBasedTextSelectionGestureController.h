/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIKeyboardTextSelectionGestureController.h>

@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController {

	BOOL _delayForceMagnify;
	BOOL _didLongForcePress;

}

@property (assign,nonatomic) BOOL delayForceMagnify;              //@synthesize delayForceMagnify=_delayForceMagnify - In the implementation block
@property (assign,nonatomic) BOOL didLongForcePress;              //@synthesize didLongForcePress=_didLongForcePress - In the implementation block
+(id)sharedInstance;
-(BOOL)oneFingerForcePressShouldFailWithoutForce;
-(BOOL)oneFingerForcePressShouldCancelTouchesInView;
-(double)oneFingerForcePressMinimumDuration;
-(void)_cleanupDeadGesturesIfNecessary;
-(Class)textInteractionClass;
-(BOOL)allowOneFingerDeepPress;
-(void)setDidLongForcePress:(BOOL)arg1 ;
-(void)setDelayForceMagnify:(BOOL)arg1 ;
-(BOOL)delayForceMagnify;
-(BOOL)didLongForcePress;
@end


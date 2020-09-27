/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UISwitchMVEGestureTrackingSessionElement;
@class UIView, UIGestureRecognizer;

@interface UISwitchMVEGestureTrackingSession : NSObject {

	BOOL _displayedOnValue;
	BOOL _pendingDisplayedOnValue;
	BOOL _lastCommitedOnValue;
	UIView*<UISwitchMVEGestureTrackingSessionElement> _visualElement;
	double _naturalLayoutDirection;
	double _movementVectorForPanInitiatedChangeY;
	double _movementVectorForPanInitiatedChangeTargetOnValue;
	UIGestureRecognizer* _pendingDisplayedOnValueInitiatingGesture;

}

@property (nonatomic,readonly) double naturalLayoutDirection;                                                     //@synthesize naturalLayoutDirection=_naturalLayoutDirection - In the implementation block
@property (nonatomic,readonly) double movementVectorForPanInitiatedChangeY;                                       //@synthesize movementVectorForPanInitiatedChangeY=_movementVectorForPanInitiatedChangeY - In the implementation block
@property (nonatomic,readonly) double movementVectorForPanInitiatedChangeTargetOnValue;                           //@synthesize movementVectorForPanInitiatedChangeTargetOnValue=_movementVectorForPanInitiatedChangeTargetOnValue - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * pendingDisplayedOnValueInitiatingGesture;                    //@synthesize pendingDisplayedOnValueInitiatingGesture=_pendingDisplayedOnValueInitiatingGesture - In the implementation block
@property (nonatomic,readonly) BOOL pendingDisplayedOnValue;                                                      //@synthesize pendingDisplayedOnValue=_pendingDisplayedOnValue - In the implementation block
@property (nonatomic,readonly) BOOL lastCommitedOnValue;                                                          //@synthesize lastCommitedOnValue=_lastCommitedOnValue - In the implementation block
@property (assign,nonatomic,__weak) UIView*<UISwitchMVEGestureTrackingSessionElement> visualElement;              //@synthesize visualElement=_visualElement - In the implementation block
@property (assign,nonatomic) BOOL displayedOnValue;                                                               //@synthesize displayedOnValue=_displayedOnValue - In the implementation block
+(BOOL)gestureIsInEndState:(long long)arg1 ;
-(void)reset;
-(UIView*<UISwitchMVEGestureTrackingSessionElement>)visualElement;
-(void)setVisualElement:(UIView*<UISwitchMVEGestureTrackingSessionElement>)arg1 ;
-(void)_updateMovementVectorForPanInitiatedChanges;
-(void)setPendingDisplayedOnValue:(BOOL)arg1 forGesture:(id)arg2 ;
-(BOOL)_isMovementDirectionAndMagnitudeEnoughToPerformOnOffChange:(double)arg1 ;
-(void)_applyPendingChangesIfNecessary;
-(void)_sendStateChangeActionsIfNecessary;
-(BOOL)pendingDisplayedOnValueIsValid;
-(BOOL)_isMovementDirectionTrackableForPossibleOnOffChange:(double)arg1 ;
-(id)initWithVisualElement:(id)arg1 ;
-(void)setDisplayedOnValue:(BOOL)arg1 ;
-(void)invalidatePendingOnValue;
-(BOOL)updatePendingDisplayedOnValueIfMovementIsEnoughToInitiateChange:(double)arg1 forGesture:(id)arg2 ;
-(BOOL)canApplyPendingOnValueForGesture:(id)arg1 ;
-(void)applyPendingDisplayedOnValueAndSendActions;
-(void)applyPendingDisplayedOnValueWithoutSendingActions;
-(BOOL)displayedOnValue;
-(double)naturalLayoutDirection;
-(double)movementVectorForPanInitiatedChangeY;
-(double)movementVectorForPanInitiatedChangeTargetOnValue;
-(UIGestureRecognizer *)pendingDisplayedOnValueInitiatingGesture;
-(BOOL)pendingDisplayedOnValue;
-(BOOL)lastCommitedOnValue;
@end


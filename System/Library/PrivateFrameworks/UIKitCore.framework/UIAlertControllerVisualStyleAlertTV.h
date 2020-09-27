/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAlertControllerVisualStyleAlert.h>

@interface UIAlertControllerVisualStyleAlertTV : UIAlertControllerVisualStyleAlert
-(double)maximumWidth;
-(double)_maximumContentWidth;
-(id)titleLabelFont;
-(id)titleLabelColor;
-(UIEdgeInsets)textFieldContentInset;
-(double)textFieldHorizontalMargin;
-(UIEdgeInsets)contentInsetsForContainerView:(id)arg1 ;
-(id)dimmingViewForAlertController:(id)arg1 ;
-(double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2 ;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)_keyCommandInputForCancelAction;
-(id)textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2 ;
-(BOOL)placementAvoidsKeyboard;
-(id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2 ;
-(double)marginAboveTitleLabelFirstBaseline;
-(double)marginBelowTitleLabelLastBaseline;
-(id)messageLabelFont;
-(id)messageLabelColor;
-(double)marginAboveMessageLabelFirstBaseline;
-(double)marginBelowMessageLabelLastBaseline;
-(double)marginBelowLastLabelLastBaseline;
-(long long)permittedActionLayoutDirection;
-(BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2 ;
-(long long)maximumNumberOfLinesInTitleLabel;
-(long long)maximumNumberOfLinesInMessageLabel;
-(double)_minimumButtonWidth;
-(long long)_effectStyle;
-(id)_detailMessageFont;
-(double)_marginAboveDetailMessageFirstBaseline;
-(double)maximumWidthForTitleAndMessageContentView;
-(double)actionWidthForMinimumActionWidth:(double)arg1 ;
@end


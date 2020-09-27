/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

@class _UIStatusBarRoundedCornerView;

@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView {

	_UIStatusBarRoundedCornerView* _pillView;

}
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)buttonType;
-(void)removeFromSuperview;
-(long long)textStyle;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)showsTouchWhenHighlighted;
-(double)extraRightPadding;
-(BOOL)allowsUserInteraction;
-(void)_updatePillFrame;
-(CGRect)_pillFrame;
-(void)movedToSuperview:(id)arg1 ;
-(BOOL)usesAdvancedActions;
@end


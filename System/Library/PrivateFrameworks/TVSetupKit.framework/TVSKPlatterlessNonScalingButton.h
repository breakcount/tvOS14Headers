/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSetupKit.framework/TVSetupKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSetupKit/TVSetupKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, _UIFloatingContentView;

@interface TVSKPlatterlessNonScalingButton : UIControl {

	UILabel* _titleLabel;
	_UIFloatingContentView* _floatingContentView;

}

@property (nonatomic,retain) _UIFloatingContentView * floatingContentView;              //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,copy,readonly) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateColors;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)_currentControlState;
-(BOOL)_canHandlePresses:(id)arg1 ;
-(_UIFloatingContentView *)floatingContentView;
-(void)setFloatingContentView:(_UIFloatingContentView *)arg1 ;
@end


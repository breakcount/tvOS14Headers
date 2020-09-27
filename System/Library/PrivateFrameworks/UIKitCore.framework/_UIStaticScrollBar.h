/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollAccessory.h>

@class UIView, NSInvocation, NSArray, UIScrollView, UIButton;

@interface _UIStaticScrollBar : UIView <UIScrollAccessory> {

	UIView* _dividerLine;
	NSInvocation* _invocation;
	NSArray* _constraints;
	BOOL _shouldInsetButtonsForIndex;
	UIScrollView* _scrollView;
	long long _edge;
	UIButton* _upButton;
	UIButton* _downButton;

}

@property (nonatomic,readonly) UIButton * upButton;                         //@synthesize upButton=_upButton - In the implementation block
@property (nonatomic,readonly) UIButton * downButton;                       //@synthesize downButton=_downButton - In the implementation block
@property (assign,nonatomic) BOOL shouldInsetButtonsForIndex;               //@synthesize shouldInsetButtonsForIndex=_shouldInsetButtonsForIndex - In the implementation block
@property (nonatomic,readonly) long long desiredAccessoryEdge; 
@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long edge;                                //@synthesize edge=_edge - In the implementation block
@property (nonatomic,readonly) BOOL overlay; 
-(void)update;
-(BOOL)overlay;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)_axis;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UIScrollView *)scrollView;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIButton *)downButton;
-(UIButton *)upButton;
-(void)buttonTapped:(id)arg1 ;
-(long long)edge;
-(void)setEdge:(long long)arg1 ;
-(void)setShouldInsetButtonsForIndex:(BOOL)arg1 ;
-(long long)desiredAccessoryEdge;
-(void)_setupSubviewsIfNeeded;
-(id)_constraintsForEdge:(long long)arg1 ;
-(BOOL)shouldInsetButtonsForIndex;
-(CGRect)centeringBounds;
@end


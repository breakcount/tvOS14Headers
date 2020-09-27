/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UIKBCompatInputView : UIView {

	UIView* _touchableView;
	UIView* _snapshotView;

}

@property (nonatomic,retain) UIView * touchableView;              //@synthesize touchableView=_touchableView - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;               //@synthesize snapshotView=_snapshotView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)addSubview:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(CGRect)_compatibleBounds;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(BOOL)_hasAutolayoutHeightConstraint;
-(UIView *)touchableView;
-(void)setTouchableView:(UIView *)arg1 ;
@end


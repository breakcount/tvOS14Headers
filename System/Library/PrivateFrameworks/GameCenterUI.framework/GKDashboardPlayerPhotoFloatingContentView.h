/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>

@class GKDashboardPlayerPhotoView, UIImageView;

@interface GKDashboardPlayerPhotoFloatingContentView : _UIFloatingContentView {

	GKDashboardPlayerPhotoView* _photoView;
	UIImageView* _unfocusedShadowView;
	UIImageView* _focusedShadowView;
	double _unfocusedShadowAlpha;
	double _focusedShadowAlpha;

}

@property (nonatomic,retain) GKDashboardPlayerPhotoView * photoView;              //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,retain) UIImageView * unfocusedShadowView;                   //@synthesize unfocusedShadowView=_unfocusedShadowView - In the implementation block
@property (nonatomic,retain) UIImageView * focusedShadowView;                     //@synthesize focusedShadowView=_focusedShadowView - In the implementation block
@property (assign,nonatomic) double unfocusedShadowAlpha;                         //@synthesize unfocusedShadowAlpha=_unfocusedShadowAlpha - In the implementation block
@property (assign,nonatomic) double focusedShadowAlpha;                           //@synthesize focusedShadowAlpha=_focusedShadowAlpha - In the implementation block
-(void)dealloc;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(GKDashboardPlayerPhotoView *)photoView;
-(void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setPhotoView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)setUnfocusedShadowAlpha:(double)arg1 ;
-(void)setFocusedShadowAlpha:(double)arg1 ;
-(void)setUnfocusedShadowImage:(id)arg1 ;
-(void)setFocusedShadowImage:(id)arg1 ;
-(UIImageView *)unfocusedShadowView;
-(void)setUnfocusedShadowView:(UIImageView *)arg1 ;
-(UIImageView *)focusedShadowView;
-(void)setFocusedShadowView:(UIImageView *)arg1 ;
-(double)unfocusedShadowAlpha;
-(double)focusedShadowAlpha;
@end

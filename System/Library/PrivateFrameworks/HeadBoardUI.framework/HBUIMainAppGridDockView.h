/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:52 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class TVSUIOuterShadowView;

@interface HBUIMainAppGridDockView : UICollectionReusableView {

	TVSUIOuterShadowView* _shadowView;

}

@property (nonatomic,readonly) TVSUIOuterShadowView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateLayerBorderWidth;
-(void)_updateShadowViewVisibility;
-(void)_updateIdleModeAttributes;
-(TVSUIOuterShadowView *)shadowView;
@end


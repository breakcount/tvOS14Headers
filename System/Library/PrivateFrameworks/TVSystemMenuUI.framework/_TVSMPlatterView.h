/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemMenuUI/TVSystemMenuUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVSMBackdropView, UIView;

@interface _TVSMPlatterView : UIView {

	_TVSMBackdropView* _backdropView;
	UIView* _tintView;

}

@property (nonatomic,readonly) _TVSMBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UIView * tintView;                             //@synthesize tintView=_tintView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(_TVSMBackdropView *)backdropView;
-(void)_configureForUserInterfaceStyle:(long long)arg1 ;
-(UIView *)tintView;
@end


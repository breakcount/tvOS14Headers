/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemMenuUI/TVSystemMenuUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVSystemMenuUI/TVLockupViewComponent.h>
#import <TVSystemMenuUI/TVSMBaseViewAttributesApplying.h>

@class _UIFloatingContentView, UIView, NSString;

@interface TVSMBaseView : UIView <TVLockupViewComponent, TVSMBaseViewAttributesApplying> {

	long long _style;
	_UIFloatingContentView* _floatingContentView;

}

@property (nonatomic,readonly) _UIFloatingContentView * floatingContentView;              //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIView * visualEffectContainerView; 
@property (nonatomic,readonly) long long style;                                           //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(UIView *)visualEffectContainerView;
-(_UIFloatingContentView *)floatingContentView;
-(void)updateAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 buttonStyle:(long long)arg2 ;
-(void)updateFloatingContentViewControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
@end


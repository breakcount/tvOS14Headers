/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIViewController;

@interface _TVProductCollectionViewCell : UICollectionViewCell {

	UIView* _titleView;
	UIEdgeInsets _activeMargins;
	BOOL _marginActive;
	UIViewController* _viewController;
	UIEdgeInsets _partialMargins;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets partialMargins;                           //@synthesize partialMargins=_partialMargins - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                                  //@synthesize margins=_margins - In the implementation block
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(id)titleView;
-(void)setTitleView:(id)arg1 margins:(UIEdgeInsets)arg2 show:(BOOL)arg3 ;
-(void)showTitleView:(BOOL)arg1 ;
-(BOOL)isShowingTitleView;
-(void)enableWithMargins:(UIEdgeInsets)arg1 ;
-(void)disableMargins;
-(UIEdgeInsets)partialMargins;
-(void)setPartialMargins:(UIEdgeInsets)arg1 ;
@end


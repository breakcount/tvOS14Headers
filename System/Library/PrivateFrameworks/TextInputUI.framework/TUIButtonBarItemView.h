/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIBarButtonItem, UIBarButtonItemGroup, _UIButtonBarButton, UIView;

@interface TUIButtonBarItemView : UIView {

	BOOL _collapsedItem;
	UIBarButtonItem* _associatedItem;
	UIBarButtonItemGroup* _associatedGroup;
	_UIButtonBarButton* _barButtonView;
	UIView* _customView;

}

@property (assign,getter=isCollapsedItem,nonatomic) BOOL collapsedItem;              //@synthesize collapsedItem=_collapsedItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * associatedItem;                       //@synthesize associatedItem=_associatedItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItemGroup * associatedGroup;                 //@synthesize associatedGroup=_associatedGroup - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) _UIButtonBarButton * barButtonView;                     //@synthesize barButtonView=_barButtonView - In the implementation block
@property (nonatomic,retain) UIView * customView;                                    //@synthesize customView=_customView - In the implementation block
-(UIView *)contentView;
-(void)layoutSubviews;
-(BOOL)_isPad;
-(void)setCustomView:(UIView *)arg1 ;
-(UIView *)customView;
-(void)setBarButtonView:(_UIButtonBarButton *)arg1 ;
-(BOOL)isCollapsedItem;
-(void)setCollapsedItem:(BOOL)arg1 ;
-(UIBarButtonItem *)associatedItem;
-(void)setAssociatedItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItemGroup *)associatedGroup;
-(void)setAssociatedGroup:(UIBarButtonItemGroup *)arg1 ;
-(_UIButtonBarButton *)barButtonView;
@end

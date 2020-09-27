/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriTVUITemplateTabularDataTableViewLayoutDelegate;
@class UIView, SiriTVUIDividerTableView, UIColor;

@interface SiriTVUITemplateTabularDataTableView : UIView {

	UIView* _topDivider;
	id<SiriTVUITemplateTabularDataTableViewLayoutDelegate> _layoutDelegate;
	UIView* _headerView;
	SiriTVUIDividerTableView* _tableView;
	UIColor* _dividerColor;

}

@property (nonatomic,retain) SiriTVUIDividerTableView * tableView;                                                      //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<SiriTVUITemplateTabularDataTableViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                                       //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIColor * dividerColor;                                                                    //@synthesize dividerColor=_dividerColor - In the implementation block
-(void)setTableView:(SiriTVUIDividerTableView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(SiriTVUIDividerTableView *)tableView;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setDividerColor:(UIColor *)arg1 ;
-(UIColor *)dividerColor;
-(id<SiriTVUITemplateTabularDataTableViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<SiriTVUITemplateTabularDataTableViewLayoutDelegate>)arg1 ;
-(BOOL)_shouldShowDivider;
@end

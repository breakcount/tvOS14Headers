/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, TUIEmojiSearchTextField, UICollectionView;

@interface TUIEmojiSearchView : UIView {

	UIView* _searchTextFieldPortal;
	UIView* _bottomHalfContainerView;
	UIView* _predictionViewWrapperView;
	UIView* _resultsCollectionContainerView;
	UILabel* _noResultsLabelView;
	BOOL _predictionViewVisible;
	BOOL _collapsed;
	BOOL _noResultsLabelVisible;
	TUIEmojiSearchTextField* _searchTextField;
	UICollectionView* _resultsCollectionView;
	UIView* _predictionView;

}

@property (nonatomic,readonly) TUIEmojiSearchTextField * searchTextField;              //@synthesize searchTextField=_searchTextField - In the implementation block
@property (nonatomic,retain) UICollectionView * resultsCollectionView;                 //@synthesize resultsCollectionView=_resultsCollectionView - In the implementation block
@property (nonatomic,retain) UIView * predictionView;                                  //@synthesize predictionView=_predictionView - In the implementation block
@property (assign,nonatomic) BOOL predictionViewVisible;                               //@synthesize predictionViewVisible=_predictionViewVisible - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                        //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,nonatomic) BOOL noResultsLabelVisible;                               //@synthesize noResultsLabelVisible=_noResultsLabelVisible - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isCollapsed;
-(TUIEmojiSearchTextField *)searchTextField;
-(UIView *)predictionView;
-(void)setResultsCollectionView:(UICollectionView *)arg1 ;
-(void)setPredictionView:(UIView *)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)setPredictionViewVisible:(BOOL)arg1 ;
-(void)setPredictionViewVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setNoResultsLabelVisible:(BOOL)arg1 ;
-(void)setNoResultsLabelVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)_handBiasedEdgeInsets;
-(void)_didChangeHandBiasNotification:(id)arg1 ;
-(UICollectionView *)resultsCollectionView;
-(BOOL)predictionViewVisible;
-(BOOL)noResultsLabelVisible;
@end


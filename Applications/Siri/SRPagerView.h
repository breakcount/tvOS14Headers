//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SRPagingScrollView;
@protocol SRPagerViewDataSource, SRPagerViewDelegate;

@interface SRPagerView : UIView <UIScrollViewDelegate>
{
    SRPagingScrollView *_scrollView;	// 8 = 0x8
    _Bool _scrollViewIsDragging;	// 16 = 0x10
    _Bool _scrollViewIsScrollingBetweenPages;	// 17 = 0x11
    UIView *_activePageView;	// 24 = 0x18
    unsigned long long _transitionState;	// 32 = 0x20
    id <SRPagerViewDataSource> _dataSource;	// 40 = 0x28
    id <SRPagerViewDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100088a14
@property(nonatomic, getter=_scrollViewIsScrollingBetweenPages, setter=_setScrollViewIsScrollingBetweenPages:) _Bool scrollViewIsScrollingBetweenPages; // @synthesize scrollViewIsScrollingBetweenPages=_scrollViewIsScrollingBetweenPages;
@property(nonatomic, getter=_scrollViewIsDragging, setter=_setScrollViewIsDragging:) _Bool scrollViewIsDragging; // @synthesize scrollViewIsDragging=_scrollViewIsDragging;
@property(nonatomic) __weak id <SRPagerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SRPagerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) unsigned long long transitionState; // @synthesize transitionState=_transitionState;
@property(retain, nonatomic) UIView *activePageView; // @synthesize activePageView=_activePageView;
- (void)_scrollingDidEnd;	// IMP=0x000000010008891c
- (id)_activePageViewBasedOnScrollViewPosition;	// IMP=0x0000000100088770
- (_Bool)_multiplePageViewsAreVisible;	// IMP=0x00000001000885d4
- (_Bool)_containsPageView:(id)arg1;	// IMP=0x0000000100088584
- (id)_pageViews;	// IMP=0x000000010008856c
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000100088558
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010008854c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000010008853c
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100088504
- (void)_updateTransitionState;	// IMP=0x0000000100088440
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled;
- (void)setActivePageView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000882f8
- (void)removePageView:(id)arg1;	// IMP=0x0000000100088140
- (void)addPageView:(id)arg1;	// IMP=0x00000001000880c0
- (void)insertPageView:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000100087f68
- (void)reloadData;	// IMP=0x0000000100087d64
- (void)layoutSubviews;	// IMP=0x0000000100087bd4
- (void)didMoveToWindow;	// IMP=0x0000000100087b84
- (id)initWithFrame:(struct CGRect)arg1 textInputEnabled:(_Bool)arg2;	// IMP=0x0000000100087aa8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

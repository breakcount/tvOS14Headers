/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIPageViewController, _UIQueuingScrollView, UIPageControl;

@interface _UIPageViewControllerContentView : UIView {

	UIPageViewController* _pageViewController;
	_UIQueuingScrollView* _scrollView;
	UIPageControl* _pageControl;

}

@property (nonatomic,readonly) _UIQueuingScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIPageControl * pageControl;                    //@synthesize pageControl=_pageControl - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_UIQueuingScrollView *)scrollView;
-(UIPageControl *)pageControl;
-(BOOL)canBecomeFocused;
-(id)preferredFocusedView;
-(CGRect)_scrollViewFrame;
-(void)invalidatePageViewController;
-(double)_pageSpacing;
-(void)_setupPageControl:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andPageViewController:(id)arg2 ;
@end


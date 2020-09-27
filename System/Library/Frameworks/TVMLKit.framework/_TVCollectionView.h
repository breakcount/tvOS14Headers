/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer, NSIndexPath, NSString;

@interface _TVCollectionView : UICollectionView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _playButtonRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	double _bottomPadding;
	struct {
		unsigned _respondsToDidPlayItem : 1;
		unsigned _respondsToDidLongPressItem : 1;
		unsigned _respondsToCanBecomeFocused : 1;
	}  _delegateFlags;
	UIEdgeInsets _gradientBoundsInsets;
	struct {
		unsigned layoutBelowDisabled : 1;
	}  _flags;
	NSIndexPath* _indexPathForLastFocusedItem;

}

@property (assign,nonatomic,__weak) id<_TVCollectionViewDelegate> delegate; 
@property (nonatomic,copy,readonly) NSIndexPath * indexPathForLastFocusedItem;              //@synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<_TVCollectionViewDelegate>)arg1 ;
-(void)layoutBelowIfNeeded;
-(void)reloadData;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)_notifyDidScroll;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGRect)_visibleBounds;
-(void)_playButtonAction:(id)arg1 ;
-(void)_longPressAction:(id)arg1 ;
-(void)_getGradientMaskBounds:(out CGRect*)arg1 startInsets:(out UIEdgeInsets*)arg2 endInsets:(out UIEdgeInsets*)arg3 intensities:(out UIEdgeInsets*)arg4 ;
-(UIEdgeInsets)_gradientBoundsInsets;
-(void)_performWithoutLayoutBelow:(/*^block*/id)arg1 ;
-(void)setBottomPaddingForVisibleBounds:(double)arg1 ;
-(void)_setGradientBoundsInsets:(UIEdgeInsets)arg1 ;
-(NSIndexPath *)indexPathForLastFocusedItem;
-(void)_performBlockWithFocusedCellIndexPath:(/*^block*/id)arg1 ;
-(void)_performBlockWithLongPressedCellIndexPath:(/*^block*/id)arg1 ;
@end


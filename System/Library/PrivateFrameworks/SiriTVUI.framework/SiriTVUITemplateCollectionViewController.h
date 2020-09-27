/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITemplateItemViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <SiriTVUI/SiriTVUICollectionViewCellDelegate.h>

@class NSMutableDictionary, NSIndexPath, SiriTVUITemplateCollectionView, SiriTVUICollectionViewTemplateItem, NSString;

@interface SiriTVUITemplateCollectionViewController : SiriTVUITemplateItemViewController <UICollectionViewDataSource, UICollectionViewDelegate, SiriTVUICollectionViewCellDelegate> {

	NSMutableDictionary* _imageCache;
	NSIndexPath* _focusedIndexPath;
	double _highlightItemDelegateDelay;

}

@property (nonatomic,retain) SiriTVUITemplateCollectionView * view; 
@property (nonatomic,retain) SiriTVUICollectionViewTemplateItem * templateItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultPartialCellFont;
+(id)_defaultFullscreenCellFont;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)_focusedIndexPath;
-(void)didUpdateInteractiveTransitionWithFullScreenFraction:(double)arg1 ;
-(void)willEndInteractiveTransitionFromFullScreenFraction:(double)arg1 toFullScreenFraction:(double)arg2 velocity:(CGPoint)arg3 ;
-(CGRect)highlightedTemplateItemFrame;
-(BOOL)prefersFocus;
-(void)collectionViewCellDidReceiveClick:(id)arg1 ;
-(id)initWithTemplateItem:(id)arg1 delegate:(id)arg2 ;
-(CGSize)_itemSizeForFullScreenFraction:(double)arg1 scale:(double)arg2 ;
-(double)_fontSizeForFullScreenFraction:(double)arg1 scale:(double)arg2 ;
-(void)_updateImageForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updateDelegateForCurrentFocusAndHasStopped:(id)arg1 ;
-(void)_invalidateShelfViewLayout:(id)arg1 forNewItemSize:(CGSize)arg2 newFontSize:(double)arg3 ;
-(double)_valueForFraction:(double)arg1 initialValue:(double)arg2 finalValue:(double)arg3 scale:(double)arg4 ;
-(CGPoint)_contentOffsetAdjustmentForNewItemSize:(CGSize)arg1 shelfViewLayout:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIStatusBarItemView, UIStatusBarForegroundView, NSNumber;

@interface UIStatusBarLayoutManager : NSObject {

	int _region;
	UIStatusBarItemView* _itemViews[49];
	BOOL _persistentAnimationsEnabled;
	BOOL _usesVerticalLayout;
	UIStatusBarForegroundView* _foregroundView;
	NSNumber* _assignedStartPosition;

}

@property (assign,nonatomic,__weak) UIStatusBarForegroundView * foregroundView;              //@synthesize foregroundView=_foregroundView - In the implementation block
@property (assign,nonatomic) BOOL persistentAnimationsEnabled;                               //@synthesize persistentAnimationsEnabled=_persistentAnimationsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL usesVerticalLayout;                                      //@synthesize usesVerticalLayout=_usesVerticalLayout - In the implementation block
@property (nonatomic,retain) NSNumber * assignedStartPosition;                               //@synthesize assignedStartPosition=_assignedStartPosition - In the implementation block
-(void)dealloc;
-(double)_startPosition;
-(id)_itemViews;
-(UIStatusBarForegroundView *)foregroundView;
-(BOOL)usesVerticalLayout;
-(void)itemView:(id)arg1 sizeChangedBy:(double)arg2 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(void)setForegroundView:(UIStatusBarForegroundView *)arg1 ;
-(BOOL)persistentAnimationsEnabled;
-(id)initWithRegion:(int)arg1 foregroundView:(id)arg2 usesVerticalLayout:(BOOL)arg3 ;
-(id)visibleItemViewAtPoint:(CGPoint)arg1 inForegroundView:(id)arg2 ;
-(BOOL)prepareEnabledItems:(BOOL*)arg1 withData:(id)arg2 actions:(int)arg3 ;
-(id)itemViewOfType:(int)arg1 ;
-(BOOL)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2 ;
-(void)positionInvisibleItems;
-(void)removeDisabledItems:(BOOL*)arg1 ;
-(void)makeVisibleItemsPerformPendedActions;
-(CGRect)rectForItems:(id)arg1 ;
-(double)sizeNeededForItems:(id)arg1 ;
-(void)setAssignedStartPosition:(NSNumber *)arg1 ;
-(void)clearOverlapFromItems:(id)arg1 ;
-(double)distributeOverlap:(double)arg1 amongItems:(id)arg2 ;
-(double)sizeNeededForItem:(id)arg1 ;
-(double)removeOverlap:(double)arg1 fromItems:(id)arg2 ;
-(BOOL)itemIsVisible:(id)arg1 ;
-(id)allItemViews;
-(void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(BOOL*)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(BOOL*)arg5 itemDisappearing:(BOOL*)arg6 ;
-(void)_positionNewItemViewsWithEnabledItems:(BOOL*)arg1 ;
-(void)setVisibilityOfItemType:(int)arg1 visible:(BOOL)arg2 ;
-(BOOL)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(BOOL)arg4 ;
-(id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 ;
-(id)_itemViewsSortedForLayout;
-(CGRect)_frameForItemView:(id)arg1 startPosition:(double)arg2 firstView:(BOOL)arg3 ;
-(double)_positionAfterPlacingItemView:(id)arg1 startPosition:(double)arg2 firstView:(BOOL)arg3 ;
-(CGRect)_repositionedNewFrame:(CGRect)arg1 sizeDelta:(double)arg2 ;
-(BOOL)_processDelta:(double)arg1 forView:(id)arg2 ;
-(id)_viewForItem:(id)arg1 ;
-(double)_sizeNeededForItemView:(id)arg1 ;
-(void)_setOrigin:(double)arg1 forPoint:(CGPoint*)arg2 ;
-(double)_dimensionForSize:(CGSize)arg1 ;
-(NSNumber *)assignedStartPosition;
-(void)_addOriginDelta:(double)arg1 toPoint:(CGPoint*)arg2 ;
-(void)setVisibilityOfAllItems:(BOOL)arg1 ;
-(void)setVisibilityOfItem:(id)arg1 visible:(BOOL)arg2 ;
-(BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL*)arg1 ;
-(BOOL)updateDoubleHeightItem;
@end


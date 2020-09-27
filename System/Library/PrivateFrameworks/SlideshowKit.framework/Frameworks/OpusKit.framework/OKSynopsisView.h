/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/OKWidgetViewDelegate.h>

@protocol OKSynopsisViewDelegate;
@class OKSynopsisGestureRecognizer, NSArray, OFNSOperationQueue, OKDimmerView, UICollectionView, OKPresentationViewControllerProxy, OKSynopsisInterpreter, OFUIView, NSString;

@interface OKSynopsisView : OFUIView <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CAAnimationDelegate, OKWidgetViewDelegate> {

	OKSynopsisGestureRecognizer* _synopsisGestureRecognizer;
	NSArray* _widgetMediaItems;
	OFNSOperationQueue* _highSpeedOperationQueue;
	OKDimmerView* _backgroundView;
	BOOL _pinchStartedRight;
	BOOL _isAnimating;
	BOOL _isDisplay;
	UICollectionView* _collectionView;
	BOOL _scrollViewDidEndDragging;
	CGPoint _collectionViewContentPreviousOffset;
	OKPresentationViewControllerProxy* _presentationViewController;
	OKSynopsisInterpreter* _synopsisInterpreter;
	id<OKSynopsisViewDelegate> _delegate;

}

@property (nonatomic,readonly) OFUIView * presentationView; 
@property (nonatomic,readonly) OFUIView * navigatorView; 
@property (nonatomic,retain) OKSynopsisInterpreter * synopsisInterpreter;                                 //@synthesize synopsisInterpreter=_synopsisInterpreter - In the implementation block
@property (assign,nonatomic) OKPresentationViewControllerProxy * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (assign,nonatomic) id<OKSynopsisViewDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isDisplay;                                                            //@synthesize isDisplay=_isDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<OKSynopsisViewDelegate>)delegate;
-(void)setDelegate:(id<OKSynopsisViewDelegate>)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)show;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)hide;
-(void)setPresentationViewController:(OKPresentationViewControllerProxy *)arg1 ;
-(OKPresentationViewControllerProxy *)presentationViewController;
-(OFUIView *)presentationView;
-(void)updateLayout:(CGRect)arg1 ;
-(OFUIView *)navigatorView;
-(void)handleMagnification:(id)arg1 ;
-(void)initCollectionView;
-(void)animateView:(id)arg1 forKeyPath:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 delay:(double)arg5 duration:(double)arg6 setDelegate:(id)arg7 ;
-(void)animateSynopsisViewBlurForDisplay:(BOOL)arg1 withProgress:(double)arg2 ;
-(void)prepareForDisplaySynopsisView;
-(void)updateWithProgress:(double)arg1 ;
-(void)endedGesture;
-(void)handleTapCell:(id)arg1 ;
-(void)updateSynopsisViewOffsetForVisibleWidgets;
-(void)prepareAdjacentItemWidgetViewsForScrolling;
-(void)_scrollViewDidCompleteScrolling;
-(void)prepareAdjacentItemWidgetViews;
-(void)prepareAdjacentItemWidgetViews:(unsigned long long)arg1 ;
-(id)pageViewForWidgetView:(id)arg1 ;
-(id)widgetViewResolution:(id)arg1 ;
-(void)widgetViewCancelAllOperations:(id)arg1 ;
-(void)widgetViewCancelAllOperations:(id)arg1 withIdentifier:(id)arg2 ;
-(void)widgetView:(id)arg1 addHighSpeedOperations:(id)arg2 andConsumingOperations:(id)arg3 ;
-(void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(/*^block*/id)arg3 forWidgetView:(id)arg4 ;
-(id)initWithPresentationViewController:(id)arg1 ;
-(void)setSynopsisInterpreter:(OKSynopsisInterpreter *)arg1 ;
-(id)collectionItemAtIndexPath:(id)arg1 ;
-(OKSynopsisInterpreter *)synopsisInterpreter;
-(BOOL)isDisplay;
@end


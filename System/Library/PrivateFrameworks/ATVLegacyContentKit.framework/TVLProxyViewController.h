/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIActivityIndicatorView, NSTimer;

@interface TVLProxyViewController : UIViewController {

	BOOL _beginLoadWithViewAppearance;
	BOOL _animating;
	unsigned long long _state;
	/*^block*/id _loadHandler;
	UILabel* _label;
	UIActivityIndicatorView* _spinnerView;
	NSTimer* _spinnerTimer;

}

@property (nonatomic,readonly) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,readonly) NSTimer * spinnerTimer;                             //@synthesize spinnerTimer=_spinnerTimer - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL beginLoadWithViewAppearance;                     //@synthesize beginLoadWithViewAppearance=_beginLoadWithViewAppearance - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                    //@synthesize animating=_animating - In the implementation block
@property (nonatomic,copy) id loadHandler;                                         //@synthesize loadHandler=_loadHandler - In the implementation block
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(UILabel *)label;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(UIActivityIndicatorView *)spinnerView;
-(void)setLoadHandler:(id)arg1 ;
-(id)loadHandler;
-(id)initWithLoadHandler:(/*^block*/id)arg1 ;
-(void)setBeginLoadWithViewAppearance:(BOOL)arg1 ;
-(void)_invalidateSpinnerTimer;
-(void)_showSpinnerAction:(id)arg1 ;
-(BOOL)beginLoadWithViewAppearance;
-(void)_executeLoadHandler;
-(NSTimer *)spinnerTimer;
@end


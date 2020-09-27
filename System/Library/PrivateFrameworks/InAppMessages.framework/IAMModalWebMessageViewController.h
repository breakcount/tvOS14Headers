/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol IAMViewControllerMetricsDelegate;
@class UIButton, IAMWebView;

@interface IAMModalWebMessageViewController : UIViewController {

	BOOL _shouldDisplayCloseButton;
	id<IAMViewControllerMetricsDelegate> _metricsDelegate;
	UIButton* _closeButton;
	IAMWebView* _webView;

}

@property (nonatomic,retain) UIButton * closeButton;                                                   //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) IAMWebView * webView;                                                     //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<IAMViewControllerMetricsDelegate> metricsDelegate;              //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCloseButton;                                            //@synthesize shouldDisplayCloseButton=_shouldDisplayCloseButton - In the implementation block
-(void)viewDidLoad;
-(IAMWebView *)webView;
-(id)initWithWebView:(id)arg1 ;
-(void)setWebView:(IAMWebView *)arg1 ;
-(void)setMetricsDelegate:(id<IAMViewControllerMetricsDelegate>)arg1 ;
-(id<IAMViewControllerMetricsDelegate>)metricsDelegate;
-(void)setShouldDisplayCloseButton:(BOOL)arg1 ;
-(void)_handleCloseButtonTap:(id)arg1 ;
-(UIButton *)closeButton;
-(BOOL)shouldDisplayCloseButton;
-(void)setCloseButton:(UIButton *)arg1 ;
@end


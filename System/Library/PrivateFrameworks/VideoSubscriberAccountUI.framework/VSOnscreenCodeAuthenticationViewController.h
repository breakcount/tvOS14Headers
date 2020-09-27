/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VSOnscreenCodeViewDelegate.h>
#import <libobjc.A.dylib/VSOnscreenCodeAuthenticationViewController.h>
@class VSOnscreenCodeViewModel;


@protocol VSOnscreenCodeAuthenticationViewController <VSAuthenticationViewController>
@property (nonatomic,retain) VSOnscreenCodeViewModel * viewModel; 
@required
-(VSOnscreenCodeViewModel *)viewModel;
-(void)setViewModel:(id)arg1;

@end


@protocol VSAuthenticationViewControllerDelegate;
@class VSOnscreenCodeViewModel, UITapGestureRecognizer, NSString;

@interface VSOnscreenCodeAuthenticationViewController : UIViewController <VSOnscreenCodeViewDelegate, VSOnscreenCodeAuthenticationViewController> {

	BOOL _cancellationAllowed;
	id<VSAuthenticationViewControllerDelegate> _delegate;
	VSOnscreenCodeViewModel* _viewModel;
	UITapGestureRecognizer* _menuRecognizer;

}

@property (assign,nonatomic,__weak) UITapGestureRecognizer * menuRecognizer;                          //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VSOnscreenCodeViewModel * viewModel;                                     //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<VSAuthenticationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;                   //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (nonatomic,readonly) CGSize preferredLogoSize; 
-(void)dealloc;
-(id<VSAuthenticationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSAuthenticationViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_menuButtonPressed:(id)arg1 ;
-(VSOnscreenCodeViewModel *)viewModel;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setViewModel:(VSOnscreenCodeViewModel *)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(CGSize)preferredLogoSize;
-(id)_onscreenCodeView;
-(id)_webPageLocationForURL:(id)arg1 ;
-(void)regenerateCodeForOnscreenCodeView:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VSAutoAuthenticationViewDelegate.h>
#import <libobjc.A.dylib/VSAutoAuthenticationViewController.h>

@protocol VSAuthenticationViewControllerDelegate;
@class VSAutoAuthenticationViewModel, VSAutoAuthenticationView, UITapGestureRecognizer, VSActivityIndicatorViewController, NSString;

@interface VSAutoAuthenticationViewController_tvOS : UIViewController <VSAutoAuthenticationViewDelegate, VSAutoAuthenticationViewController> {

	BOOL _cancellationAllowed;
	id<VSAuthenticationViewControllerDelegate> _delegate;
	VSAutoAuthenticationViewModel* _viewModel;
	VSAutoAuthenticationView* _autoAuthenticationView;
	UITapGestureRecognizer* _menuRecognizer;
	VSActivityIndicatorViewController* _signingInIndicatorViewController;

}

@property (nonatomic,retain) VSAutoAuthenticationView * autoAuthenticationView;                                 //@synthesize autoAuthenticationView=_autoAuthenticationView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuRecognizer;                                           //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (nonatomic,retain) VSActivityIndicatorViewController * signingInIndicatorViewController;              //@synthesize signingInIndicatorViewController=_signingInIndicatorViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VSAutoAuthenticationViewModel * viewModel;                                         //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<VSAuthenticationViewControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;                             //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (nonatomic,readonly) CGSize preferredLogoSize; 
-(void)dealloc;
-(id<VSAuthenticationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSAuthenticationViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewDidLoad;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_menuButtonPressed:(id)arg1 ;
-(VSAutoAuthenticationViewModel *)viewModel;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setViewModel:(VSAutoAuthenticationViewModel *)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(CGSize)preferredLogoSize;
-(void)setAutoAuthenticationView:(VSAutoAuthenticationView *)arg1 ;
-(VSAutoAuthenticationView *)autoAuthenticationView;
-(void)_showAutoAuthenticationView;
-(void)_hideAutoAuthenticationView;
-(void)_showSigningInIndicatorViewController;
-(void)_hideSigningInIndicatorViewController;
-(void)_presentError:(id)arg1 ;
-(void)setSigningInIndicatorViewController:(VSActivityIndicatorViewController *)arg1 ;
-(VSActivityIndicatorViewController *)signingInIndicatorViewController;
-(void)autoAuthenticationViewDidSelectSignIn:(id)arg1 ;
-(void)autoAuthenticationViewDidSelectManualSignIn:(id)arg1 ;
@end


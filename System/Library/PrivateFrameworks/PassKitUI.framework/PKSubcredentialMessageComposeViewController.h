/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKSubcredentialMessageComposeViewControllerDelegate;
@class _UIAsyncInvocation, PKAppletSubcredentialSharingRequest, PKRemoteSubcredentialMessageComposeViewController;

@interface PKSubcredentialMessageComposeViewController : UIViewController {

	id<PKSubcredentialMessageComposeViewControllerDelegate> _delegate;
	_UIAsyncInvocation* _remoteVCRequest;
	PKAppletSubcredentialSharingRequest* _sharingRequest;
	PKRemoteSubcredentialMessageComposeViewController* _remoteVC;

}

@property (assign,nonatomic,__weak) id<PKSubcredentialMessageComposeViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PKSubcredentialMessageComposeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKSubcredentialMessageComposeViewControllerDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)modalPresentationStyle;
-(id)childViewControllerForStatusBarStyle;
-(long long)modalTransitionStyle;
-(BOOL)shouldAutorotate;
-(id)childViewControllerForStatusBarHidden;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithSharingRequest:(id)arg1 delegate:(id)arg2 ;
@end


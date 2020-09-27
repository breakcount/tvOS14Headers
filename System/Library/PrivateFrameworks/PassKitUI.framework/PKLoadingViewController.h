/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol PKLoadingViewControllerDelegate;
@class UIActivityIndicatorView, UILabel;

@interface PKLoadingViewController : UIViewController {

	id<PKLoadingViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _spinner;
	UILabel* _loadingLabel;

}
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)_cancelButtonTapped:(id)arg1 ;
@end


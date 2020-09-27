/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSAuthKitUpdateTask.h>

@class UIViewController;

@interface AMSUIAuthKitUpdateTask : AMSAuthKitUpdateTask {

	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(unsigned long long)_authenticationType;
-(UIViewController *)presentingViewController;
-(id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3 ;
-(id)_createAuthKitContext;
-(void)_configureAuthKitContext:(id)arg1 ;
-(id)_createAuthKitController;
@end


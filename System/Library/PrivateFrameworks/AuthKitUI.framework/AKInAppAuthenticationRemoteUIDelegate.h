/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class AKAppleIDAuthenticationInAppContext, UIViewController, NSHTTPURLResponse, AKAppleIDServerUIContextController, RUIObjectModel, UINavigationController, AAUICDPStingrayRemoteUIController, NSString;

@interface AKInAppAuthenticationRemoteUIDelegate : NSObject <RemoteUIControllerDelegate> {

	AKAppleIDAuthenticationInAppContext* _context;
	UIViewController* _topViewControllerOnLoadStart;
	NSHTTPURLResponse* _deferredResponse;
	BOOL _navBarButtonOverridden;
	BOOL _overrideFirstActionSignal;
	AKAppleIDServerUIContextController* _serverUIContextController;
	RUIObjectModel* _currentRemoteOM;
	UINavigationController* _modalRemoteUINavController;
	AAUICDPStingrayRemoteUIController* _stingrayController;

}

@property (nonatomic,retain) AKAppleIDServerUIContextController * serverUIContextController;              //@synthesize serverUIContextController=_serverUIContextController - In the implementation block
@property (nonatomic,readonly) RUIObjectModel * currentRemoteOM;                                          //@synthesize currentRemoteOM=_currentRemoteOM - In the implementation block
@property (nonatomic,readonly) UINavigationController * modalRemoteUINavController;                       //@synthesize modalRemoteUINavController=_modalRemoteUINavController - In the implementation block
@property (assign,nonatomic) BOOL overrideFirstActionSignal;                                              //@synthesize overrideFirstActionSignal=_overrideFirstActionSignal - In the implementation block
@property (nonatomic,retain) AAUICDPStingrayRemoteUIController * stingrayController;                      //@synthesize stingrayController=_stingrayController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 forRequest:(id)arg3 ;
-(void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(BOOL)_isDeferrableFinalResponseHarvested;
-(void)_showAlert:(id)arg1 ;
-(void)_handleBackButtonTap:(id)arg1 ;
-(void)clearObjectModel;
-(AKAppleIDServerUIContextController *)serverUIContextController;
-(void)setServerUIContextController:(AKAppleIDServerUIContextController *)arg1 ;
-(RUIObjectModel *)currentRemoteOM;
-(UINavigationController *)modalRemoteUINavController;
-(BOOL)overrideFirstActionSignal;
-(void)setOverrideFirstActionSignal:(BOOL)arg1 ;
-(AAUICDPStingrayRemoteUIController *)stingrayController;
-(void)setStingrayController:(AAUICDPStingrayRemoteUIController *)arg1 ;
@end


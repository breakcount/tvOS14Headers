/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAUIServerHookDelegate.h>

@class NSMutableArray, RemoteUIController, UIViewController, NSArray, NSString;

@interface AAUIServerUIHookHandler : NSObject <AAUIServerHookDelegate> {

	NSMutableArray* _hookIdentifiers;
	RemoteUIController* _remoteUIController;
	UIViewController* _presentingControllerOverride;
	NSArray* _serverHooks;

}

@property (nonatomic,retain) UIViewController * presentingControllerOverride;              //@synthesize presentingControllerOverride=_presentingControllerOverride - In the implementation block
@property (nonatomic,copy) NSArray * serverHooks;                                          //@synthesize serverHooks=_serverHooks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissObjectModelsAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)presentationContextForHook:(id)arg1 ;
-(id)initWithRemoteUIController:(id)arg1 ;
-(void)setServerHooks:(NSArray *)arg1 ;
-(NSArray *)serverHooks;
-(void)processObjectModel:(id)arg1 isModal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPresentingControllerOverride:(UIViewController *)arg1 ;
-(void)processObjectModel:(id)arg1 isModal:(BOOL)arg2 ;
-(id)initWithRemoteUIController:(id)arg1 hooks:(id)arg2 ;
-(void)_rebuildServerHookHandlers;
-(void)_handleResponseForHook:(id)arg1 success:(BOOL)arg2 error:(id)arg3 attributes:(id)arg4 objectModel:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)refreshWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_responseDataForResult:(BOOL)arg1 withError:(id)arg2 ;
-(void)_reloadUIWithInfo:(id)arg1 attributes:(id)arg2 initiatingObjectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)currentPresenter;
-(id)_refreshRequestWithInfo:(id)arg1 initiatingObjectModel:(id)arg2 attributes:(id)arg3 ;
-(void)processServerResponse:(id)arg1 ;
-(UIViewController *)presentingControllerOverride;
@end


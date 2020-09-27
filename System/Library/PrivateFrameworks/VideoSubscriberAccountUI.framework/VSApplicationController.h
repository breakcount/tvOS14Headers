/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSAppDocumentControllerDelegate.h>
#import <libobjc.A.dylib/VSApplicationDelegate.h>
#import <libobjc.A.dylib/VSStateMachineDelegate.h>

@protocol VSApplicationControllerDelegate;
@class VSIdentityProvider, NSString, VSAuditToken, VSStateMachine, NSError, NSURL, NSOperationQueue, VSApplication, VSApplicationControllerResponseHandler, VSAppDocumentController, JSValue, VSPreferences;

@interface VSApplicationController : NSObject <VSAppDocumentControllerDelegate, VSApplicationDelegate, VSStateMachineDelegate> {

	BOOL _applicationMustSelfValidate;
	BOOL _allowUI;
	id<VSApplicationControllerDelegate> _delegate;
	VSIdentityProvider* _identityProvider;
	NSString* _accountProviderAuthenticationToken;
	VSAuditToken* _auditToken;
	VSStateMachine* _stateMachine;
	NSError* _delegateError;
	NSError* _onLaunchError;
	NSURL* _fetchedURL;
	NSOperationQueue* _privateQueue;
	VSApplication* _application;
	VSApplicationControllerResponseHandler* _responseHandler;
	VSAppDocumentController* _appDocumentController;
	JSValue* _applicationReadyCallback;
	VSPreferences* _preferences;

}

@property (nonatomic,retain) VSStateMachine * stateMachine;                                         //@synthesize stateMachine=_stateMachine - In the implementation block
@property (retain) NSError * delegateError;                                                         //@synthesize delegateError=_delegateError - In the implementation block
@property (retain) NSError * onLaunchError;                                                         //@synthesize onLaunchError=_onLaunchError - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;                                 //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,retain) NSURL * fetchedURL;                                                    //@synthesize fetchedURL=_fetchedURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                       //@synthesize privateQueue=_privateQueue - In the implementation block
@property (retain) VSApplication * application;                                                     //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) VSApplicationControllerResponseHandler * responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) VSAppDocumentController * appDocumentController;                       //@synthesize appDocumentController=_appDocumentController - In the implementation block
@property (nonatomic,retain) JSValue * applicationReadyCallback;                                    //@synthesize applicationReadyCallback=_applicationReadyCallback - In the implementation block
@property (assign,nonatomic) BOOL applicationMustSelfValidate;                                      //@synthesize applicationMustSelfValidate=_applicationMustSelfValidate - In the implementation block
@property (assign,nonatomic) BOOL allowUI;                                                          //@synthesize allowUI=_allowUI - In the implementation block
@property (nonatomic,retain) VSPreferences * preferences;                                           //@synthesize preferences=_preferences - In the implementation block
@property (assign,nonatomic,__weak) id<VSApplicationControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * accountProviderAuthenticationToken;                         //@synthesize accountProviderAuthenticationToken=_accountProviderAuthenticationToken - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                               //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)release;
-(id)init;
-(void)dealloc;
-(id<VSApplicationControllerDelegate>)delegate;
-(void)setDelegate:(id<VSApplicationControllerDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(VSAuditToken *)auditToken;
-(void)setResponseHandler:(VSApplicationControllerResponseHandler *)arg1 ;
-(VSPreferences *)preferences;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(VSStateMachine *)stateMachine;
-(void)setStateMachine:(VSStateMachine *)arg1 ;
-(VSApplicationControllerResponseHandler *)responseHandler;
-(VSApplication *)application;
-(void)setApplication:(VSApplication *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(NSString *)accountProviderAuthenticationToken;
-(void)setAccountProviderAuthenticationToken:(NSString *)arg1 ;
-(id)initWithIdentityProvider:(id)arg1 ;
-(void)setFetchedURL:(NSURL *)arg1 ;
-(void)setOnLaunchError:(NSError *)arg1 ;
-(id)_bootURL;
-(void)_notifyDidStart;
-(NSError *)delegateError;
-(NSError *)onLaunchError;
-(void)_notifyStartDidFailWithError:(id)arg1 ;
-(void)setDelegateError:(NSError *)arg1 ;
-(void)_notifyDelegateWithBlock:(/*^block*/id)arg1 ;
-(void)setAllowUI:(BOOL)arg1 ;
-(void)_submitJavascriptRequest:(id)arg1 forApplicationControllerRequest:(id)arg2 ;
-(void)_completeRequest:(id)arg1 withResult:(id)arg2 ;
-(void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_presentDocument:(id)arg1 ;
-(void)_presentAlert:(id)arg1 ;
-(void)_beginAuthentication;
-(void)_cancelValidation;
-(JSValue *)applicationReadyCallback;
-(void)_applicationReadyWithSuccess:(BOOL)arg1 javascriptErrorValue:(id)arg2 ;
-(void)setApplicationReadyCallback:(JSValue *)arg1 ;
-(id)_applicationLaunchParams;
-(VSAppDocumentController *)appDocumentController;
-(BOOL)allowUI;
-(void)setAppDocumentController:(VSAppDocumentController *)arg1 ;
-(BOOL)applicationMustSelfValidate;
-(void)_notifyDidReceiveViewModel:(id)arg1 ;
-(void)_notifyDidReceiveViewModelError:(id)arg1 ;
-(id)_applicationControllerAlertForJavascriptAlert:(id)arg1 ;
-(void)_completeRequest:(id)arg1 withJavascriptResponse:(id)arg2 javascriptErrorValue:(id)arg3 ;
-(void)setApplicationMustSelfValidate:(BOOL)arg1 ;
-(id)_errorForJavascriptErrorValueValue:(id)arg1 withRequest:(id)arg2 ;
-(void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2 ;
-(void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(NSURL *)fetchedURL;
-(id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2 ;
-(id)_makeJavaScriptRequest;
-(void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2 ;
-(void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2 ;
-(void)applicationDidStart:(id)arg1 ;
-(void)application:(id)arg1 startDidFailWithError:(id)arg2 ;
-(void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2 ;
-(id)launchParamsForApplication:(id)arg1 ;
-(id)activeAppDocumentForApplication:(id)arg1 ;
-(void)transitionToWaitingForBootUrlState;
-(void)transitionToWaitingForBothLaunchCallbacksState;
-(void)transitionToReadyState;
-(void)transitionToNotifyingOfLaunchFailureState;
-(void)transitionToInvalidState;
-(void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1 ;
-(void)submitRequest:(id)arg1 ;
-(void)applicationStartSelfValidationWithAuthenticationToken:(id)arg1 ;
@end


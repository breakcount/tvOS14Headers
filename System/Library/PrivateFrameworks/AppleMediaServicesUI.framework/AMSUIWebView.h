/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AMSUICommonView.h>
#import <libobjc.A.dylib/AMSUIWebViewClientInterface.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>

@protocol AMSUIWebViewPluginInterface;
@class WKWebView, NSArray, AMSBinaryPromise, AMSUIWebClientContext, _WKRemoteObjectInterface, DelegateProxy, NSString;

@interface AMSUIWebView : AMSUICommonView <AMSUIWebViewClientInterface, WKUIDelegate, WKNavigationDelegatePrivate> {

	BOOL _contentLoaded;
	WKWebView* _underlyingWebView;
	NSArray* _baseScripts;
	AMSBinaryPromise* _contentRulesPromise;
	AMSUIWebClientContext* _context;
	AMSBinaryPromise* _currentLoadPromise;
	_WKRemoteObjectInterface* _exportedInterface;
	DelegateProxy* _exportedObjectProxy;
	id<AMSUIWebViewPluginInterface> _remoteProxy;

}

@property (nonatomic,retain) NSArray * baseScripts;                                     //@synthesize baseScripts=_baseScripts - In the implementation block
@property (nonatomic,retain) AMSBinaryPromise * contentRulesPromise;                    //@synthesize contentRulesPromise=_contentRulesPromise - In the implementation block
@property (nonatomic,retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AMSBinaryPromise * currentLoadPromise;                     //@synthesize currentLoadPromise=_currentLoadPromise - In the implementation block
@property (nonatomic,retain) _WKRemoteObjectInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) DelegateProxy * exportedObjectProxy;                       //@synthesize exportedObjectProxy=_exportedObjectProxy - In the implementation block
@property (nonatomic,retain) id<AMSUIWebViewPluginInterface> remoteProxy;               //@synthesize remoteProxy=_remoteProxy - In the implementation block
@property (nonatomic,readonly) WKWebView * underlyingWebView;                           //@synthesize underlyingWebView=_underlyingWebView - In the implementation block
@property (nonatomic,readonly) BOOL contentLoaded;                                      //@synthesize contentLoaded=_contentLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedProcessPool;
-(void)dealloc;
-(void)setExportedInterface:(_WKRemoteObjectInterface *)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(_WKRemoteObjectInterface *)exportedInterface;
-(id)loadRequest:(id)arg1 ;
-(void)layoutSubviews;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 userInfo:(id)arg4 ;
-(void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4 ;
-(void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2 ;
-(void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3 ;
-(void)_webView:(id)arg1 webContentProcessDidTerminateWithReason:(long long)arg2 ;
-(void)_webView:(id)arg1 contentRuleListWithIdentifier:(id)arg2 performedAction:(id)arg3 forURL:(id)arg4 ;
-(id<AMSUIWebViewPluginInterface>)remoteProxy;
-(WKWebView *)underlyingWebView;
-(id)initWithContext:(id)arg1 additionalScripts:(id)arg2 ;
-(id)sendJSRequest:(id)arg1 ;
-(void)updateUserScriptsWithScripts:(id)arg1 ;
-(BOOL)contentLoaded;
-(id)loadHTML:(id)arg1 baseURL:(id)arg2 ;
-(void)_addScriptsToContentController:(id)arg1 additionalScripts:(id)arg2 ;
-(void)_unregisterProxies;
-(id)_prepareWithURL:(id)arg1 loadBlock:(/*^block*/id)arg2 ;
-(AMSBinaryPromise *)currentLoadPromise;
-(void)setCurrentLoadPromise:(AMSBinaryPromise *)arg1 ;
-(void)setRemoteProxy:(id<AMSUIWebViewPluginInterface>)arg1 ;
-(NSArray *)baseScripts;
-(void)setBaseScripts:(NSArray *)arg1 ;
-(AMSBinaryPromise *)contentRulesPromise;
-(id)_setupContentRulesForWebView:(id)arg1 context:(id)arg2 ;
-(void)setContentRulesPromise:(AMSBinaryPromise *)arg1 ;
-(DelegateProxy *)exportedObjectProxy;
-(void)webPlugInDidCreateContext;
-(void)webPlugInWillDestroyContext;
-(void)frameFinishedLoading;
-(void)receiveJSObject:(id)arg1 logKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_webView:(id)arg1 didFailToInitializePlugInWithInfo:(id)arg2 ;
-(void)setExportedObjectProxy:(DelegateProxy *)arg1 ;
@end


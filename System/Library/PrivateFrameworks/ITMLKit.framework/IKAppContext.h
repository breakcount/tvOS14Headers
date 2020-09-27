/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/ISURLOperationDelegate.h>
#import <libobjc.A.dylib/IKAppCacheDelegate.h>
#import <libobjc.A.dylib/IKJSInspectorControllerDelegate.h>

@protocol OS_dispatch_source, IKApplication, IKAppContextDelegate, IKAppScriptFallbackHandler;
@class NSNumber, IKJSArrayBufferStore, NSObject, JSContext, IKAppCache, NSString, NSMutableArray, NSError, IKAppReloadContext, NSURL, IKJSApplication, IKJSFoundation, IKJSWeakMap, IKJSViewModelService, IKViewElementRegistry, IKJSInspectorController;

@interface IKAppContext : NSObject <ISURLOperationDelegate, IKAppCacheDelegate, IKJSInspectorControllerDelegate> {

	IKJSArrayBufferStore* _arrayBufferStore;
	CFRunLoopRef _jsThreadRunLoop;
	CFRunLoopSourceRef _jsThreadRunLoopSource;
	NSObject*<OS_dispatch_source> _lowMemoryWarningSource;
	BOOL _respondsToTraitCollection;
	BOOL _isAirplaneModeEnabled;
	struct {
		BOOL respondsToHighlightViewForOneElement;
		BOOL respondsToHighlightViewsForManyElements;
		BOOL respondsToCancelHighlightForAppContext;
		BOOL respondsToDidInspectElementModeChanged;
	}  _delegateFlags;
	BOOL _isValid;
	BOOL _remoteInspectionEnabled;
	BOOL _mescalPrimeEnabledForXHRRequests;
	BOOL _trusted;
	BOOL _canAccessPendingQueue;
	BOOL _running;
	BOOL _privileged;
	BOOL _appUsesDefaultStyleSheets;
	id<IKApplication> _app;
	unsigned long long _mode;
	id<IKAppContextDelegate> _delegate;
	id<IKAppScriptFallbackHandler> _appScriptFallbackHandler;
	double _appScriptTimeoutInterval;
	JSContext* _jsContext;
	IKAppCache* _appCache;
	NSString* _nextJSChecksum;
	NSMutableArray* _onStartQueue;
	NSString* _responseScript;
	NSError* _responseError;
	IKAppReloadContext* _reloadContext;
	NSMutableArray* _pendingQueue;
	NSURL* _resolvedBootURL;
	NSMutableArray* _postEvaluationBlocks;
	IKJSApplication* _jsApp;
	IKJSFoundation* _jsFoundation;
	IKJSWeakMap* _jsWeakMap;
	IKJSViewModelService* _jsViewModelService;
	IKViewElementRegistry* _viewElementRegistry;
	IKJSInspectorController* _webInspectorController;

}

@property (nonatomic,readonly) IKAppCache * appCache;                                                   //@synthesize appCache=_appCache - In the implementation block
@property (nonatomic,copy) NSString * nextJSChecksum;                                                   //@synthesize nextJSChecksum=_nextJSChecksum - In the implementation block
@property (nonatomic,readonly) NSMutableArray * onStartQueue;                                           //@synthesize onStartQueue=_onStartQueue - In the implementation block
@property (assign,getter=isTrusted,nonatomic) BOOL trusted;                                             //@synthesize trusted=_trusted - In the implementation block
@property (assign,nonatomic) BOOL canAccessPendingQueue;                                                //@synthesize canAccessPendingQueue=_canAccessPendingQueue - In the implementation block
@property (nonatomic,copy) NSString * responseScript;                                                   //@synthesize responseScript=_responseScript - In the implementation block
@property (nonatomic,retain) NSError * responseError;                                                   //@synthesize responseError=_responseError - In the implementation block
@property (nonatomic,retain) IKAppReloadContext * reloadContext;                                        //@synthesize reloadContext=_reloadContext - In the implementation block
@property (getter=isRunning) BOOL running;                                                              //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingQueue;                                             //@synthesize pendingQueue=_pendingQueue - In the implementation block
@property (nonatomic,copy,readonly) NSURL * resolvedBootURL;                                            //@synthesize resolvedBootURL=_resolvedBootURL - In the implementation block
@property (nonatomic,retain) JSContext * jsContext;                                                     //@synthesize jsContext=_jsContext - In the implementation block
@property (nonatomic,retain) NSMutableArray * postEvaluationBlocks;                                     //@synthesize postEvaluationBlocks=_postEvaluationBlocks - In the implementation block
@property (nonatomic,retain) IKJSApplication * jsApp;                                                   //@synthesize jsApp=_jsApp - In the implementation block
@property (nonatomic,retain) IKJSFoundation * jsFoundation;                                             //@synthesize jsFoundation=_jsFoundation - In the implementation block
@property (nonatomic,retain) IKJSWeakMap * jsWeakMap;                                                   //@synthesize jsWeakMap=_jsWeakMap - In the implementation block
@property (nonatomic,retain) IKJSViewModelService * jsViewModelService;                                 //@synthesize jsViewModelService=_jsViewModelService - In the implementation block
@property (assign) BOOL isValid;                                                                        //@synthesize isValid=_isValid - In the implementation block
@property (assign,getter=isPrivileged,nonatomic) BOOL privileged;                                       //@synthesize privileged=_privileged - In the implementation block
@property (nonatomic,readonly) IKViewElementRegistry * viewElementRegistry;                             //@synthesize viewElementRegistry=_viewElementRegistry - In the implementation block
@property (nonatomic,readonly) BOOL appUsesDefaultStyleSheets;                                          //@synthesize appUsesDefaultStyleSheets=_appUsesDefaultStyleSheets - In the implementation block
@property (nonatomic,retain) IKJSInspectorController * webInspectorController;                          //@synthesize webInspectorController=_webInspectorController - In the implementation block
@property (nonatomic,__weak,readonly) id<IKApplication> app;                                            //@synthesize app=_app - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,__weak,readonly) id<IKAppContextDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL remoteInspectionEnabled;                                              //@synthesize remoteInspectionEnabled=_remoteInspectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL mescalPrimeEnabledForXHRRequests;                                     //@synthesize mescalPrimeEnabledForXHRRequests=_mescalPrimeEnabledForXHRRequests - In the implementation block
@property (nonatomic,retain) id<IKAppScriptFallbackHandler> appScriptFallbackHandler;                   //@synthesize appScriptFallbackHandler=_appScriptFallbackHandler - In the implementation block
@property (assign,nonatomic) double appScriptTimeoutInterval;                                           //@synthesize appScriptTimeoutInterval=_appScriptTimeoutInterval - In the implementation block
@property (nonatomic,readonly) IKJSArrayBufferStore * arrayBufferStore; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentAppContext;
+(BOOL)isInFactoryMode;
+(void)registerPrivateProtocols:(id)arg1 forClass:(Class)arg2 ;
-(void)dealloc;
-(BOOL)isValid;
-(id<IKAppContextDelegate>)delegate;
-(void)start;
-(void)stop;
-(BOOL)isTrusted;
-(BOOL)isRunning;
-(unsigned long long)mode;
-(void)reload;
-(void)setRunning:(BOOL)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(void)setResponseError:(NSError *)arg1 ;
-(NSError *)responseError;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(JSContext *)jsContext;
-(void)handleReloadWithUrgencyType:(unsigned long long)arg1 minInterval:(double)arg2 data:(id)arg3 ;
-(void)handleCacheUpdate;
-(id)_appTraitCollection;
-(void)evaluateDelegateBlockSync:(/*^block*/id)arg1 ;
-(void)launchAppWithOptions:(id)arg1 ;
-(void)openURLWithOptions:(id)arg1 ;
-(void)exitAppWithOptions:(id)arg1 ;
-(id<IKApplication>)app;
-(void)setJsApp:(IKJSApplication *)arg1 ;
-(IKJSApplication *)jsApp;
-(void)setJsWeakMap:(IKJSWeakMap *)arg1 ;
-(void)setJsViewModelService:(IKJSViewModelService *)arg1 ;
-(BOOL)isPrivileged;
-(IKJSViewModelService *)jsViewModelService;
-(void)_evaluateFoundationWithDeviceConfig:(id)arg1 addPrivateInterfaces:(BOOL)arg2 ;
-(IKJSFoundation *)jsFoundation;
-(void)setJsFoundation:(IKJSFoundation *)arg1 ;
-(void)setException:(id)arg1 withErrorMessage:(id)arg2 ;
-(void)evaluateFoundationJS;
-(id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 cache:(BOOL)arg3 delegate:(id)arg4 ;
-(void)setRemoteInspectionEnabled:(BOOL)arg1 ;
-(NSURL *)resolvedBootURL;
-(void)appCache:(id)arg1 didUpdateWithChecksum:(id)arg2 ;
-(void)evaluate:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addPostEvaluateBlock:(/*^block*/id)arg1 ;
-(IKJSInspectorController *)webInspectorController;
-(BOOL)validateDOMDocument:(id)arg1 error:(id*)arg2 ;
-(IKJSWeakMap *)jsWeakMap;
-(void)unregisterLoaderWithIdentifier:(id)arg1 ;
-(id)registerLoaderWithIdentifier:(id)arg1 ;
-(IKViewElementRegistry *)viewElementRegistry;
-(BOOL)appUsesDefaultStyleSheets;
-(id)_preferredLaunchURL;
-(void)contextDidFailWithError:(id)arg1 ;
-(BOOL)_prepareStartWithURL:(id)arg1 ;
-(IKAppCache *)appCache;
-(NSString *)nextJSChecksum;
-(void)_networkPropertiesChanged:(id)arg1 ;
-(void)_enqueueOnStartOrExecute:(/*^block*/id)arg1 ;
-(void)_addStopRecordToPendingQueueWithReload:(BOOL)arg1 ;
-(BOOL)canAccessPendingQueue;
-(void)_evaluate:(/*^block*/id)arg1 ;
-(NSMutableArray *)pendingQueue;
-(NSMutableArray *)postEvaluationBlocks;
-(void)_doEvaluate:(/*^block*/id)arg1 ;
-(id)_errorWithMessage:(id)arg1 ;
-(void)_dispatchError:(id)arg1 ;
-(void)setReloadContext:(IKAppReloadContext *)arg1 ;
-(void)setResponseScript:(NSString *)arg1 ;
-(void)setPrivileged:(BOOL)arg1 ;
-(void)setPendingQueue:(NSMutableArray *)arg1 ;
-(void)setCanAccessPendingQueue:(BOOL)arg1 ;
-(void)_startWithURL:(id)arg1 urlTrusted:(BOOL)arg2 ;
-(void)_jsThreadMain;
-(double)appScriptTimeoutInterval;
-(IKAppReloadContext *)reloadContext;
-(void)setTrusted:(BOOL)arg1 ;
-(void)_startWithScript:(id)arg1 scriptUrl:(id)arg2 wasLoadedFromFallback:(BOOL)arg3 ;
-(void)_invalidateJSThread;
-(id<IKAppScriptFallbackHandler>)appScriptFallbackHandler;
-(NSString *)responseScript;
-(BOOL)remoteInspectionEnabled;
-(void)setJsContext:(JSContext *)arg1 ;
-(void)setWebInspectorController:(IKJSInspectorController *)arg1 ;
-(void)contextDidStartWithJS:(id)arg1 options:(id)arg2 ;
-(void)_stopAndReload:(BOOL)arg1 ;
-(void)setNextJSChecksum:(NSString *)arg1 ;
-(NSMutableArray *)onStartQueue;
-(void)contextDidStopWithOptions:(id)arg1 ;
-(void)setPostEvaluationBlocks:(NSMutableArray *)arg1 ;
-(void)_drainOnStartQueue;
-(BOOL)isInspectElementModeEnabled;
-(void)inspectElementModeChanged:(BOOL)arg1 ;
-(BOOL)highlightViewForElementWithID:(long long)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5 ;
-(BOOL)highlightViewsForElementsWithIDs:(id)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5 ;
-(BOOL)cancelHighlightView;
-(IKJSArrayBufferStore *)arrayBufferStore;
-(id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)suspendWithOptions:(id)arg1 ;
-(void)resumeWithOptions:(id)arg1 ;
-(void)appTraitCollectionChanged:(id)arg1 ;
-(void)_sourceScheduledOnRunLoop:(CFRunLoopRef)arg1 ;
-(void)_sourcePerform;
-(void)_sourceCanceledOnRunLoop:(CFRunLoopRef)arg1 ;
-(void)inspectElement:(id)arg1 ;
-(BOOL)mescalPrimeEnabledForXHRRequests;
-(void)setMescalPrimeEnabledForXHRRequests:(BOOL)arg1 ;
-(void)setAppScriptFallbackHandler:(id<IKAppScriptFallbackHandler>)arg1 ;
-(void)setAppScriptTimeoutInterval:(double)arg1 ;
@end


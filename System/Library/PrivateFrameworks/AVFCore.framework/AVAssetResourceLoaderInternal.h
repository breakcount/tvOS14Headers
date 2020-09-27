/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVAssetClientURLRequestHelper, AVWeakReference, NSObject, NSMutableDictionary, NSURLSession, AVAssetCustomURLBridgeForNSURLSession, NSOperationQueue;

@interface AVAssetResourceLoaderInternal : NSObject {

	AVAssetClientURLRequestHelper* URLRequestHelper;
	AVWeakReference* weakReferenceToAsset;
	NSObject*<OS_dispatch_queue> stateQueue;
	AVWeakReference* weakReferenceToDelegate;
	NSObject*<OS_dispatch_queue> delegateQueue;
	OpaqueFigCustomURLLoaderRef customURLLoader;
	OpaqueFigCustomURLHandlerRef customURLHandler;
	OpaqueFigCustomURLHandlerRef authHandler;
	OpaqueFigCustomURLHandlerRef contentKeySessionCustomURLHandler;
	OpaqueFigXPCRemoteClientRef remoteHandlerXPCRemoteClient;
	int loadingCancelled;
	NSMutableDictionary* pendingRequests;
	NSObject*<OS_dispatch_queue> contentInformationCachingQueue;
	NSMutableDictionary* contentInformationCache;
	BOOL preloadsEligibleContentKeys;
	NSURLSession* URLSession;
	AVAssetCustomURLBridgeForNSURLSession* bridgeBetweenHandlerAndSession;
	NSOperationQueue* URLSessionOperationQueue;

}
@end

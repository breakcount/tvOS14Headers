/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICLibraryAuthServiceClientTokenProviderProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableDictionary, NSXPCListener, NSMutableSet, NSXPCConnection, AFMultiUserConnection, NSString;

@interface ICLibraryAuthServiceClientTokenProvider : NSObject <ICLibraryAuthServiceClientTokenProviderProtocol, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _tokenCache;
	BOOL _isService;
	NSXPCListener* _xpcServiceListener;
	NSMutableSet* _xpcConnections;
	NSXPCConnection* _xpcClientConnection;
	AFMultiUserConnection* _siriConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProvider;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)startService;
-(id)_clientConnection;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)_removeConnection:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(void)_loadCache;
-(void)_handleLibraryAuthServiceClientTokenDidChangeDistributedNotification:(id)arg1 ;
-(BOOL)_updateEntriesForAccountsChanges;
-(void)_updateRefreshTimer;
-(void)getTokenForDSID:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getTokenResultsForDSIDs:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getTokenResultForDSID:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateTokenCacheEntryForDSID:(id)arg1 tokenResult:(id)arg2 error:(id)arg3 ;
-(void)_refreshTokenForDSID:(id)arg1 forExternalRequest:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_refreshTokensForDSIDs:(id)arg1 forExternalRequest:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getTokenForcingRefresh:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)addTokenResult:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_commitCache;
-(void)getTokenStatusForDSIDs:(id)arg1 forcingRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isPrivacyAcknowledgementRequired;
-(BOOL)_shouldStopBackgroundRefreshForError:(id)arg1 ;
-(void)stopService;
-(void)getAllTokensForAssistantForcingRefresh:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)cachedTokenAndResetCache:(BOOL)arg1 ;
-(void)getTokenStatusForcingRefresh:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAllTokenStatusForAssistantForcingRefresh:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

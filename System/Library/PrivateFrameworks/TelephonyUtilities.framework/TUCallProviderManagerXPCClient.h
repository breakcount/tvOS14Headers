/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallProviderManagerXPCClient.h>

@protocol TUCallProviderManagerXPCClient <NSObject>
@required
-(oneway void)updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3;

@end

#import <libobjc.A.dylib/TUCallProviderManagerDataSource.h>

@protocol TUCallProviderManagerDataSourceDelegate, OS_dispatch_queue;
@class NSDictionary, NSObject, NSXPCConnection, NSString;

@interface TUCallProviderManagerXPCClient : NSObject <TUCallProviderManagerXPCClient, TUCallProviderManagerDataSource> {

	BOOL _requestedInitialState;
	int _token;
	id<TUCallProviderManagerDataSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	NSDictionary* _providersByIdentifier;
	NSDictionary* _localProvidersByIdentifier;
	NSDictionary* _pairedHostDeviceProvidersByIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                          //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) int token;                                                                //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL requestedInitialState;                                               //@synthesize requestedInitialState=_requestedInitialState - In the implementation block
@property (nonatomic,copy) NSDictionary * providersByIdentifier;                                       //@synthesize providersByIdentifier=_providersByIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * localProvidersByIdentifier;                                  //@synthesize localProvidersByIdentifier=_localProvidersByIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * pairedHostDeviceProvidersByIdentifier;                       //@synthesize pairedHostDeviceProvidersByIdentifier=_pairedHostDeviceProvidersByIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL currentProcessCanAccessInitialState; 
@property (assign,nonatomic,__weak) id<TUCallProviderManagerDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)asynchronousServer;
+(void)setAsynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(void)setSynchronousServer:(id)arg1 ;
+(id)callProviderManagerServerXPCInterface;
+(id)callProviderManagerClientXPCInterface;
+(id)callProviderManagerAllowedClasses;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<TUCallProviderManagerDataSourceDelegate>)delegate;
-(void)setDelegate:(id<TUCallProviderManagerDataSourceDelegate>)arg1 ;
-(int)token;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)server;
-(void)setToken:(int)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)launchAppForDialRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)requestedInitialState;
-(void)_requestInitialState;
-(void)donateUserIntentForProviderWithIdentifier:(id)arg1 ;
-(void)setRequestedInitialState:(BOOL)arg1 ;
-(void)_updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3 ;
-(void)setProvidersByIdentifier:(NSDictionary *)arg1 ;
-(void)setLocalProvidersByIdentifier:(NSDictionary *)arg1 ;
-(void)setPairedHostDeviceProvidersByIdentifier:(NSDictionary *)arg1 ;
-(oneway void)updateProvidersByIdentifier:(id)arg1 localProvidersByIdentifier:(id)arg2 pairedHostDeviceProvidersByIdentifier:(id)arg3 ;
-(BOOL)openURL:(id)arg1 isSensitive:(BOOL)arg2 error:(id*)arg3 ;
-(void)blockUntilInitialStateReceived;
-(BOOL)currentProcessCanAccessInitialState;
-(NSDictionary *)providersByIdentifier;
-(NSDictionary *)localProvidersByIdentifier;
-(NSDictionary *)pairedHostDeviceProvidersByIdentifier;
@end


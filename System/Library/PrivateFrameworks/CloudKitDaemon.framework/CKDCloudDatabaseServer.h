/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, NSOperationQueue;

@interface CKDCloudDatabaseServer : NSObject {

	int _tccToken;
	NSXPCListener* _xpcListener;
	NSMutableArray* _connectedClients;
	NSObject*<OS_dispatch_source> _sighandlerSource;
	NSOperationQueue* _clientTeardownQueue;
	unsigned long long _stateHandle;
	NSObject*<OS_dispatch_source> _statusReportRequestSource;
	NSObject*<OS_dispatch_queue> _statusReportQueue;
	NSObject*<OS_dispatch_queue> _statusReportCallbackQueue;
	NSMutableArray* _statusReportCallbacks;

}

@property (nonatomic,retain) NSXPCListener * xpcListener;                                          //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectedClients;                                    //@synthesize connectedClients=_connectedClients - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> sighandlerSource;                       //@synthesize sighandlerSource=_sighandlerSource - In the implementation block
@property (nonatomic,retain) NSOperationQueue * clientTeardownQueue;                               //@synthesize clientTeardownQueue=_clientTeardownQueue - In the implementation block
@property (assign,nonatomic) unsigned long long stateHandle;                                       //@synthesize stateHandle=_stateHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> statusReportRequestSource;              //@synthesize statusReportRequestSource=_statusReportRequestSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statusReportQueue;                       //@synthesize statusReportQueue=_statusReportQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statusReportCallbackQueue;               //@synthesize statusReportCallbackQueue=_statusReportCallbackQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * statusReportCallbacks;                               //@synthesize statusReportCallbacks=_statusReportCallbacks - In the implementation block
@property (assign,nonatomic) int tccToken;                                                         //@synthesize tccToken=_tccToken - In the implementation block
+(id)sharedServer;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)resume;
-(id)CKStatusReportArray;
-(unsigned long long)stateHandle;
-(void)setStateHandle:(unsigned long long)arg1 ;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)_dumpStatusReportToFileHandle:(id)arg1 ;
-(void)statusReportWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_source>)sighandlerSource;
-(NSObject*<OS_dispatch_source>)statusReportRequestSource;
-(NSMutableArray *)connectedClients;
-(NSOperationQueue *)clientTeardownQueue;
-(NSObject*<OS_dispatch_queue>)statusReportQueue;
-(void)_dumpStatusReportArrayToOsTrace:(id)arg1 ;
-(NSMutableArray *)statusReportCallbacks;
-(NSObject*<OS_dispatch_queue>)statusReportCallbackQueue;
-(void)enumerateConnectedClients:(/*^block*/id)arg1 ;
-(void)dumpStatusReportToFileHandle:(id)arg1 ;
-(void)kickOffPendingLongLivedOperations;
-(void)setConnectedClients:(NSMutableArray *)arg1 ;
-(void)setSighandlerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setClientTeardownQueue:(NSOperationQueue *)arg1 ;
-(void)setStatusReportRequestSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setStatusReportQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStatusReportCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStatusReportCallbacks:(NSMutableArray *)arg1 ;
-(int)tccToken;
-(void)setTccToken:(int)arg1 ;
@end


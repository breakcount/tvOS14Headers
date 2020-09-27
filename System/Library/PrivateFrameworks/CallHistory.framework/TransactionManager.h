/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSXPCConnection, NSXPCInterface, NSMutableArray;

@interface TransactionManager : CHSynchronizedLoggable {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;
	id _syncHelperReadyNotificationRef;
	NSMutableArray* _queuedTransactions;

}
+(id)instance;
-(id)init;
-(void)dealloc;
-(void)appendTransactions:(id)arg1 ;
-(void)createXpcConnection;
-(void)createXpcConnection_sync;
-(void)setupConnectionHandlers_sync;
-(void)appendTransactions_sync:(id)arg1 ;
@end


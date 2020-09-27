/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PKUsageNotificationServerExportedInterface.h>

@class NSXPCListener, NSMutableSet, NSString;

@interface PKUsageNotificationServer : NSObject <NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface> {

	os_unfair_lock_s _lock;
	NSXPCListener* _listener;
	NSMutableSet* _connections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)serviceResumed;
-(void)serviceSuspended;
-(void)initializeUsageNotificationServer;
-(void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2 ;
-(void)notifyPaymentPassIdentifierUsed:(id)arg1 withTransactionInfo:(id)arg2 ;
@end


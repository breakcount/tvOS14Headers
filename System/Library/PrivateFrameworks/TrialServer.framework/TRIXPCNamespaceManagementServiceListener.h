/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol TRITaskQueuing;
@class NSXPCInterface, TRIServerContext, NSString;

@interface TRIXPCNamespaceManagementServiceListener : NSObject <NSXPCListenerDelegate> {

	NSXPCInterface* _interface;
	TRIServerContext* _serverContext;
	id<TRITaskQueuing> _taskQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithServerContext:(id)arg1 taskQueue:(id)arg2 ;
@end


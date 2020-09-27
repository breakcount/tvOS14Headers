/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBProcessMonitorObserverConnection.h>

@protocol RBProcessMonitorObserverConnection <NSObject>
@required
-(void)sendMessage:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3;

@end


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface RBProcessMonitorObserverConnection : NSObject <RBProcessMonitorObserverConnection> {

	NSObject*<OS_xpc_object> _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
@end


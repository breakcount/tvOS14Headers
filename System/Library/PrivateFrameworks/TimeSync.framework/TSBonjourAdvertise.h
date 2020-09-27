/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TSBonjourAdvertiseDelegate;
#import <TimeSync/TimeSync-Structs.h>
@class NSObject;

@interface TSBonjourAdvertise : NSObject {

	DNSServiceRef_tRef _sdRef;
	NSObject*<OS_dispatch_queue> _queue;
	id<TSBonjourAdvertiseDelegate> _delegate;

}

@property (assign,nonatomic) id<TSBonjourAdvertiseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<TSBonjourAdvertiseDelegate>)delegate;
-(void)setDelegate:(id<TSBonjourAdvertiseDelegate>)arg1 ;
-(BOOL)stopAdvertising;
-(void)registeredServiceWithName:(const char*)arg1 regType:(const char*)arg2 domain:(const char*)arg3 withFlags:(unsigned)arg4 ;
-(BOOL)startAdvertisingWithError:(id*)arg1 ;
@end


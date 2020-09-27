/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/AppServerSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_source, OS_dispatch_queue;
@class NSObject, OSLaunchdDomain, NSUUID;

@interface OSLaunchdJob : NSObject {

	NSObject*<OS_xpc_object> _plist;
	OSLaunchdDomain* _domain;
	NSObject*<OS_dispatch_source> _monitor_source;
	/*^block*/id _monitor_handler;
	NSObject*<OS_dispatch_queue> _monitor_queue;
	NSUUID* _handle;

}

@property (nonatomic,readonly) NSUUID * handle;              //@synthesize handle=_handle - In the implementation block
+(id)jobInfoFromMessage:(id)arg1 ;
+(int)_monitorNormalizeError:(int)arg1 ;
+(id)_createJobFromReplyHandle:(id)arg1 ;
+(long long)jobStateFromMessage:(id)arg1 ;
+(id)copyJobsManagedBy:(id)arg1 error:(id*)arg2 ;
+(id)copyJobWithLabel:(id)arg1 domain:(id)arg2 ;
+(id)submitExtension:(id)arg1 overlay:(id)arg2 domain:(id)arg3 error:(id*)arg4 ;
+(id)copyJobWithPid:(int)arg1 ;
-(id)description;
-(NSUUID *)handle;
-(BOOL)remove:(id*)arg1 ;
-(id)start:(id*)arg1 ;
-(id)initWithPlist:(id)arg1 ;
-(id)_initWithHandle:(id)arg1 ;
-(id)_newRequest;
-(void)_setupMonitorSourceWithPort:(unsigned)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithPlist:(id)arg1 domain:(id)arg2 ;
-(id)submitAndStart:(id*)arg1 ;
-(void)monitorOnQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)cancelMonitor;
-(id)createInstance:(unsigned char)arg1 error:(id*)arg2 ;
@end


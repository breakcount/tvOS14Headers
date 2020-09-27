/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFNetMonitorDelegate;
@class HMFNetAddress, NSString;

@interface HMFNetMonitor : HMFObject <HMFLogging> {

	os_unfair_lock_s _lock;
	BOOL _reachable;
	id<HMFNetMonitorDelegate> _delegate;
	HMFNetAddress* _netAddress;

}

@property (getter=isReachable) BOOL reachable; 
@property (__weak) id<HMFNetMonitorDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) HMFNetAddress * netAddress;              //@synthesize netAddress=_netAddress - In the implementation block
@property (readonly) unsigned long long reachabilityPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(id<HMFNetMonitorDelegate>)delegate;
-(void)setDelegate:(id<HMFNetMonitorDelegate>)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(BOOL)isReachable;
-(id)initWithNetAddress:(id)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(unsigned long long)reachabilityPath;
-(HMFNetAddress *)netAddress;
@end


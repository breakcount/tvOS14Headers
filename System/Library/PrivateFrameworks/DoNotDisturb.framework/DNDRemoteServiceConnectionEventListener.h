/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol DNDRemoteServiceConnectionEventListener <NSObject>
@property (nonatomic,copy,readonly) NSString * clientIdentifier; 
@optional
-(void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
-(void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
-(void)remoteService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
-(void)remoteService:(id)arg1 didChangeActiveModeAssertion:(id)arg2 invalidation:(id)arg3;
-(void)remoteService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
-(void)remoteService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
-(void)remoteService:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;

@required
-(NSString *)clientIdentifier;

@end


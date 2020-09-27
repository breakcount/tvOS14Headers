/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMDLogEventDispatcher;


@protocol HMDLogEventSubmitting <NSObject>
@property (readonly) HMDLogEventDispatcher * logEventDispatcher; 
@optional
-(void)submitLogEvent:(id)arg1;
-(void)submitLogEvent:(id)arg1 error:(id)arg2;
-(HMDLogEventDispatcher *)logEventDispatcher;

@end


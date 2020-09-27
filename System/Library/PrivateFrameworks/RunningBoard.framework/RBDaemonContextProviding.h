/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class RBProcess;


@protocol RBDaemonContextProviding <NSObject>
@property (nonatomic,readonly) id<RBAssertionManaging> assertionManager; 
@property (nonatomic,readonly) id<RBEntitlementManaging> entitlementManager; 
@property (nonatomic,readonly) id<RBProcessManaging> processManager; 
@property (nonatomic,readonly) id<RBProcessMonitoring> processMonitor; 
@property (nonatomic,readonly) id<RBStateCaptureManaging> stateCaptureManager; 
@property (nonatomic,readonly) RBProcess * process; 
@required
-(id<RBProcessManaging>)processManager;
-(RBProcess *)process;
-(id<RBProcessMonitoring>)processMonitor;
-(id<RBEntitlementManaging>)entitlementManager;
-(id<RBAssertionManaging>)assertionManager;
-(id<RBStateCaptureManaging>)stateCaptureManager;

@end

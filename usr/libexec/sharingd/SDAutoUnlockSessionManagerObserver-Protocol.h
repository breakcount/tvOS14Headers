//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, SDAutoUnlockSessionManager, SFAutoUnlockDevice;

@protocol SDAutoUnlockSessionManagerObserver <NSObject>

@optional
- (void)session:(SDAutoUnlockSessionManager *)arg1 didFailUnlockWithResults:(NSDictionary *)arg2 error:(NSError *)arg3 incrementedAttempt:(_Bool)arg4;
- (void)session:(SDAutoUnlockSessionManager *)arg1 didCompleteUnlockWithDevice:(SFAutoUnlockDevice *)arg2;
- (void)session:(SDAutoUnlockSessionManager *)arg1 didBeginAttemptWithDevice:(SFAutoUnlockDevice *)arg2;
- (void)session:(SDAutoUnlockSessionManager *)arg1 didFailToEnableDevice:(SFAutoUnlockDevice *)arg2 error:(NSError *)arg3;
- (void)session:(SDAutoUnlockSessionManager *)arg1 didEnableWithDevice:(SFAutoUnlockDevice *)arg2;
- (void)session:(SDAutoUnlockSessionManager *)arg1 didReceiveKeyDeviceLocked:(SFAutoUnlockDevice *)arg2;
@end


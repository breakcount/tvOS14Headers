//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol PBUserNotificationViewController;

@protocol PBUserNotificationViewControllerDelegate <NSObject>
- (void)didCancelUserNotificationViewController:(UIViewController<PBUserNotificationViewController> *)arg1;
- (void)userNotificationViewController:(UIViewController<PBUserNotificationViewController> *)arg1 didSelectButtonIndex:(unsigned long long)arg2;
@end

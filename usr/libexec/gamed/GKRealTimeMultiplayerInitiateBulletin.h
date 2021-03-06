//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKRealTimeMultiplayerBulletin.h"

@interface GKRealTimeMultiplayerInitiateBulletin : GKRealTimeMultiplayerBulletin
{
    _Bool _isReconnect;	// 112 = 0x70
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100036998
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100036990
@property _Bool isReconnect; // @synthesize isReconnect=_isReconnect;
- (void)loadDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038428
- (void)handleDeclineAction;	// IMP=0x0000000100038344
- (void)handleAcceptAction;	// IMP=0x00000001000381b0
- (void)handleAction:(id)arg1;	// IMP=0x0000000100037f80
- (void)assembleBulletin;	// IMP=0x0000000100037a04
- (void)parseClientData:(id)arg1;	// IMP=0x0000000100037824
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000376e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100037598
- (id)initWithPushNotification:(id)arg1;	// IMP=0x000000010003745c

@end


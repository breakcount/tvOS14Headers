//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKIOHIDServiceMatcherDataProviding-Protocol.h"

@class BKHIDClientConnectionManager, BKHIDEventDeliveryManager, BKHIDEventSenderCache, NSString;

@protocol BKHIDSystemInterfacing <BKIOHIDServiceMatcherDataProviding>
@property(readonly) BKHIDClientConnectionManager *clientConnectionManager;
@property(readonly) BKHIDEventSenderCache *senderCache;
@property(readonly) BKHIDEventDeliveryManager *deliveryManager;
- (struct __IOHIDEvent *)systemEventOfType:(unsigned int)arg1 matchingEvent:(struct __IOHIDEvent *)arg2 options:(unsigned int)arg3;
- (void)injectGSEvent:(struct __GSEvent *)arg1;
- (void)injectHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)setSystemProperty:(id)arg1 forKey:(NSString *)arg2;
- (id)systemPropertyForKey:(NSString *)arg1;
@end

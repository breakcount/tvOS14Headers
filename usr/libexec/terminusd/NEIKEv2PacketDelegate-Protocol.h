//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;
@protocol NEIKEv2PacketReceiver;

@protocol NEIKEv2PacketDelegate <NSObject>
- (_Bool)sendPacketData:(NSData *)arg1;
- (void)setPacketReceiver:(id <NEIKEv2PacketReceiver>)arg1;
@end


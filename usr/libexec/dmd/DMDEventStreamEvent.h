//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface DMDEventStreamEvent : NSObject
{
    NSString *_eventType;	// 8 = 0x8
    NSDictionary *_details;	// 16 = 0x10
    NSDate *_timestamp;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004682c
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (id)eventStatusMessageWithPayloadIdentifier:(id)arg1;	// IMP=0x00000001000466cc
- (id)description;	// IMP=0x000000010004661c
- (id)initWithEventType:(id)arg1 details:(id)arg2;	// IMP=0x0000000100046540

@end

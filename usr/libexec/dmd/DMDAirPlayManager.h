//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DMDAirPlayManager : NSObject
{
    _Bool mDeviceIDIsMAC;	// 8 = 0x8
    NSString *_currentlyPickedDestinationName;	// 16 = 0x10
    NSString *_currentlyPickedDestinationDeviceID;	// 24 = 0x18
}

+ (id)shared;	// IMP=0x00000001000116ac
- (void).cxx_destruct;	// IMP=0x0000000100012c48
@property(copy, nonatomic) NSString *currentlyPickedDestinationDeviceID; // @synthesize currentlyPickedDestinationDeviceID=_currentlyPickedDestinationDeviceID;
@property(copy, nonatomic) NSString *currentlyPickedDestinationName; // @synthesize currentlyPickedDestinationName=_currentlyPickedDestinationName;
- (id)_discoverDeviceWithDestinationName:(id)arg1 scanWaitTime:(double)arg2 sessionType:(unsigned long long)arg3;	// IMP=0x0000000100012818
- (id)_discoverDeviceWithDestinationDeviceID:(id)arg1 scanWaitTime:(double)arg2 error:(id *)arg3;	// IMP=0x0000000100012424
- (void)_promptUserToMirrorOnDisplayNamed:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012084
- (_Bool)_setOutputDevices:(id)arg1 forSessionType:(unsigned long long)arg2 password:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100011dfc
- (void *)_outputContextForSessionType:(unsigned long long)arg1;	// IMP=0x0000000100011dd0
- (_Bool)stopAirPlaySessionOfType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000100011db4
- (_Bool)startAirPlaySessionWithDestinationName:(id)arg1 destinationDeviceID:(id)arg2 password:(id)arg3 scanWaitTime:(double)arg4 sessionType:(unsigned long long)arg5 force:(_Bool)arg6 error:(id *)arg7;	// IMP=0x0000000100011784
- (id)initPrivate;	// IMP=0x0000000100011724

@end

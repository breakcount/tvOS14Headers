//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPClientProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface RPClientProxy : NSObject <RPClientProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001a7a0
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (oneway void)recordingTimerDidUpdate:(id)arg1;	// IMP=0x000000010001a68c
- (oneway void)recordingDidPause;	// IMP=0x000000010001a5a4
- (oneway void)shouldResumeSessionType:(id)arg1;	// IMP=0x000000010001a4a4
- (oneway void)recordingLockInterrupted:(id)arg1;	// IMP=0x000000010001a3a4
- (oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;	// IMP=0x000000010001a21c
- (oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;	// IMP=0x000000010001a08c
- (oneway void)updateBroadcastURL:(id)arg1;	// IMP=0x0000000100019f8c
- (oneway void)updateBroadcastServiceInfo:(id)arg1;	// IMP=0x0000000100019e8c
- (oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;	// IMP=0x0000000100019d68
- (oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1;	// IMP=0x0000000100019c68
- (void)dealloc;	// IMP=0x0000000100019be0
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100019b6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


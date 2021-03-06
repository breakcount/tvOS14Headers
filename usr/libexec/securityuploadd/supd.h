//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "supdProtocol-Protocol.h"

@class NSArray, NSDictionary, SFAnalyticsReporter;
@protocol OS_dispatch_queue;

@interface supd : NSObject <supdProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_analyticsTopics;	// 16 = 0x10
    SFAnalyticsReporter *_reporter;	// 24 = 0x18
    NSDictionary *_topicsSamplingRates;	// 32 = 0x20
}

+ (void)removeInstance;	// IMP=0x000000010000eff4
+ (id)instance;	// IMP=0x000000010000efb0
+ (void)instantiate;	// IMP=0x000000010000ef88
- (void).cxx_destruct;	// IMP=0x000000010000ed84
@property(retain) NSDictionary *topicsSamplingRates; // @synthesize topicsSamplingRates=_topicsSamplingRates;
@property(readonly) SFAnalyticsReporter *reporter; // @synthesize reporter=_reporter;
@property(readonly) NSArray *analyticsTopics; // @synthesize analyticsTopics=_analyticsTopics;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)forceUploadWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ebc0
- (void)createChunkedLoggingJSON:(_Bool)arg1 topic:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e878
- (void)createLoggingJSON:(_Bool)arg1 topic:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e530
- (void)getSysdiagnoseDumpWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e4c0
- (id)stringForEventClass:(long long)arg1;	// IMP=0x000000010000e468
- (void)clientStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e128
- (void)setUploadDateWith:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000df90
- (id)getSysdiagnoseDump;	// IMP=0x000000010000db78
- (id)sysdiagnoseStringForEventRecord:(id)arg1;	// IMP=0x000000010000d868
- (_Bool)uploadAnalyticsWithError:(id *)arg1 force:(_Bool)arg2;	// IMP=0x000000010000cdd4
- (id)serializeLoggingEvents:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000cbc0
- (void)performRegularlyScheduledUpload;	// IMP=0x000000010000ca38
- (void)sendNotificationForOncePerReportSamplers;	// IMP=0x000000010000ca04
- (id)init;	// IMP=0x000000010000c9b4
- (id)initWithReporter:(id)arg1;	// IMP=0x000000010000c8bc
- (void)setupSamplingRates;	// IMP=0x000000010000c3e8
- (void)setupTopics;	// IMP=0x000000010000c13c

@end


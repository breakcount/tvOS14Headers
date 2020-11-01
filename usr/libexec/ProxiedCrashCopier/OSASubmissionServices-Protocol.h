//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol OSASubmissionServices <NSObject>
- (void)resetMessageTracer;
- (void)fetchMessageTracerWhitelistWithVersion:(NSString *)arg1 andReply:(void (^)(NSArray *))arg2;
- (void)fetchMessageTracerWhitelistWithReply:(void (^)(NSArray *))arg1;
- (void)queryMessageTracer:(NSArray *)arg1 withReply:(void (^)(NSArray *))arg2;
- (void)fetchTypeBlackListWithReply:(void (^)(NSSet *))arg1;
- (void)fetchMainConfigFileWithOverrrides:(NSDictionary *)arg1 withReply:(void (^)(NSData *))arg2;
- (void)fetchWeeklyUserDynamicPrefLoggingListWithReply:(void (^)(NSArray *))arg1;
- (void)fetchDailyUserDynamicPrefLoggingListWithReply:(void (^)(NSArray *))arg1;
- (void)updateConfigFile;
- (void)canSubmitLogOfType:(NSString *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)cleanupWithHomeDirectoryLocation:(NSString *)arg1;
- (void)submitWithOptions:(NSDictionary *)arg1 resultsCallback:(void (^)(NSDictionary *))arg2;
@end

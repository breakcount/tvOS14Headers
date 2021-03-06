//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HTTailspin : NSObject
{
}

+ (_Bool)saveTailspinWithFileName:(id)arg1 path:(id)arg2 infoDict:(id)arg3 startTime:(unsigned long long)arg4 endTime:(unsigned long long)arg5 processString:(id)arg6 pid:(int)arg7 requestType:(long long)arg8 includeOSSignposts:(_Bool)arg9;	// IMP=0x000000010001dbe4
+ (_Bool)saveTailSpinWithFileName:(id)arg1 infoDict:(id)arg2 startTime:(unsigned long long)arg3 endTime:(unsigned long long)arg4 processString:(id)arg5 pid:(int)arg6 requestType:(long long)arg7;	// IMP=0x000000010001d8bc
+ (_Bool)saveTailSpinForService:(id)arg1 reason:(id)arg2 processID:(int)arg3 threadID:(unsigned long long)arg4 procName:(id)arg5 procPath:(id)arg6 startTime:(unsigned long long)arg7 endTime:(unsigned long long)arg8 blownFenceId:(unsigned long long)arg9 hangType:(long long)arg10;	// IMP=0x000000010001d348
+ (_Bool)saveActivationTailSpinWithType:(id)arg1 reason:(id)arg2 bundleID:(id)arg3 pid:(int)arg4 startTime:(unsigned long long)arg5 endTime:(unsigned long long)arg6;	// IMP=0x000000010001cc84
+ (_Bool)saveSentryTailspin:(id)arg1 infoDict:(id)arg2 startTime:(unsigned long long)arg3 endTime:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000010001c608
+ (void)incrementDailyFenceLogGenerationCount;	// IMP=0x000000010001c284
+ (void)incrementDailyLogGenerationCountForDuration:(double)arg1 isFirstPartyApp:(_Bool)arg2;	// IMP=0x000000010001c00c
+ (void)incrementAppGeneratedLogsCountForDuration:(double)arg1 procName:(id)arg2 isFirstPartyApp:(_Bool)arg3;	// IMP=0x000000010001bd50
+ (_Bool)hasExceededDailyFenceLogLimit;	// IMP=0x000000010001bc20
+ (_Bool)hasExceededDailyLimit:(double)arg1 isFirstPartyApp:(_Bool)arg2;	// IMP=0x000000010001b860
+ (_Bool)hasAppExceededGeneratedLogsCountForDuration:(double)arg1 procName:(id)arg2 isFirstPartyApp:(_Bool)arg3;	// IMP=0x000000010001b740
+ (void)resetPerAppCounts;	// IMP=0x000000010001b6ac
+ (void)resetPerPeriodSentryTailspinCounts;	// IMP=0x000000010001b5f4
+ (void)resetDailySentryTailspinCounts;	// IMP=0x000000010001b53c
+ (void)resetDailyActivationTailspinCounts;	// IMP=0x000000010001b484
+ (void)resetAppActivationTailspinCounts;	// IMP=0x000000010001b3f8
+ (void)resetDailyGeneratedLogsCounts;	// IMP=0x000000010001b120
+ (void)resetLogCountsForDailyRollover;	// IMP=0x000000010001b070
+ (void)resetLogCountsForEPL;	// IMP=0x000000010001afd0
+ (void)refreshPerPeriodSentryLogCount;	// IMP=0x000000010001af08
+ (void)refreshAppGeneratedLogsCount;	// IMP=0x000000010001ac58
+ (void)initialize;	// IMP=0x000000010001ac08

@end


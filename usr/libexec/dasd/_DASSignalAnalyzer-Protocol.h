//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol _DASSignalReader;

@protocol _DASSignalAnalyzer <NSObject>
@property(readonly, nonatomic) NSMutableDictionary *analyticsStatus;
@property(readonly, nonatomic) unsigned long long analyzeToMonitorRatio;
@property(readonly, nonatomic) id <_DASSignalReader> reader;
@property(readonly, nonatomic) unsigned long long controlEffortResult;
@property(readonly, nonatomic) NSString *analyzerName;
- (void)stop;
- (void)start;
- (id)initWithQueueLimit:(unsigned long long)arg1 reader:(id <_DASSignalReader>)arg2 monitoringInterval:(unsigned long long)arg3 analyzeToMonitorRatio:(unsigned long long)arg4;
@end

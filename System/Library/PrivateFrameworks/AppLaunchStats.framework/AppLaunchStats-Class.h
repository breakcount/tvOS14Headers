/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AppLaunchStats : NSObject
+(id)log;
-(void)preWarmHasStarted:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)preWarmHasEnded:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4 ;
-(void)okToPassPushMessageForTopic:(id)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setAppLaunchStatsDelegate:(id)arg1 queue:(id)arg2 ;
-(void)okToLaunchMessageFor:(id)arg1 forReasons:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setAppLaunchStatsPendingHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)setDelayLaunchFor:(id)arg1 with:(double)arg2 ;
-(void)setAppLaunchRecommendationHandler:(/*^block*/id)arg1 ;
-(void)setPendingWorkQueue:(id)arg1 ;
@end


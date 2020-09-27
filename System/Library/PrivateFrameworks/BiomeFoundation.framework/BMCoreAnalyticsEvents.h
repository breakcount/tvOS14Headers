/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BMCoreAnalyticsEvents : NSObject
+(id)dictionaryWithUnreadableEventTime:(double)arg1 stream:(long long)arg2 segmentTime:(double)arg3 ;
+(void)sendEvent:(id)arg1 payload:(id)arg2 ;
+(id)dictionaryWithAppLaunchEventWritten:(BOOL)arg1 size:(unsigned)arg2 ;
+(id)dictionaryWithIntentEventWritten:(BOOL)arg1 size:(unsigned)arg2 ;
+(id)dictionaryWithPrunePublicStream:(long long)arg1 deletionInterval:(double)arg2 eventDeletionCount:(unsigned)arg3 ;
+(id)dictionaryWithBookmarkResumeFailureTime:(double)arg1 bookmarkCreationTime:(double)arg2 publicStream:(long long)arg3 ;
+(id)dictionaryWithUnreadableSegment:(double)arg1 stream:(long long)arg2 size:(unsigned)arg3 ;
+(void)sendUnreadableEventTime:(double)arg1 stream:(long long)arg2 segmentTime:(double)arg3 ;
+(void)sendAppLaunchEventWritten:(BOOL)arg1 size:(unsigned)arg2 ;
+(void)sendIntentEventWritten:(BOOL)arg1 size:(unsigned)arg2 ;
+(void)sendPrunePublicStream:(long long)arg1 deletionInterval:(double)arg2 eventDeletionCount:(unsigned)arg3 ;
+(void)sendBookmarkResumeFailureTime:(double)arg1 bookmarkCreationTime:(double)arg2 publicStream:(long long)arg3 ;
+(void)sendUnreadableSegment:(double)arg1 stream:(long long)arg2 size:(unsigned)arg3 ;
@end


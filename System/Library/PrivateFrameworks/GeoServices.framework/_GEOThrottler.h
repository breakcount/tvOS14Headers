/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _GEOThrottler <NSObject>
@property (nonatomic,readonly) NSString * keyPath; 
@property (nonatomic,readonly) double timeWindow; 
@required
+(BOOL)stateIsExpired:(id)arg1;
-(NSString *)keyPath;
-(BOOL)isExpired;
-(unsigned long long)remainingEntries;
-(unsigned)maxReqCount;
-(double)timeWindow;
-(double)timeUntilReset;
-(id)userInfoForError;
-(BOOL)addRequestTimestamp;
-(id)captureState;
-(id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4;

@end

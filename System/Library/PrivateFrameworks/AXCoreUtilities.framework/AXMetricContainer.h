/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXMetricContainer <NSObject>
@property (nonatomic,readonly) BOOL measurementsEnabled; 
@required
-(id)startMeasure:(id)arg1;
-(void)measure:(id)arg1 execute:(/*^block*/id)arg2;
-(BOOL)measurementsEnabled;
-(id)measure:(id)arg1 tryExecute:(/*^block*/id)arg2;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PHAActivityLog : NSObject {

	double _absoluteStartTime;
	double _absoluteEndTime;
	unsigned long long _status;
	unsigned long long _graphRequestInterruptionCount;
	NSDate* _startDate;
	double _duration;

}

@property (nonatomic,readonly) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)status;
-(NSDate *)startDate;
-(double)duration;
-(void)markProcessingStopped:(unsigned long long)arg1 ;
@end


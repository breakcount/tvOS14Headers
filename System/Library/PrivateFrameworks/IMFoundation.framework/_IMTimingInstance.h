/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _IMTimingInstance : NSObject {

	double _startTiming;
	double _stopTiming;
	double _totalTime;
	BOOL _isRunning;

}

@property (assign,nonatomic) double totalTime;              //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) BOOL isRunning;                //@synthesize isRunning=_isRunning - In the implementation block
+(id)createTimingInstanceWithStartTime:(float)arg1 ;
-(id)description;
-(id)init;
-(BOOL)isRunning;
-(void)setTotalTime:(double)arg1 ;
-(double)totalTime;
-(void)startUsingTime:(double)arg1 ;
-(void)stopUsingTime:(double)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
@end


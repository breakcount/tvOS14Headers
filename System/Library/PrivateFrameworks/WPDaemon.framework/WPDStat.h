/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface WPDStat : NSObject {

	double _currentTime;
	NSDate* _lastTime;

}

@property (assign) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (retain) NSDate * lastTime;               //@synthesize lastTime=_lastTime - In the implementation block
-(id)init;
-(void)startTime;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)stopTime;
-(NSDate *)lastTime;
-(void)setLastTime:(NSDate *)arg1 ;
-(void)calculateTimeUpdate;
@end


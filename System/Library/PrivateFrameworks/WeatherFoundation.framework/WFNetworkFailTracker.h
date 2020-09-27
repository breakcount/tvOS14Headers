/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFNetworkFailTracker : NSObject {

	int _numConsecutiveFails;
	double _lastFailTimeInSeconds;

}

@property (nonatomic,readonly) int numConsecutiveFails;                   //@synthesize numConsecutiveFails=_numConsecutiveFails - In the implementation block
@property (nonatomic,readonly) double lastFailTimeInSeconds;              //@synthesize lastFailTimeInSeconds=_lastFailTimeInSeconds - In the implementation block
-(double)lastFailTimeInSeconds;
-(void)incrementFailCount;
-(BOOL)lastFailTimeExpiredForSettings:(id)arg1 ;
-(int)numConsecutiveFails;
@end


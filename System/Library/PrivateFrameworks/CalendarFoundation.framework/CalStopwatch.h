/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CalStopwatch : NSObject {

	BOOL _isRunning;
	unsigned long long _lastStartTime;
	unsigned long long _elapsedTime;
	BOOL _hasValidElapsedTime;
	NSMutableDictionary* _events;
	BOOL _usesSignalFlags;

}

@property (assign) BOOL usesSignalFlags;              //@synthesize usesSignalFlags=_usesSignalFlags - In the implementation block
-(id)description;
-(id)init;
-(void)start;
-(void)stop;
-(void)reset;
-(unsigned long long)elapsedTimeInNanoseconds;
-(unsigned long long)elapsedTimeAsNumber:(int)arg1 ;
-(BOOL)usesSignalFlags;
-(id)elapsedTimeAsString:(int)arg1 ;
-(void)markEventStart:(id)arg1 ;
-(double)markEventSplit:(id)arg1 ;
-(double)markEventEnd:(id)arg1 ;
-(void)setUsesSignalFlags:(BOOL)arg1 ;
@end


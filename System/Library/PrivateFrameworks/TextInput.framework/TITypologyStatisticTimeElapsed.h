/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyStatistic.h>

@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic {

	TITypologyTimer* _timer;
	TITypologyTimer* _adjustedTimer;

}

@property (nonatomic,retain) TITypologyTimer * timer;                      //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) TITypologyTimer * adjustedTimer;              //@synthesize adjustedTimer=_adjustedTimer - In the implementation block
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) double adjustedElapsedTime; 
-(id)init;
-(void)setTimer:(TITypologyTimer *)arg1 ;
-(TITypologyTimer *)timer;
-(double)elapsedTime;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(id)structuredReport;
-(id)aggregateReport;
-(double)adjustedElapsedTime;
-(TITypologyTimer *)adjustedTimer;
-(void)setAdjustedTimer:(TITypologyTimer *)arg1 ;
@end


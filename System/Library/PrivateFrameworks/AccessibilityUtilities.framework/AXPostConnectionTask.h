/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXAccessQueueTimer;

@interface AXPostConnectionTask : NSObject {

	BOOL _didTimeout;
	/*^block*/id _postConnectionBlock;
	AXAccessQueueTimer* _timeoutTimer;

}

@property (nonatomic,copy) id postConnectionBlock;                           //@synthesize postConnectionBlock=_postConnectionBlock - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic) BOOL didTimeout;                                //@synthesize didTimeout=_didTimeout - In the implementation block
-(void)setPostConnectionBlock:(id)arg1 ;
-(void)setTimeoutTimer:(AXAccessQueueTimer *)arg1 ;
-(AXAccessQueueTimer *)timeoutTimer;
-(void)setDidTimeout:(BOOL)arg1 ;
-(void)_performTask;
-(id)postConnectionBlock;
-(BOOL)didTimeout;
-(id)initWithConnectBlock:(/*^block*/id)arg1 timeout:(double)arg2 accessQueue:(id)arg3 ;
-(void)performTask;
@end

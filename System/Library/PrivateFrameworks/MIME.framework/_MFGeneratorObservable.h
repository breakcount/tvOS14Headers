/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>

@protocol MFScheduler;
@class MFCancelationToken;

@interface _MFGeneratorObservable : MFObservable {

	id<MFScheduler> _scheduler;
	MFCancelationToken* _cancelable;
	id _state;
	/*^block*/id _condition;
	/*^block*/id _nextStateForState;
	/*^block*/id _resultFromState;
	/*^block*/id _delayForState;

}
-(void)dealloc;
-(BOOL)_isFinished;
-(id)subscribe:(id)arg1 ;
-(id)initWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
-(void)_updateState;
-(void)_scheduleNextResultForObserver:(id)arg1 ;
@end


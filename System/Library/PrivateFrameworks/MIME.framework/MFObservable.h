/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFObservable : NSObject
+(id)observableWithBlock:(/*^block*/id)arg1 ;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 scheduler:(id)arg5 ;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
+(id)observableWithResults:(id)arg1 scheduler:(id)arg2 ;
+(id)emptyObservable;
+(id)observableWithResults:(id)arg1 ;
+(id)observableWithResult:(id)arg1 ;
+(id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2 ;
+(id)concatenate:(id)arg1 ;
+(id)observableWithFuture:(id)arg1 ;
+(id)observableWithError:(id)arg1 ;
+(id)neverObservable;
+(id)combineLatest:(id)arg1 ;
+(id)merge:(id)arg1 ;
+(id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2 ;
+(id)observableOnNotificationCenter:(id)arg1 name:(id)arg2 object:(id)arg3 ;
+(id)observableObserver;
-(id)publish;
-(id)first;
-(id)doOnTerminate:(/*^block*/id)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(id)observeOn:(id)arg1 ;
-(id)filter:(/*^block*/id)arg1 ;
-(id)take:(unsigned long long)arg1 ;
-(id)subscribeOn:(id)arg1 ;
-(id)doOnCompletion:(/*^block*/id)arg1 ;
-(id)doOnError:(/*^block*/id)arg1 ;
-(id)sampleWithObservable:(id)arg1 ;
-(id)startWith:(id)arg1 scheduler:(id)arg2 ;
-(id)allObjects:(id*)arg1 ;
-(id)distinctUntilChanged;
-(id)doOnCancel:(/*^block*/id)arg1 ;
-(id)doOnNext:(/*^block*/id)arg1 ;
-(id)doOnSubscribe:(/*^block*/id)arg1 ;
-(id)startWith:(id)arg1 ;
-(id)replay:(unsigned long long)arg1 ;
-(id)sampleWithTimeInterval:(double)arg1 scheduler:(id)arg2 ;
-(id)subscribeWithResultBlock:(/*^block*/id)arg1 ;
-(id)replay;
-(id)sampleWithTimeInterval:(double)arg1 ;
@end


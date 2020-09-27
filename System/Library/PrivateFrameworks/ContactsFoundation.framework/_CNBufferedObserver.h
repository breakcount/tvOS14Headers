/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNObserver.h>

@protocol CNObserver;
@class CNSuspendableSchedulerDecorator, NSString;

@interface _CNBufferedObserver : NSObject <CNObserver> {

	CNSuspendableSchedulerDecorator* _observerScheduler;
	id<CNObserver> _observer;

}

@property (nonatomic,readonly) id<CNObserver> observer;                                          //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * observerScheduler;              //@synthesize observerScheduler=_observerScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bufferObserver:(id)arg1 schedulerProvider:(id)arg2 ;
-(void)resume;
-(id<CNObserver>)observer;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)initWithObserver:(id)arg1 scheduler:(id)arg2 ;
-(CNSuspendableSchedulerDecorator *)observerScheduler;
@end


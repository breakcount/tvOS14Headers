/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFTimerDelegate.h>

@protocol HMFStagedValueDelegate;
@class HMFUnfairLock, HMFTimer, NSString;

@interface HMFStagedValue : NSObject <HMFLogging, HMFTimerDelegate> {

	id _stagedValue;
	BOOL _isStaged;
	HMFUnfairLock* _lock;
	id _committedValue;
	HMFTimer* _timer;
	id<HMFStagedValueDelegate> _delegate;
	/*^block*/id _timerFactory;

}

@property (retain) id committedValue;                                //@synthesize committedValue=_committedValue - In the implementation block
@property (retain) HMFTimer * timer;                                 //@synthesize timer=_timer - In the implementation block
@property (copy) id timerFactory;                                    //@synthesize timerFactory=_timerFactory - In the implementation block
@property (readonly) id value; 
@property (__weak) id<HMFStagedValueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMFStagedValueDelegate>)delegate;
-(void)setDelegate:(id<HMFStagedValueDelegate>)arg1 ;
-(id)value;
-(id)initWithValue:(id)arg1 ;
-(void)setTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)timer;
-(void)_commitValue:(id)arg1 ;
-(void)_stageValue:(id)arg1 withTimeout:(double)arg2 ;
-(void)_unstageValue;
-(void)timerDidFire:(id)arg1 ;
-(void)stageValue:(id)arg1 withTimeout:(double)arg2 ;
-(void)commitValue:(id)arg1 ;
-(id)committedValue;
-(void)setCommittedValue:(id)arg1 ;
-(id)timerFactory;
-(void)setTimerFactory:(id)arg1 ;
@end


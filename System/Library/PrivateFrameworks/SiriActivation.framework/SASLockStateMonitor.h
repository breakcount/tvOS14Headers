/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SASLockStateMonitorDelegate;
@class NSNumber;

@interface SASLockStateMonitor : NSObject {

	BOOL _unlockedByTouchID;
	id<SASLockStateMonitorDelegate> _delegate;
	unsigned long long _lockState;
	NSNumber* _assistantIsEnabled;

}

@property (assign,nonatomic) unsigned long long lockState;                                 //@synthesize lockState=_lockState - In the implementation block
@property (assign,nonatomic) BOOL unlockedByTouchID;                                       //@synthesize unlockedByTouchID=_unlockedByTouchID - In the implementation block
@property (nonatomic,retain) NSNumber * assistantIsEnabled;                                //@synthesize assistantIsEnabled=_assistantIsEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<SASLockStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<SASLockStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<SASLockStateMonitorDelegate>)arg1 ;
-(BOOL)isBlocked;
-(NSNumber *)assistantIsEnabled;
-(void)setAssistantIsEnabled:(NSNumber *)arg1 ;
-(unsigned long long)lockState;
-(void)setLockState:(unsigned long long)arg1 ;
-(BOOL)hasUnlockedSinceBoot;
-(unsigned long long)_currentLockState;
-(BOOL)isScreenOn;
-(BOOL)unlockedByTouchID;
-(void)setUnlockedByTouchID:(BOOL)arg1 ;
@end


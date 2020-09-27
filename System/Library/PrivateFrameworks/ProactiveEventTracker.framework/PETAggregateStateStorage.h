/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PETAggregateStateStorage : NSObject
+(id)storageInMemory;
+(id)storageOnDisk:(id)arg1 ;
-(void)reset;
-(void)expand:(unsigned long long)arg1 andRunWithLock:(/*^block*/id)arg2 ;
-(BOOL)resetLocked;
-(void)saveCorruptState;
-(void)runWithLock:(/*^block*/id)arg1 ;
@end


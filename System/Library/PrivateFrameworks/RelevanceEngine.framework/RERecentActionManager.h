/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@class NSLock, NSMutableDictionary;

@interface RERecentActionManager : RESingleton {

	NSLock* _lock;
	NSMutableDictionary* _dateValues;

}
-(void)dealloc;
-(id)_init;
-(id)lastPerformedDateForAction:(id)arg1 ;
-(unsigned long long)actionNumberOfTimesPeformedToday:(id)arg1 ;
-(BOOL)actionWasPerformedLocally:(id)arg1 ;
-(void)_handleRecentActionNotification:(id)arg1 ;
-(void)_storePerformAction:(id)arg1 date:(id)arg2 remote:(BOOL)arg3 ;
-(id)_dataForAction:(id)arg1 ;
-(void)didPerformAction:(id)arg1 ;
@end


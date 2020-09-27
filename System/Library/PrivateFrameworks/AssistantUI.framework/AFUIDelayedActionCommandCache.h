/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject {

	NSMutableDictionary* _delayedActionTimersByIdentifier;
	NSMutableDictionary* _dismissalDelayedActionCommandsByIdentifier;

}
-(id)init;
-(void)dealloc;
-(id)_commandHandler;
-(void)invalidatePendingCommands;
-(void)_performDelayedActionCommandTimerAction:(id)arg1 ;
-(void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2 ;
-(void)_performCommandsWithDelayedActionCommand:(id)arg1 ;
-(void)enqueueDelayedActionCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performDismissalCommands;
@end


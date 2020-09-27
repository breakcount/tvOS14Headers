/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMDoubleLinkedListNode.h>

@interface IMEventNotification : IMDoubleLinkedListNode {

	id _target;
	id _sender;
	/*^block*/id _eventNotificationWithSenderBlock;
	/*^block*/id _eventNotificationBlock;

}

@property (__weak) id target;                                      //@synthesize target=_target - In the implementation block
@property (__weak) id sender;                                      //@synthesize sender=_sender - In the implementation block
@property (copy) id eventNotificationBlock;                        //@synthesize eventNotificationBlock=_eventNotificationBlock - In the implementation block
@property (copy) id eventNotificationWithSenderBlock;              //@synthesize eventNotificationWithSenderBlock=_eventNotificationWithSenderBlock - In the implementation block
+(id)eventNotification:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
+(id)eventNotification:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
+(id)eventNotification:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(BOOL)invoke;
-(id)target;
-(void)cancel;
-(id)sender;
-(void)setSender:(id)arg1 ;
-(void)cache;
-(BOOL)wasCancelled;
-(void)setEventNotificationWithSenderBlock:(id)arg1 ;
-(void)setEventNotificationBlock:(id)arg1 ;
-(id)eventNotificationBlock;
-(id)eventNotificationWithSenderBlock;
@end


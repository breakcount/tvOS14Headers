/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSMessageQueueDelegate;
@class NSMutableArray;

@interface VSMessageQueue : NSObject {

	id<VSMessageQueueDelegate> _delegate;
	NSMutableArray* _messages;

}

@property (nonatomic,retain) NSMutableArray * messages;                               //@synthesize messages=_messages - In the implementation block
@property (assign,nonatomic,__weak) id<VSMessageQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<VSMessageQueueDelegate>)delegate;
-(void)setDelegate:(id<VSMessageQueueDelegate>)arg1 ;
-(NSMutableArray *)messages;
-(void)setMessages:(NSMutableArray *)arg1 ;
-(void)addMessage:(id)arg1 ;
-(id)removeAllMessages;
@end


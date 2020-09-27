/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFScreenOnObserverDelegate, OS_dispatch_queue;
@class NSObject;

@interface WFScreenOnObserver : NSObject {

	BOOL _screenOn;
	int _token;
	id<WFScreenOnObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) int token;                                                   //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL screenOn;                                             //@synthesize screenOn=_screenOn - In the implementation block
@property (assign,nonatomic,__weak) id<WFScreenOnObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFScreenOnObserverDelegate>)delegate;
-(void)setDelegate:(id<WFScreenOnObserverDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(int)token;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setToken:(int)arg1 ;
-(BOOL)screenOn;
-(void)stateChanged:(BOOL)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLEvent;
@interface SCNRendererEvents : NSObject {

	id<MTLEvent> _waitEvent;
	unsigned long long _waitFrame;
	id<MTLEvent> _signalEvent;
	unsigned long long _signalFrame;

}

@property (nonatomic,retain) id<MTLEvent> waitEvent;                      //@synthesize waitEvent=_waitEvent - In the implementation block
@property (assign,nonatomic) unsigned long long waitFrame;                //@synthesize waitFrame=_waitFrame - In the implementation block
@property (nonatomic,retain) id<MTLEvent> signalEvent;                    //@synthesize signalEvent=_signalEvent - In the implementation block
@property (assign,nonatomic) unsigned long long signalFrame;              //@synthesize signalFrame=_signalFrame - In the implementation block
-(void)dealloc;
-(void)waitBeforeSubmittingRender:(id)arg1 ;
-(void)signalAfterSubmittingRender:(id)arg1 ;
-(id<MTLEvent>)waitEvent;
-(void)setWaitEvent:(id<MTLEvent>)arg1 ;
-(unsigned long long)waitFrame;
-(void)setWaitFrame:(unsigned long long)arg1 ;
-(id<MTLEvent>)signalEvent;
-(void)setSignalEvent:(id<MTLEvent>)arg1 ;
-(unsigned long long)signalFrame;
-(void)setSignalFrame:(unsigned long long)arg1 ;
@end

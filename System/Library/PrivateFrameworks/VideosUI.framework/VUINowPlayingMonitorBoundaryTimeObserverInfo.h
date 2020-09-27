/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface VUINowPlayingMonitorBoundaryTimeObserverInfo : NSObject {

	BOOL _notifiedOfEntry;
	double _time;
	NSUUID* _token;
	/*^block*/id _handler;

}

@property (assign,nonatomic) double time;                       //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL notifiedOfEntry;              //@synthesize notifiedOfEntry=_notifiedOfEntry - In the implementation block
@property (nonatomic,retain) NSUUID * token;                    //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
-(NSUUID *)token;
-(void)setHandler:(id)arg1 ;
-(double)time;
-(id)handler;
-(void)setToken:(NSUUID *)arg1 ;
-(void)setTime:(double)arg1 ;
-(BOOL)notifiedOfEntry;
-(void)setNotifiedOfEntry:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVMediaPlaybackManagerDelegate <NSObject>
@optional
-(BOOL)mediaPlaybackManager:(id)arg1 shouldEnableUIModeImplicitly:(long long)arg2;
-(BOOL)presentForegroundPlaybackControllerForMediaPlaybackManager:(id)arg1;
-(void)evaluateSwipeUpMessageForMediaPlaybackManager:(id)arg1;

@required
-(void)mediaPlaybackManager:(id)arg1 shouldHideUI:(BOOL)arg2 animated:(BOOL)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5;

@end

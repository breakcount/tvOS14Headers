/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISBasePlayerOutput <NSObject>
@property (nonatomic,readonly) BOOL isVideoReadyForDisplay; 
@property (nonatomic,copy) id videoLayerReadyForDisplayChangeHandler; 
@optional
-(BOOL)isVideoReadyForDisplay;
-(void)setVideoLayerReadyForDisplayChangeHandler:(/*^block*/id)arg1;
-(id)videoLayerReadyForDisplayChangeHandler;

@required
-(void)setContent:(id)arg1;
-(void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3;

@end


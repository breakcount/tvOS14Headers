/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PGPlaybackStatePrerollAttributes;


@protocol PGMutablePlaybackState <NSObject>
@property (assign,nonatomic) long long contentType; 
@property (assign,nonatomic) double contentDuration; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,nonatomic) BOOL requiresLinearPlayback; 
@property (nonatomic,retain) PGPlaybackStatePrerollAttributes * prerollAttributes; 
@property (assign,getter=isRoutingVideoToHostedWindow,nonatomic) BOOL routingVideoToHostedWindow; 
@required
-(long long)contentType;
-(void)setContentType:(long long)arg1;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1;
-(PGPlaybackStatePrerollAttributes *)prerollAttributes;
-(BOOL)isRoutingVideoToHostedWindow;
-(double)contentDuration;
-(void)setPlaybackRate:(double)arg1 elapsedTime:(double)arg2 timeControlStatus:(long long)arg3;
-(void)setContentDuration:(double)arg1;
-(BOOL)requiresLinearPlayback;
-(void)setRequiresLinearPlayback:(BOOL)arg1;
-(void)setPrerollAttributes:(id)arg1;
-(void)setRoutingVideoToHostedWindow:(BOOL)arg1;

@end


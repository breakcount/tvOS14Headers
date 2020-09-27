/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHHapticServerInterface
@required
-(void)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2;
-(void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5;
-(void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3;
-(void)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)prewarm:(/*^block*/id)arg1;
-(void)stopPrewarm;
-(void)startRunning:(/*^block*/id)arg1;
-(void)stopRunning;
-(void)stopRunning:(/*^block*/id)arg1;
-(void)removeChannel:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)requestChannels:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)releaseChannels;
-(void)setPlayerBehavior:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)configureWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)allocateClientResources:(/*^block*/id)arg1;
-(void)queryCapabilities:(id)arg1 reply:(/*^block*/id)arg2;
-(void)releaseClientResources;
-(void)getHapticLatency:(/*^block*/id)arg1;
-(void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)loadHapticSequenceFromData:(id)arg1 reply:(/*^block*/id)arg2;
-(void)loadHapticSequenceFromEvents:(id)arg1 reply:(/*^block*/id)arg2;
-(void)loadVibePattern:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)prepareHapticSequence:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)detachSequence:(unsigned long long)arg1;
-(void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(/*^block*/id)arg2;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAudioMixing <AVAudioStereoMixing,AVAudio3DMixing>
@property (assign,nonatomic) float volume; 
@required
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;
-(float)volume;
-(void)setVolume:(float)arg1;

@end


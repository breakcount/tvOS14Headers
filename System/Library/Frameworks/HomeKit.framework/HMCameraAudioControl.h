/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraControl.h>

@class _HMCameraAudioControl, HMCharacteristic;

@interface HMCameraAudioControl : HMCameraControl {

	_HMCameraAudioControl* _audioControl;

}

@property (nonatomic,retain) _HMCameraAudioControl * audioControl;              //@synthesize audioControl=_audioControl - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * mute; 
@property (nonatomic,readonly) HMCharacteristic * volume; 
-(HMCharacteristic *)volume;
-(HMCharacteristic *)mute;
-(_HMCameraAudioControl *)audioControl;
-(void)setAudioControl:(_HMCameraAudioControl *)arg1 ;
-(id)initWithAudioControl:(id)arg1 ;
@end


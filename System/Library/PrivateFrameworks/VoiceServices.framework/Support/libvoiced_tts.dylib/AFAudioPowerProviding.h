/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFAudioPowerProviding <NSObject>
@required
-(void)willBeginAccessPower;
-(BOOL)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2;
-(void)didEndAccessPower;

@end


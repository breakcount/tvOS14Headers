/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SNTimeConverting <NSObject>
@property (nonatomic,readonly) double clientSampleRate; 
@required
-(long long)clientSampleTimeFromSampleTime:(long long)arg1 fromBox:(Box*)arg2;
-(double)clientSampleRate;

@end


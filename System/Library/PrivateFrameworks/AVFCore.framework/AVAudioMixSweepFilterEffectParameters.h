/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVAudioMixEffectParameters.h>

@class AVAudioMixSweepFilterEffectParametersInternal;

@interface AVAudioMixSweepFilterEffectParameters : AVAudioMixEffectParameters {

	AVAudioMixSweepFilterEffectParametersInternal* _sweepFilterAudioEffect;

}

@property (nonatomic,readonly) int minimumCutOffFrequency; 
@property (nonatomic,readonly) int maximumCutOffFrequency; 
@property (nonatomic,readonly) float bypassThreshold; 
@property (nonatomic,readonly) float sweepValue; 
+(id)sweepFilterEffectParametersWithMinimumCutOffFrequency:(unsigned)arg1 maximumCutOffFrequency:(unsigned)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(int)minimumCutOffFrequency;
-(int)maximumCutOffFrequency;
-(float)bypassThreshold;
-(float)sweepValue;
-(id)initWithMinimumCutOffFrequency:(unsigned)arg1 maximumCutOffFrequency:(unsigned)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4 ;
-(id)sweepFilterEffectWithSweepValue:(float)arg1 ;
@end


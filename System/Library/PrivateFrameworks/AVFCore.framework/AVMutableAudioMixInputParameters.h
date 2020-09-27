/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAudioMixInputParameters.h>

@class AVMutableAudioMixInputParametersInternal, NSString;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters {

	AVMutableAudioMixInputParametersInternal* _mutableInputParameters;

}

@property (assign,nonatomic) int trackID; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (nonatomic,retain) const opaqueMTAudioProcessingTapRef audioTapProcessor; 
+(id)audioMixInputParametersWithTrack:(id)arg1 ;
+(id)audioMixInputParameters;
+(id)audioMixInputParametersWithAssetTrack:(id)arg1 introFadeDuration:(SCD_Struct_AV6)arg2 fadeOutStart:(SCD_Struct_AV6)arg3 fadeOutDuration:(SCD_Struct_AV6)arg4 ;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(void)setAudioTapProcessor:(const opaqueMTAudioProcessingTapRef)arg1 ;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(NSString *)audioTimePitchAlgorithm;
-(const opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 rampMode:(long long)arg4 ;
@end


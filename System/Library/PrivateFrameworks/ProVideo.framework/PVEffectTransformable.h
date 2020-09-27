/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVEffectTransformable
@required
-(void)setTransform:(id)arg1;
-(id)transformAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 includeTransformAnimation:(BOOL)arg3 viewSize:(CGSize)arg4 viewOrigin:(int)arg5;
-(PVCGPointQuad*)cornersAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(CGPoint)arg4 viewSize:(CGSize)arg5 viewOrigin:(int)arg6;
-(id)transformAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 viewSize:(CGSize)arg3 viewOrigin:(int)arg4;
-(void)setTopLevelGroupTransform:(id)arg1;
-(id)cameraTransform;
-(id)cameraProjection;
-(void)enableCameraOverride:(id)arg1 projection:(id)arg2;
-(void)disableCameraOverride;
-(BOOL)isCameraOverrideEnabled;
-(BOOL)bounds:(CGRect*)arg1 atTime:(SCD_Struct_PV21)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5;

@end


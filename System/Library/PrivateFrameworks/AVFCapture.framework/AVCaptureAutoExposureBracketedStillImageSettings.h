/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	float _exposureTargetBias;

}

@property (readonly) float exposureTargetBias;              //@synthesize exposureTargetBias=_exposureTargetBias - In the implementation block
+(void)initialize;
+(id)autoExposureSettingsWithExposureTargetBias:(float)arg1 ;
-(id)debugDescription;
-(id)description;
-(float)exposureTargetBias;
-(id)_initAutoExposureSettingsWithExposureTargetBias:(float)arg1 ;
@end


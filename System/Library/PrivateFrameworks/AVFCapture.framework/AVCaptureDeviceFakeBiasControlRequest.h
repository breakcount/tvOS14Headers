/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureDeviceControlRequest.h>

@interface AVCaptureDeviceFakeBiasControlRequest : AVCaptureDeviceControlRequest {

	float _fakeBias;
	SCD_Struct_AV0 _fakeBiasCompletionTime;

}

@property (assign,nonatomic) float fakeBias;                                     //@synthesize fakeBias=_fakeBias - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV0 fakeBiasCompletionTime;              //@synthesize fakeBiasCompletionTime=_fakeBiasCompletionTime - In the implementation block
-(void)setFakeBias:(float)arg1 ;
-(void)setFakeBiasCompletionTime:(SCD_Struct_AV0)arg1 ;
-(float)fakeBias;
-(SCD_Struct_AV0)fakeBiasCompletionTime;
@end


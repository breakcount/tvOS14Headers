/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCaptureScope;
@interface MTLCaptureManager : NSObject {

	BOOL _isCapturing;
	id<MTLCaptureScope> _defaultCaptureScope;

}

@property (retain) id<MTLCaptureScope> defaultCaptureScope;              //@synthesize defaultCaptureScope=_defaultCaptureScope - In the implementation block
@property (readonly) BOOL isCapturing;                                   //@synthesize isCapturing=_isCapturing - In the implementation block
+(id)sharedCaptureManager;
-(void)dealloc;
-(BOOL)startCaptureWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newCaptureScopeWithDevice:(id)arg1 ;
-(id)newCaptureScopeWithCommandQueue:(id)arg1 ;
-(void)startCaptureWithDevice:(id)arg1 ;
-(void)startCaptureWithCommandQueue:(id)arg1 ;
-(void)startCaptureWithScope:(id)arg1 ;
-(void)stopCapture;
-(BOOL)supportsDestination:(long long)arg1 ;
-(BOOL)isCapturing;
-(id<MTLCaptureScope>)defaultCaptureScope;
-(void)setDefaultCaptureScope:(id<MTLCaptureScope>)arg1 ;
@end


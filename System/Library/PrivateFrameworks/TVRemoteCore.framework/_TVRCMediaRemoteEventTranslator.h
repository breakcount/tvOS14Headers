/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class _TVRCMRTelevisionWrapper, _TVRCMROriginWrapper, _TVRCMRVirtualTouchDeviceWrapper;

@interface _TVRCMediaRemoteEventTranslator : NSObject {

	_TVRCMRTelevisionWrapper* _television;
	_TVRCMROriginWrapper* _origin;

}

@property (assign,nonatomic,__weak) _TVRCMRTelevisionWrapper * television;                  //@synthesize television=_television - In the implementation block
@property (assign,nonatomic,__weak) _TVRCMROriginWrapper * origin;                          //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) _TVRCMRVirtualTouchDeviceWrapper * touchDevice; 
-(_TVRCMROriginWrapper *)origin;
-(void)setOrigin:(_TVRCMROriginWrapper *)arg1 ;
-(void)sendButtonEvent:(id)arg1 ;
-(_TVRCMRTelevisionWrapper *)television;
-(BOOL)_isMediaButtonEvent:(id)arg1 ;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)sendTouchEvent:(id)arg1 withDeviceID:(unsigned long long)arg2 ;
-(_TVRCMRVirtualTouchDeviceWrapper *)touchDevice;
-(unsigned)_commandForMediaButtonEvent:(id)arg1 ;
-(id)_commandOptionsForMediaButtonEvent:(id)arg1 command:(unsigned)arg2 ;
-(MRHIDButtonEvent)_createMRHIDButtonEventTemplateWithButtonType:(long long)arg1 ;
-(MRHIDTouchEvent)_createMRHIDTouchEvent:(id)arg1 ;
@end


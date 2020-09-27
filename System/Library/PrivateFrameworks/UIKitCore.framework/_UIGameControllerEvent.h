/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@interface _UIGameControllerEvent : UIEvent {

	SCD_Struct_UI109 _previousState;
	unsigned long long _activeComponent;

}
-(long long)type;
-(void)_reset;
-(long long)subtype;
-(void)_maybeConvertAndSendAsPressesEvent;
-(void)_sendEventToResponder:(id)arg1 ;
-(BOOL)_processStandardButtons:(SCD_Struct_UI109*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_determineInputTypeAndProcess:(SCD_Struct_UI109*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processDPad:(SCD_Struct_UI109*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processLeftStick:(SCD_Struct_UI109*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processRightStick:(SCD_Struct_UI109*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processShoulder:(SCD_Struct_UI109*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(CGPoint)_leftStickPosition;
@end


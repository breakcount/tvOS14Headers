/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCExtendedGamepad.h>

@class GCControllerButtonInput, GCControllerDirectionPad;

@interface GCDualShockGamepad : GCExtendedGamepad {

	GCControllerButtonInput* _touchpadButton;
	GCControllerDirectionPad* _touchpadPrimary;
	GCControllerDirectionPad* _touchpadSecondary;

}

@property (nonatomic,readonly) GCControllerButtonInput * touchpadButton;                  //@synthesize touchpadButton=_touchpadButton - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * touchpadPrimary;                //@synthesize touchpadPrimary=_touchpadPrimary - In the implementation block
@property (nonatomic,readonly) GCControllerDirectionPad * touchpadSecondary;              //@synthesize touchpadSecondary=_touchpadSecondary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)initializeExtraControllerElements;
-(BOOL)isBluetoothAndUSBMirrored;
-(GCControllerButtonInput *)touchpadButton;
-(GCControllerDirectionPad *)touchpadPrimary;
-(GCControllerDirectionPad *)touchpadSecondary;
@end


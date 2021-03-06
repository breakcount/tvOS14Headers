/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCPhysicalInputProfile.h>

@class NSArray, NSSet;

@interface GCKeyboardInput : GCPhysicalInputProfile {

	NSArray* _keys;
	NSSet* _allCodes;
	BOOL _isActive;
	int _numberOfKeysPressed;
	/*^block*/id _keyChangedHandler;

}

@property (nonatomic,copy) id keyChangedHandler;                                       //@synthesize keyChangedHandler=_keyChangedHandler - In the implementation block
@property (getter=isAnyKeyPressed,nonatomic,readonly) BOOL anyKeyPressed; 
-(id)name;
-(id)init;
-(void)commonInit;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(id)handlerQueue;
-(id)initWithController:(id)arg1 ;
-(id)productCategory;
-(void)appWillResignActive;
-(void)appDidBecomeActive;
-(BOOL)hasButton:(long long)arg1 ;
-(id)buttonForKeyCode:(long long)arg1 ;
-(id)setElementValuesFromKeyboardInput:(id)arg1 ;
-(BOOL)shouldFilterInternalEvent:(IOHIDEventRef)arg1 ;
-(void)setKeyValue:(long long)arg1 down:(BOOL)arg2 ;
-(BOOL)isAnyKeyPressed;
-(void)setStateFromKeyboardInput:(id)arg1 ;
-(id)keyChangedHandler;
-(void)setKeyChangedHandler:(id)arg1 ;
@end


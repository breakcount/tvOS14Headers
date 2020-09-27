/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCGamepadEvent.h>

@class NSString;

@interface _GCGamepadEventHID : NSObject <_GCGamepadEvent> {

	IOHIDEventRef _extendedEvent;
	IOHIDEventRef _event;

}

@property (nonatomic,readonly) IOHIDEventRef event;                 //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(IOHIDEventRef)event;
-(id)initWithHIDEvent:(IOHIDEventRef)arg1 ;
-(BOOL)hasValidValueForElement:(long long)arg1 ;
-(float)floatValueForElement:(long long)arg1 ;
@end


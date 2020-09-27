/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GCKeyboardEventSourceDescription.h>

@protocol _GCHIDEventSourceDescription;
@class _GCCControllerHIDServiceInfoDescription, _GCKeyboardEventHIDAdapter, NSString;

@interface _GCKeyboardEventHIDAdapterDescription : NSObject <_GCKeyboardEventSourceDescription> {

	id<_GCHIDEventSourceDescription> _sourceDescription;
	_GCCControllerHIDServiceInfoDescription* _serviceDescription;
	_GCKeyboardEventHIDAdapter* _materializedObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSource:(id)arg1 service:(id)arg2 ;
-(id)materializeWithContext:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <IOSurface/IOSurfaceSharedEvent.h>
#import <libobjc.A.dylib/MTLSharedEvent.h>

@class NSString;

@interface _MTLSharedEvent : IOSurfaceSharedEvent <MTLSharedEvent> {

	unsigned long long _labelTraceID;
	NSString* _label;
	os_unfair_lock_s _labelLock;

}

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long labelTraceID;               //@synthesize labelTraceID=_labelTraceID - In the implementation block
@property (assign) unsigned long long signaledValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(NSString *)label;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(unsigned)encodeKernelSignalEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
-(id)retainedLabel;
-(id)initWithSharedEventHandle:(id)arg1 ;
-(unsigned long long)labelTraceID;
-(id)newSharedEventHandle;
@end


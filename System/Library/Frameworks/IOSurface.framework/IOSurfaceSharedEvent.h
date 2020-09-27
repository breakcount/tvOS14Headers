/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IOSurfaceSharedEvent : NSObject <NSSecureCoding> {

	unsigned _eventPort;
	unsigned long long _globalTraceObjectID;

}

@property (assign) unsigned long long signaledValue; 
@property (readonly) unsigned eventPort;                                  //@synthesize eventPort=_eventPort - In the implementation block
@property (readonly) unsigned long long globalTraceObjectID;              //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(void)setSignaledValue:(unsigned long long)arg1 ;
-(unsigned long long)signaledValue;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(unsigned)eventPort;
-(unsigned long long)globalTraceObjectID;
@end


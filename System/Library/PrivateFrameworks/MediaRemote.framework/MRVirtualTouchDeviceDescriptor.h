/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MRVirtualTouchDeviceDescriptor : NSObject <NSCopying, NSMutableCopying> {

	BOOL _absolute;
	BOOL _integratedDisplay;
	MRHIDSize _screenSize;

}

@property (getter=isAbsolute,nonatomic,readonly) BOOL absolute;                                //@synthesize absolute=_absolute - In the implementation block
@property (getter=isIntegratedDisplay,nonatomic,readonly) BOOL integratedDisplay;              //@synthesize integratedDisplay=_integratedDisplay - In the implementation block
@property (nonatomic,readonly) _MRHIDSize screenSize;                                          //@synthesize screenSize=_screenSize - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(_MRHIDSize)screenSize;
-(BOOL)isAbsolute;
-(BOOL)isIntegratedDisplay;
@end


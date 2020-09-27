/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIRadiositySurface : NSObject {

	IOSurfaceRef _surface;
	CGImageRef _image;
	unsigned long long _bytesPerRow;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesPerRow;              //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(id)initWithContentsOfFile:(id)arg1 ;
-(unsigned long long)bytesPerRow;
-(void*)baseAddress;
-(IOSurfaceRef)IOSurface;
-(CGImageRef)CGImage;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
@end


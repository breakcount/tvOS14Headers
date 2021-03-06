/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@interface VCPixelBufferOverlay : VCObject {

	CGContextRef _bitmapContext;
	CFDictionaryRef _stringAttributes;
	CTLineRef _ellipsisToken;

}
-(void)dealloc;
-(void)drawOverlayMessage:(id)arg1 onPixelBuffer:(CVBufferRef)arg2 attributes:(CFDictionaryRef)arg3 ;
-(void)setupStringAttributes:(double)arg1 height:(double)arg2 ;
-(id)reverseString:(id)arg1 ;
@end


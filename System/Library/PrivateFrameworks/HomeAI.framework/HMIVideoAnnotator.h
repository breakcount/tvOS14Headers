/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:55 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIVideoAnnotator : HMFObject <HMFLogging> {

	opaqueCMSampleBufferRef _sbuf;
	CGContextRef _context;
	CGColorSpaceRef _colorSpace;
	CTFontRef _font;
	CGSize _size;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)draw:(/*^block*/id)arg1 ;
-(void)drawPolygonWithNormalizedPoints:(id)arg1 ;
-(void)drawTextHeaderBar:(id)arg1 ;
-(const CTFontRef)_createFontWithSize:(double)arg1 ;
@end


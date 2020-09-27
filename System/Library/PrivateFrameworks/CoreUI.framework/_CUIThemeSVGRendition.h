/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSData, NSArray;

@interface _CUIThemeSVGRendition : CUIThemeRendition <NSLocking> {

	CGSVGDocumentRef _svgDocument;
	NSData* _fileData;
	unsigned _standardPointSize;
	NSArray* _vectorSizes;
	double _baseline;
	double _capline;
	SCD_Struct_CS11 _alignmentRectInsets;
	BOOL _isAlignmentRect;
	CGSize _canvasSize;
	float _templateVersion;
	os_unfair_lock_s _lock;

}
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(int)pixelFormat;
-(id)metrics;
-(double)vectorGlyphBaseline;
-(double)vectorGlyphCapLine;
-(double)vectorGlyphReferencePointSize;
-(id)vectorGlyphAvailableSizes;
-(CGSVGDocumentRef)svgDocument;
-(CGSize)canvasSize;
-(SCD_Struct_CS11)vectorGlyphAlignmentRectInsets;
-(float)vectorGlyphTemplateVersion;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)rawData;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
@end


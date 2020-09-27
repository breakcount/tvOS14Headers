/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPrintFormatter.h>

@class NSURL;

@interface UITallPDFPrintFormatter : UIPrintFormatter {

	NSURL* _pdfPath;
	CGPDFDocumentRef _pdfDocRef;
	double _pdfScaleFactor;
	BOOL _rotate90;
	double _shiftUpLength;

}
-(long long)_recalcPageCount;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)initWithPDFURL:(id)arg1 ;
-(id)initWithPDFData:(id)arg1 ;
@end


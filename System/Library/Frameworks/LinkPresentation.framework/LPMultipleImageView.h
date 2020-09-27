/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class NSArray, LPImageViewStyle, NSMutableArray;

@interface LPMultipleImageView : LPComponentView {

	NSArray* _images;
	LPImageViewStyle* _style;
	NSMutableArray* _imageViews;

}
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutComponentView;
-(CGSize)_availableSizeForImageNumber:(unsigned long long)arg1 withLayout:(unsigned long long)arg2 withinSize:(CGSize)arg3 ;
-(CGRect)_computeRectForImageAtIndex:(unsigned long long)arg1 fittingSize:(CGSize*)arg2 width:(double*)arg3 height:(double*)arg4 size:(CGSize)arg5 multipleImageLayout:(unsigned long long)arg6 ;
-(void)ensureImageViews;
-(CGSize)layoutImagesForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(id)initWithImages:(id)arg1 style:(id)arg2 ;
@end


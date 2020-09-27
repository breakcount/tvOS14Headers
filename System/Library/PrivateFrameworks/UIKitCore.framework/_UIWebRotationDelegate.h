/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIWebRotationDelegate
@optional
-(double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
-(CGSize*)contentSizeForScrollView:(id)arg1;

@required
-(id)contentView;
-(double)zoomedDocumentScale;
-(id)enclosingScrollView;
-(double)currentDocumentScale;
-(SCD_Struct_UI50*)scalesForContainerSize:(CGSize)arg1;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI50)arg2;
-(double)minimumScaleForSize:(CGSize)arg1;
-(CGRect*)rectOfInterestForRotation;
-(double)minimumVerticalContentOffset;
-(double)heightToKeepVisible;
-(CGRect*)activeRectForRectOfInterest:(CGRect)arg1;
-(BOOL)considerHeightOfRectOfInterestForRotation;

@end


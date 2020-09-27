/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIFontMetrics, NSString;

@interface AXDynamicTypeImageView : UIImageView {

	UIFontMetrics* _fontMetrics;
	NSString* _minimumContentSizeCategory;
	NSString* _maximumContentSizeCategory;

}

@property (nonatomic,retain) UIFontMetrics * fontMetrics;                      //@synthesize fontMetrics=_fontMetrics - In the implementation block
@property (nonatomic,copy) NSString * minimumContentSizeCategory;              //@synthesize minimumContentSizeCategory=_minimumContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * maximumContentSizeCategory;              //@synthesize maximumContentSizeCategory=_maximumContentSizeCategory - In the implementation block
-(id)initWithImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(CGSize)_scaledSizeForSize:(CGSize)arg1 ;
-(NSString *)maximumContentSizeCategory;
-(NSString *)minimumContentSizeCategory;
-(UIFontMetrics *)fontMetrics;
-(void)setMinimumContentSizeCategory:(NSString *)arg1 ;
-(void)setMaximumContentSizeCategory:(NSString *)arg1 ;
-(void)setFontMetrics:(UIFontMetrics *)arg1 ;
@end


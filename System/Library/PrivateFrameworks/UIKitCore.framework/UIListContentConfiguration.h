/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIContentConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIListContentImageProperties, UIListContentTextProperties, UIImage, NSString, NSAttributedString;

@interface UIListContentConfiguration : NSObject <UIContentConfiguration, NSSecureCoding> {

	struct {
		unsigned hasCustomizedAxesPreservingSuperviewLayoutMargins : 1;
		unsigned hasCustomizedDirectionalLayoutMargins : 1;
		unsigned hasCustomizedPrefersSideBySideTextAndSecondaryText : 1;
		unsigned hasCustomizedImageToTextPadding : 1;
		unsigned hasCustomizedTextToSecondaryTextHorizontalPadding : 1;
		unsigned hasCustomizedTextToSecondaryTextVerticalPadding : 1;
	}  _configurationFlags;
	BOOL _prefersSideBySideTextAndSecondaryText;
	unsigned long long _axesPreservingSuperviewLayoutMargins;
	double _imageToTextPadding;
	double _textToSecondaryTextHorizontalPadding;
	double _textToSecondaryTextVerticalPadding;
	long long _defaultStyle;
	UIListContentImageProperties* _imageProperties;
	UIListContentTextProperties* _textProperties;
	UIListContentTextProperties* _secondaryTextProperties;
	NSDirectionalEdgeInsets _directionalLayoutMargins;

}

@property (assign,setter=_setAxesPreservingSuperviewLayoutMargins:,nonatomic) unsigned long long _axesPreservingSuperviewLayoutMargins;              //@synthesize axesPreservingSuperviewLayoutMargins=_axesPreservingSuperviewLayoutMargins - In the implementation block
@property (assign,setter=_setDirectionalLayoutMargins:,nonatomic) NSDirectionalEdgeInsets _directionalLayoutMargins;                                 //@synthesize directionalLayoutMargins=_directionalLayoutMargins - In the implementation block
@property (assign,setter=_setPrefersSideBySideTextAndSecondaryText:,nonatomic) BOOL _prefersSideBySideTextAndSecondaryText;                          //@synthesize prefersSideBySideTextAndSecondaryText=_prefersSideBySideTextAndSecondaryText - In the implementation block
@property (assign,setter=_setImageToTextPadding:,nonatomic) double _imageToTextPadding;                                                              //@synthesize imageToTextPadding=_imageToTextPadding - In the implementation block
@property (assign,setter=_setTextToSecondaryTextHorizontalPadding:,nonatomic) double _textToSecondaryTextHorizontalPadding;                          //@synthesize textToSecondaryTextHorizontalPadding=_textToSecondaryTextHorizontalPadding - In the implementation block
@property (assign,setter=_setTextToSecondaryTextVerticalPadding:,nonatomic) double _textToSecondaryTextVerticalPadding;                              //@synthesize textToSecondaryTextVerticalPadding=_textToSecondaryTextVerticalPadding - In the implementation block
@property (assign,nonatomic) long long _defaultStyle;                                                                                                //@synthesize defaultStyle=_defaultStyle - In the implementation block
@property (nonatomic,readonly) BOOL _isSidebarStyle; 
@property (getter=_enforcesMinimumHeight,nonatomic,readonly) BOOL enforcesMinimumHeight; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) UIListContentImageProperties * imageProperties;                                                                       //@synthesize imageProperties=_imageProperties - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UIListContentTextProperties * textProperties;                                                                         //@synthesize textProperties=_textProperties - In the implementation block
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,copy) NSAttributedString * secondaryAttributedText; 
@property (nonatomic,readonly) UIListContentTextProperties * secondaryTextProperties;                                                                //@synthesize secondaryTextProperties=_secondaryTextProperties - In the implementation block
@property (assign,nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins; 
@property (assign,nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins; 
@property (assign,nonatomic) BOOL prefersSideBySideTextAndSecondaryText; 
@property (assign,nonatomic) double imageToTextPadding; 
@property (assign,nonatomic) double textToSecondaryTextHorizontalPadding; 
@property (assign,nonatomic) double textToSecondaryTextVerticalPadding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)subtitleCellConfiguration;
+(id)groupedHeaderConfiguration;
+(id)cellConfiguration;
+(id)valueCellConfiguration;
+(id)plainHeaderConfiguration;
+(id)plainFooterConfiguration;
+(id)groupedFooterConfiguration;
+(id)_defaultConfigurationForStyle:(long long)arg1 state:(id)arg2 ;
+(id)_defaultCellConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultSubtitleCellConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultValueCellConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultPlainHeaderConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultHeaderFooterConfigurationForState:(id)arg1 traitCollection:(id)arg2 isHeader:(BOOL)arg3 style:(long long)arg4 ;
+(id)_defaultPlainFooterConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultGroupedHeaderConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultGroupedFooterConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)_defaultSidebarCellConfigurationForState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(BOOL)arg3 ;
+(void)_applySidebarCellStylingToConfiguration:(id)arg1 forState:(id)arg2 traitCollection:(id)arg3 constants:(id)arg4 isAccompanied:(BOOL)arg5 ;
+(id)_defaultSidebarSubtitleCellConfigurationForState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(BOOL)arg3 ;
+(id)_defaultSidebarHeaderConfigurationForState:(id)arg1 traitCollection:(id)arg2 ;
+(id)sidebarCellConfiguration;
+(id)accompaniedSidebarCellConfiguration;
+(id)sidebarSubtitleCellConfiguration;
+(id)accompaniedSidebarSubtitleCellConfiguration;
+(id)sidebarHeaderConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIListContentImageProperties *)imageProperties;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(UIListContentTextProperties *)textProperties;
-(UIListContentTextProperties *)secondaryTextProperties;
-(void)setSecondaryAttributedText:(NSAttributedString *)arg1 ;
-(NSDirectionalEdgeInsets)directionalLayoutMargins;
-(id)_shortDescription;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(id)updatedConfigurationForState:(id)arg1 ;
-(void)_setSwiftBridgingImageProperties:(id)arg1 ;
-(void)_setSwiftBridgingTextProperties:(id)arg1 ;
-(NSAttributedString *)secondaryAttributedText;
-(void)_setSwiftBridgingSecondaryTextProperties:(id)arg1 ;
-(unsigned long long)axesPreservingSuperviewLayoutMargins;
-(void)setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(BOOL)prefersSideBySideTextAndSecondaryText;
-(void)setPrefersSideBySideTextAndSecondaryText:(BOOL)arg1 ;
-(double)imageToTextPadding;
-(void)setImageToTextPadding:(double)arg1 ;
-(double)textToSecondaryTextHorizontalPadding;
-(void)setTextToSecondaryTextHorizontalPadding:(double)arg1 ;
-(double)textToSecondaryTextVerticalPadding;
-(void)setTextToSecondaryTextVerticalPadding:(double)arg1 ;
-(id)makeContentView;
-(void)set_defaultStyle:(long long)arg1 ;
-(long long)_defaultStyle;
-(unsigned long long)_axesPreservingSuperviewLayoutMargins;
-(void)_setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(NSDirectionalEdgeInsets)_directionalLayoutMargins;
-(void)_setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(BOOL)_isEqualToConfiguration:(id)arg1 ;
-(BOOL)_isEqualToConfigurationQuick:(id)arg1 ;
-(void)_setImageToTextPadding:(double)arg1 ;
-(double)_imageToTextPadding;
-(BOOL)_isSidebarStyle;
-(id)_initWithImageProperties:(id)arg1 textProperties:(id)arg2 secondaryTextProperties:(id)arg3 directionalLayoutMargins:(NSDirectionalEdgeInsets)arg4 prefersSideBySideTextAndSecondaryText:(BOOL)arg5 imageToTextPadding:(double)arg6 textToSecondaryTextVerticalPadding:(double)arg7 ;
-(BOOL)_prefersSideBySideTextAndSecondaryText;
-(void)_setPrefersSideBySideTextAndSecondaryText:(BOOL)arg1 ;
-(double)_textToSecondaryTextHorizontalPadding;
-(void)_setTextToSecondaryTextHorizontalPadding:(double)arg1 ;
-(double)_textToSecondaryTextVerticalPadding;
-(void)_setTextToSecondaryTextVerticalPadding:(double)arg1 ;
-(id)_descriptionPropertiesForFullDescription:(BOOL)arg1 ;
-(BOOL)_enforcesMinimumHeight;
@end


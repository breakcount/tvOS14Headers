/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSConcreteTextStorage.h>

@protocol _UITextAttributeDefaults;
@class NSMutableDictionary, UIFont, UIColor, NSDictionary;

@interface _UICascadingTextStorage : NSConcreteTextStorage {

	NSMutableDictionary* _defaultAttributes;
	id<_UITextAttributeDefaults> _defaults;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double shadowBlur; 
@property (nonatomic,copy) NSDictionary * defaultAttributes; 
@property (setter=_setDefaults:,nonatomic,retain) id<_UITextAttributeDefaults> _defaults;              //@synthesize defaults=_defaults - In the implementation block
+(id)defaultFont;
-(id)init;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(id<_UITextAttributeDefaults>)_defaults;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(id)_shadow;
-(id)_defaultAttributes;
-(NSDictionary *)defaultAttributes;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
-(void)setShadowBlur:(double)arg1 ;
-(id)initWithDefaults:(id)arg1 ;
-(long long)_ui_resolvedTextAlignment;
-(void)_setShadow:(id)arg1 ;
-(double)shadowBlur;
-(void)_restoreOriginalFontAttribute;
-(void)_setDefaults:(id)arg1 ;
@end


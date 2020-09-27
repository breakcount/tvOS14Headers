/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/_REContentLoggingProperties.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSTimeZone, UIImage, NSString, RETextContentProvider, REImageContentProvider, NSAttributedString, UIColor, REAccessoryDescription, REAccessoryImage, REAccessoryMatchup, NSNumber;

@interface REContent : NSObject <_REContentLoggingProperties, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _contents;
	NSTimeZone* _timeZone;

}

@property (nonatomic,retain) UIImage * overrideHeaderImage; 
@property (nonatomic,retain) UIImage * overrideBodyImage; 
@property (nonatomic,retain) NSString * bodyImageCompositingFilter; 
@property (nonatomic,copy) RETextContentProvider * headerTextContentProvider; 
@property (nonatomic,copy) REImageContentProvider * headerImageContentProvider; 
@property (nonatomic,copy) REImageContentProvider * bodyImageContentProvider; 
@property (nonatomic,copy) RETextContentProvider * description1TextContentProvider; 
@property (nonatomic,copy) RETextContentProvider * description2TextContentProvider; 
@property (nonatomic,copy) RETextContentProvider * description3TextContentProvider; 
@property (nonatomic,copy) NSAttributedString * headerText; 
@property (nonatomic,copy) UIImage * headerImage; 
@property (nonatomic,copy) UIImage * bodyImage; 
@property (nonatomic,copy) NSAttributedString * description1Text; 
@property (nonatomic,copy) NSAttributedString * description2Text; 
@property (nonatomic,copy) NSAttributedString * description3Text; 
@property (assign,nonatomic) unsigned long long punchThrough; 
@property (nonatomic,copy) UIColor * tintColor; 
@property (assign,nonatomic) unsigned long long style; 
@property (assign,nonatomic) BOOL useMonospaceFont; 
@property (assign,nonatomic) unsigned long long headerFontStyle; 
@property (assign,nonatomic) unsigned long long description1FontStyle; 
@property (assign,nonatomic) unsigned long long description2FontStyle; 
@property (assign,nonatomic) BOOL tintColorAffectsHeader; 
@property (assign,nonatomic) BOOL bodyImageShouldStretch; 
@property (assign,nonatomic) unsigned headerImageEdge; 
@property (nonatomic,copy) REAccessoryDescription * descriptionAccessory; 
@property (nonatomic,copy) REAccessoryImage * imageAccessory; 
@property (nonatomic,copy) REAccessoryMatchup * matchupAccessory; 
@property (assign,nonatomic) CGRect imageFocusRect; 
@property (nonatomic,copy) NSString * overrideBodyString; 
@property (nonatomic,copy) NSNumber * description1Opacity; 
@property (nonatomic,readonly) NSDictionary * loggingContentValues; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(NSAttributedString *)headerText;
-(void)setHeaderText:(NSAttributedString *)arg1 ;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(REAccessoryDescription *)descriptionAccessory;
-(void)setDescription1TextContentProvider:(RETextContentProvider *)arg1 ;
-(RETextContentProvider *)description1TextContentProvider;
-(void)setDescription2TextContentProvider:(RETextContentProvider *)arg1 ;
-(RETextContentProvider *)description2TextContentProvider;
-(void)setDescription3TextContentProvider:(RETextContentProvider *)arg1 ;
-(RETextContentProvider *)description3TextContentProvider;
-(void)setHeaderTextContentProvider:(RETextContentProvider *)arg1 ;
-(RETextContentProvider *)headerTextContentProvider;
-(NSDictionary *)loggingContentValues;
-(void)setOverrideHeaderImage:(UIImage *)arg1 ;
-(UIImage *)overrideHeaderImage;
-(void)setOverrideBodyImage:(UIImage *)arg1 ;
-(UIImage *)overrideBodyImage;
-(void)setBodyImageCompositingFilter:(NSString *)arg1 ;
-(NSString *)bodyImageCompositingFilter;
-(void)setHeaderImageContentProvider:(REImageContentProvider *)arg1 ;
-(REImageContentProvider *)headerImageContentProvider;
-(void)setBodyImageContentProvider:(REImageContentProvider *)arg1 ;
-(REImageContentProvider *)bodyImageContentProvider;
-(void)setPunchThrough:(unsigned long long)arg1 ;
-(unsigned long long)punchThrough;
-(void)setUseMonospaceFont:(BOOL)arg1 ;
-(BOOL)useMonospaceFont;
-(void)setHeaderFontStyle:(unsigned long long)arg1 ;
-(unsigned long long)headerFontStyle;
-(void)setDescription1FontStyle:(unsigned long long)arg1 ;
-(unsigned long long)description1FontStyle;
-(void)setDescription2FontStyle:(unsigned long long)arg1 ;
-(unsigned long long)description2FontStyle;
-(void)setTintColorAffectsHeader:(BOOL)arg1 ;
-(BOOL)tintColorAffectsHeader;
-(void)setBodyImageShouldStretch:(BOOL)arg1 ;
-(BOOL)bodyImageShouldStretch;
-(void)setHeaderImageEdge:(unsigned)arg1 ;
-(unsigned)headerImageEdge;
-(void)setDescriptionAccessory:(REAccessoryDescription *)arg1 ;
-(void)setImageAccessory:(REAccessoryImage *)arg1 ;
-(REAccessoryImage *)imageAccessory;
-(void)setMatchupAccessory:(REAccessoryMatchup *)arg1 ;
-(REAccessoryMatchup *)matchupAccessory;
-(void)setImageFocusRect:(CGRect)arg1 ;
-(CGRect)imageFocusRect;
-(void)setOverrideBodyString:(NSString *)arg1 ;
-(NSString *)overrideBodyString;
-(void)setDescription1Text:(NSAttributedString *)arg1 ;
-(NSAttributedString *)description1Text;
-(void)setDescription2Text:(NSAttributedString *)arg1 ;
-(NSAttributedString *)description2Text;
-(void)setDescription3Text:(NSAttributedString *)arg1 ;
-(NSAttributedString *)description3Text;
-(UIImage *)bodyImage;
-(void)setBodyImage:(UIImage *)arg1 ;
-(NSNumber *)description1Opacity;
-(void)setDescription1Opacity:(NSNumber *)arg1 ;
@end


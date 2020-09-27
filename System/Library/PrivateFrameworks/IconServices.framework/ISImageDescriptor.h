/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ISImageDescriptor.h>

@protocol ISImageDescriptor <NSObject>
@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ISImageDescriptor : NSObject <NSSecureCoding, ISImageDescriptor, NSCopying> {

	CGSize _size;
	double _scale;
	unsigned long long _variantOptions;
	unsigned long long _badgeOptions;
	unsigned long long _backgroundStyle;
	BOOL _preferExtendedColorResources;
	NSString* _preferedResourceName;
	unsigned long long _languageDirection;

}

@property (readonly) CGSize sanitizedSize; 
@property (readonly) double sanitizedScale; 
@property (retain) NSString * preferedResourceName;                           //@synthesize preferedResourceName=_preferedResourceName - In the implementation block
@property (assign) BOOL preferExtendedColorResources;                         //@synthesize preferExtendedColorResources=_preferExtendedColorResources - In the implementation block
@property (assign) unsigned long long languageDirection;                      //@synthesize languageDirection=_languageDirection - In the implementation block
@property (retain) id<NSCopying> imageCacheKey; 
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                    //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long variantOptions;               //@synthesize variantOptions=_variantOptions - In the implementation block
@property (assign,nonatomic) unsigned long long badgeOptions;                 //@synthesize badgeOptions=_badgeOptions - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) unsigned long long shape; 
@property (nonatomic,readonly) double continuousCornerRadius; 
@property (assign,nonatomic) BOOL shouldApplyMask; 
@property (assign,nonatomic) BOOL drawBorder; 
@property (assign,nonatomic) BOOL drawBadge; 
@property (assign,nonatomic) BOOL templateVariant; 
@property (assign,nonatomic) BOOL selectedVariant; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)imageDescriptorNamed:(id)arg1 ;
+(id)icnsImageDescriptors;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(unsigned long long)backgroundStyle;
-(unsigned long long)shape;
-(void)setShape:(unsigned long long)arg1 ;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(id<NSCopying>)imageCacheKey;
-(unsigned long long)variantOptions;
-(void)setVariantOptions:(unsigned long long)arg1 ;
-(void)setShouldApplyMask:(BOOL)arg1 ;
-(void)setBadgeOptions:(unsigned long long)arg1 ;
-(unsigned long long)badgeOptions;
-(void)setDrawBorder:(BOOL)arg1 ;
-(BOOL)selectedVariant;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(double)continuousCornerRadius;
-(void)setSelectedVariant:(BOOL)arg1 ;
-(BOOL)shouldApplyMask;
-(NSString *)preferedResourceName;
-(BOOL)drawBorder;
-(void)setPreferedResourceName:(NSString *)arg1 ;
-(BOOL)templateVariant;
-(void)setTemplateVariant:(BOOL)arg1 ;
-(BOOL)drawBadge;
-(void)setDrawBadge:(BOOL)arg1 ;
-(CGSize)sanitizedSize;
-(double)sanitizedScale;
-(unsigned long long)languageDirection;
-(void)setLanguageDirection:(unsigned long long)arg1 ;
-(BOOL)preferExtendedColorResources;
-(void)setPreferExtendedColorResources:(BOOL)arg1 ;
@end


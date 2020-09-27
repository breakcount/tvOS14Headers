/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmojiFoundation/EmojiFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, EMFEmojiLocaleData;

@interface EMFEmojiToken : NSObject <NSCopying, NSSecureCoding> {

	EmojiTokenWrapperRef _emojiTokenRef;
	BOOL _didFailCEM;
	NSString* _localeIdentifier;
	NSString* _string;

}

@property (nonatomic,retain) NSString * localeIdentifier;                             //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * string;                                         //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * _baseString; 
@property (nonatomic,copy,readonly) NSArray * _skinToneVariantStrings; 
@property (nonatomic,readonly) BOOL _shouldHighlightEmoji; 
@property (nonatomic,readonly) const EmojiTokenWrapperRef emojiTokenRef;              //@synthesize emojiTokenRef=_emojiTokenRef - In the implementation block
@property (nonatomic,readonly) EMFEmojiLocaleData * localeData; 
@property (nonatomic,readonly) BOOL supportsSkinToneVariants; 
@property (nonatomic,readonly) int skinTone; 
@property (nonatomic,readonly) NSArray * skinToneSpecifiers; 
@property (nonatomic,readonly) NSArray * skinToneChooserVariants; 
@property (nonatomic,copy,readonly) NSArray * skinToneVariants; 
@property (nonatomic,readonly) int presentationStyle; 
@property (nonatomic,readonly) BOOL isCommon; 
+(BOOL)supportsSecureCoding;
+(id)emojiTokenWithString:(id)arg1 localeData:(id)arg2 ;
+(id)emojiTokenWithCEMEmojiToken:(EmojiTokenWrapperRef)arg1 ;
+(id)emojiTokensForCEMEmojiTokens:(CFArrayRef)arg1 ;
+(id)emojiTokenWithLongCharacter:(unsigned)arg1 localeData:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)string;
-(NSString *)localeIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(int)presentationStyle;
-(NSString *)_baseString;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)supportsSkinToneVariants;
-(id)copyWithSkinToneVariantSpecifier:(id)arg1 ;
-(id)copyWithSkinToneVariant:(int)arg1 ;
-(int)skinTone;
-(BOOL)isEqualIgnoringModifiers:(id)arg1 ;
-(EMFEmojiLocaleData *)localeData;
-(id)initWithCEMEmojiToken:(EmojiTokenWrapperRef)arg1 ;
-(id)initWithString:(id)arg1 localeIdentifier:(id)arg2 ;
-(void)_createEmojiTokenRefIfNecessary;
-(const EmojiTokenWrapperRef)emojiTokenRef;
-(NSArray *)skinToneSpecifiers;
-(NSArray *)skinToneChooserVariants;
-(NSArray *)skinToneVariants;
-(NSArray *)_skinToneVariantStrings;
-(BOOL)_shouldHighlightEmoji;
-(BOOL)supportsPresentationStyle:(int)arg1 ;
-(id)copyWithPresentationStyle:(int)arg1 ;
-(id)copyWithoutModifiers;
-(BOOL)isCommon;
-(id)relatedEmojiTokens:(unsigned long long)arg1 ;
-(id)nameForType:(int)arg1 ;
@end


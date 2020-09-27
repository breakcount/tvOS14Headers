/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSIndexPath;

@interface UIDictationSerializableResults : NSObject <NSSecureCoding, NSCopying> {

	BOOL _fromKeyboard;
	BOOL _showMultilingualAlternatives;
	BOOL _lowConfidenceAboutLanguageDetection;
	BOOL _useServerCapitalization;
	BOOL _addTrailingSpace;
	BOOL _allowsAlternatives;
	NSArray* _phrases;
	NSArray* _multilingualAlternatives;
	const CFStringRef _transform;
	NSIndexPath* _indexPathOfInterpretations;

}

@property (nonatomic,copy) NSArray * phrases;                                       //@synthesize phrases=_phrases - In the implementation block
@property (nonatomic,copy) NSArray * multilingualAlternatives;                      //@synthesize multilingualAlternatives=_multilingualAlternatives - In the implementation block
@property (assign,nonatomic) BOOL fromKeyboard;                                     //@synthesize fromKeyboard=_fromKeyboard - In the implementation block
@property (assign,nonatomic) BOOL showMultilingualAlternatives;                     //@synthesize showMultilingualAlternatives=_showMultilingualAlternatives - In the implementation block
@property (assign,nonatomic) BOOL lowConfidenceAboutLanguageDetection;              //@synthesize lowConfidenceAboutLanguageDetection=_lowConfidenceAboutLanguageDetection - In the implementation block
@property (assign,nonatomic) const CFStringRef transform;                           //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) BOOL useServerCapitalization;                          //@synthesize useServerCapitalization=_useServerCapitalization - In the implementation block
@property (assign,nonatomic) BOOL addTrailingSpace;                                 //@synthesize addTrailingSpace=_addTrailingSpace - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathOfInterpretations;              //@synthesize indexPathOfInterpretations=_indexPathOfInterpretations - In the implementation block
@property (nonatomic,readonly) BOOL allowsAlternatives;                             //@synthesize allowsAlternatives=_allowsAlternatives - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const CFStringRef)transform;
-(id)text;
-(void)setTransform:(const CFStringRef)arg1 ;
-(NSArray *)phrases;
-(void)setPhrases:(NSArray *)arg1 ;
-(id)initWithPhrases:(id)arg1 ;
-(BOOL)fromKeyboard;
-(void)setLowConfidenceAboutLanguageDetection:(BOOL)arg1 ;
-(BOOL)lowConfidenceAboutLanguageDetection;
-(id)initWithDetectedPhrases:(id)arg1 multilingualAlternatives:(id)arg2 ;
-(id)textArray;
-(id)initWithArrayOfArrayOfStrings:(id)arg1 ;
-(id)bestText;
-(void)setFromKeyboard:(BOOL)arg1 ;
-(void)setUseServerCapitalization:(BOOL)arg1 ;
-(BOOL)showMultilingualAlternatives;
-(BOOL)allowsAlternatives;
-(NSArray *)multilingualAlternatives;
-(id)bestTextForMultilingualAlternatives;
-(id)bestResults;
-(id)dictationPhraseArray;
-(void)setAddTrailingSpace:(BOOL)arg1 ;
-(NSIndexPath *)indexPathOfInterpretations;
-(void)setIndexPathOfInterpretations:(NSIndexPath *)arg1 ;
-(id)multilingualResultsByLanguageCode;
-(void)setMultilingualAlternatives:(NSArray *)arg1 ;
-(void)setShowMultilingualAlternatives:(BOOL)arg1 ;
-(id)bestTextArray;
-(id)secondBestTextArray;
-(id)bestTextArrayForAlternatives:(id)arg1 ;
-(id)textArrayForAlternatives:(id)arg1 ;
-(id)secondBestText;
-(id)singleLineResult;
-(BOOL)useServerCapitalization;
-(BOOL)addTrailingSpace;
@end


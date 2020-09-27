/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXLangMap, NSString, NSLocale, NSCharacterSet, AXLanguageManager;

@interface AXDialectMap : NSObject {

	AXLangMap* _langMap;
	NSString* _voiceName;
	NSLocale* _locale;
	NSString* _specificLanguageID;
	NSCharacterSet* _speakableCharacters;
	NSCharacterSet* _secondaryLanguageRange;

}

@property (assign,nonatomic,__weak) AXLangMap * langMap;                                     //@synthesize langMap=_langMap - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                                             //@synthesize voiceName=_voiceName - In the implementation block
@property (nonatomic,retain) NSCharacterSet * speakableCharacters;                           //@synthesize speakableCharacters=_speakableCharacters - In the implementation block
@property (nonatomic,copy) NSString * specificLanguageID;                                    //@synthesize specificLanguageID=_specificLanguageID - In the implementation block
@property (nonatomic,readonly) AXLanguageManager * langManager; 
@property (nonatomic,retain) NSCharacterSet * secondaryLanguageRange;                        //@synthesize secondaryLanguageRange=_secondaryLanguageRange - In the implementation block
@property (nonatomic,readonly) NSString * languageNameInCurrentLocale; 
@property (nonatomic,readonly) NSString * languageNameInNativeLocale; 
@property (nonatomic,readonly) NSString * languageNameAndLocaleInCurrentLocale; 
@property (nonatomic,readonly) NSString * localeNameInCurrentLocale; 
@property (nonatomic,readonly) NSString * languageNameAndLocaleInNativeLocale; 
@property (nonatomic,readonly) NSString * regionID; 
+(id)_hanjaCharacterSet;
+(id)_hanjaToHangulMap;
-(id)debugDescription;
-(id)description;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSString *)regionID;
-(NSString *)voiceName;
-(void)setVoiceName:(NSString *)arg1 ;
-(NSString *)localeNameInCurrentLocale;
-(NSString *)specificLanguageID;
-(id)basicDescription;
-(void)setSpeakableCharacters:(NSCharacterSet *)arg1 ;
-(void)setSecondaryLanguageRange:(NSCharacterSet *)arg1 ;
-(void)setSpecificLanguageID:(NSString *)arg1 ;
-(AXLangMap *)langMap;
-(AXLanguageManager *)langManager;
-(NSCharacterSet *)secondaryLanguageRange;
-(BOOL)canSpeakCharacter:(unsigned short)arg1 allowTransliteration:(BOOL)arg2 ;
-(NSCharacterSet *)speakableCharacters;
-(BOOL)speakingRequiresTransliteration;
-(id)_transliteratedSpeechCharacters;
-(BOOL)canSpeakString:(id)arg1 allowsTransliteration:(BOOL)arg2 ;
-(BOOL)_languageIsKorean;
-(id)_stringByTransliterationHanjaToHangul:(id)arg1 ;
-(id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5 ;
-(NSString *)languageNameInCurrentLocale;
-(NSString *)languageNameInNativeLocale;
-(NSString *)languageNameAndLocaleInCurrentLocale;
-(NSString *)languageNameAndLocaleInNativeLocale;
-(BOOL)isDialectSecondaryForCharacter:(unsigned short)arg1 ;
-(BOOL)canSpeakCharacter:(unsigned short)arg1 ;
-(BOOL)canSpeakLongCharacter:(unsigned)arg1 ;
-(BOOL)canSpeakString:(id)arg1 ;
-(id)transliteratedStringForString:(id)arg1 ;
-(void)setLangMap:(AXLangMap *)arg1 ;
@end


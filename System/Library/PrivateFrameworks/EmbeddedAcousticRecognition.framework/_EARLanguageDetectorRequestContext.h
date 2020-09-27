/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSSet, NSString, NSNumber, NSArray;

@interface _EARLanguageDetectorRequestContext : NSObject <NSCopying> {

	NSDictionary* _languagePriors;
	NSSet* _dictationLanguages;
	NSString* _currentDictationLanguage;
	NSNumber* _wasLanguageToggled;
	NSArray* _multilingualKeyboardLanguages;
	NSDictionary* _keyboardConvoLanguagePriors;
	NSDictionary* _keyboardGlobalLanguagePriors;
	NSString* _previousMessageLanguage;
	NSString* _globalLastKeyboardUsed;
	NSDictionary* _dictationLanguagePriors;
	NSArray* _recentMessages;

}

@property (readonly) LDContext LDContext; 
@property (nonatomic,copy) NSDictionary * languagePriors;                            //@synthesize languagePriors=_languagePriors - In the implementation block
@property (nonatomic,copy) NSSet * dictationLanguages;                               //@synthesize dictationLanguages=_dictationLanguages - In the implementation block
@property (nonatomic,copy) NSString * currentDictationLanguage;                      //@synthesize currentDictationLanguage=_currentDictationLanguage - In the implementation block
@property (nonatomic,copy) NSNumber * wasLanguageToggled;                            //@synthesize wasLanguageToggled=_wasLanguageToggled - In the implementation block
@property (nonatomic,copy) NSArray * multilingualKeyboardLanguages;                  //@synthesize multilingualKeyboardLanguages=_multilingualKeyboardLanguages - In the implementation block
@property (nonatomic,copy) NSDictionary * keyboardConvoLanguagePriors;               //@synthesize keyboardConvoLanguagePriors=_keyboardConvoLanguagePriors - In the implementation block
@property (nonatomic,copy) NSDictionary * keyboardGlobalLanguagePriors;              //@synthesize keyboardGlobalLanguagePriors=_keyboardGlobalLanguagePriors - In the implementation block
@property (nonatomic,copy) NSString * previousMessageLanguage;                       //@synthesize previousMessageLanguage=_previousMessageLanguage - In the implementation block
@property (nonatomic,copy) NSString * globalLastKeyboardUsed;                        //@synthesize globalLastKeyboardUsed=_globalLastKeyboardUsed - In the implementation block
@property (nonatomic,copy) NSDictionary * dictationLanguagePriors;                   //@synthesize dictationLanguagePriors=_dictationLanguagePriors - In the implementation block
@property (nonatomic,copy) NSArray * recentMessages;                                 //@synthesize recentMessages=_recentMessages - In the implementation block
+(id)contextFromLDContext:(const LDContext*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDictationLanguages:(NSSet *)arg1 ;
-(void)setWasLanguageToggled:(NSNumber *)arg1 ;
-(void)setKeyboardGlobalLanguagePriors:(NSDictionary *)arg1 ;
-(NSNumber *)wasLanguageToggled;
-(NSSet *)dictationLanguages;
-(NSDictionary *)keyboardGlobalLanguagePriors;
-(NSDictionary *)languagePriors;
-(NSString *)currentDictationLanguage;
-(NSArray *)multilingualKeyboardLanguages;
-(NSDictionary *)keyboardConvoLanguagePriors;
-(NSString *)previousMessageLanguage;
-(NSString *)globalLastKeyboardUsed;
-(NSDictionary *)dictationLanguagePriors;
-(void)setLanguagePriors:(NSDictionary *)arg1 ;
-(void)setCurrentDictationLanguage:(NSString *)arg1 ;
-(void)setMultilingualKeyboardLanguages:(NSArray *)arg1 ;
-(void)setKeyboardConvoLanguagePriors:(NSDictionary *)arg1 ;
-(void)setPreviousMessageLanguage:(NSString *)arg1 ;
-(void)setGlobalLastKeyboardUsed:(NSString *)arg1 ;
-(void)setDictationLanguagePriors:(NSDictionary *)arg1 ;
-(NSArray *)recentMessages;
-(void)setRecentMessages:(NSArray *)arg1 ;
-(LDContext)LDContext;
@end


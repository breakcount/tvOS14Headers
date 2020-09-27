/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _EARLmData, NSLocale, NSData, NSArray;

@interface SFSpeechLanguageModel : NSObject {

	_EARLmData* _appLmData;
	NSLocale* _locale;
	NSData* _model;
	NSArray* _outOfVocabularyWords;

}

@property (nonatomic,copy,readonly) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy,readonly) NSData * model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outOfVocabularyWords;              //@synthesize outOfVocabularyWords=_outOfVocabularyWords - In the implementation block
+(void)initialize;
+(id)supportedLocales;
-(id)init;
-(NSLocale *)locale;
-(id)initWithLocale:(id)arg1 ;
-(NSData *)model;
-(id)initWithAssetPath:(id)arg1 ;
-(NSArray *)outOfVocabularyWords;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INSpeakableStringExport.h>
#import <libobjc.A.dylib/INSpeakable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface INSpeakableString : NSObject <INSpeakableStringExport, INSpeakable, NSCopying, NSSecureCoding> {

	NSString* _spokenPhrase;
	NSString* _pronunciationHint;
	NSString* _vocabularyIdentifier;
	NSArray* _alternativeSpeakableMatches;

}

@property (nonatomic,retain) NSString * spokenPhrase;                              //@synthesize spokenPhrase=_spokenPhrase - In the implementation block
@property (nonatomic,retain) NSString * pronunciationHint;                         //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * vocabularyIdentifier;                      //@synthesize vocabularyIdentifier=_vocabularyIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * alternativeSpeakableMatches;              //@synthesize alternativeSpeakableMatches=_alternativeSpeakableMatches - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)length;
-(id)string;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)_intents_localizedCopyWithLocalizer:(id)arg1 ;
-(NSString *)pronunciationHint;
-(void)setPronunciationHint:(NSString *)arg1 ;
-(NSString *)vocabularyIdentifier;
-(void)setVocabularyIdentifier:(NSString *)arg1 ;
-(NSString *)spokenPhrase;
-(NSArray *)alternativeSpeakableMatches;
-(void)setSpokenPhrase:(NSString *)arg1 ;
-(id)initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)initWithSpokenPhrase:(id)arg1 ;
-(id)_initWithVocabularyIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3 alternativeMatches:(id)arg4 ;
-(id)_effectiveNSStringValue;
-(id)spokenPhrases;
-(id)initWithIdentifier:(id)arg1 string:(id)arg2 ;
@end


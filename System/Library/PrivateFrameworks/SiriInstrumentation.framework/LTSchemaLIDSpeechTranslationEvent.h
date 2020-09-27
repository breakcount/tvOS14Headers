/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, LTSchemaLocaleConfidence, NSData;

@interface LTSchemaLIDSpeechTranslationEvent : PBCodable {

	NSString* _requestID;
	LTSchemaLocaleConfidence* _selectedLocale;
	LTSchemaLocaleConfidence* _alternateLocale;
	NSString* _userSelectedLocale;
	unsigned _responseTimeMs;
	unsigned _speechElapsedTime;
	SCD_Struct_SI3 _has;
	BOOL _hasRequestID;
	BOOL _hasSelectedLocale;
	BOOL _hasAlternateLocale;
	BOOL _hasUserSelectedLocale;

}

@property (nonatomic,copy) NSString * requestID;                                      //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL hasRequestID;                                       //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (nonatomic,retain) LTSchemaLocaleConfidence * selectedLocale;               //@synthesize selectedLocale=_selectedLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedLocale;                                  //@synthesize hasSelectedLocale=_hasSelectedLocale - In the implementation block
@property (nonatomic,retain) LTSchemaLocaleConfidence * alternateLocale;              //@synthesize alternateLocale=_alternateLocale - In the implementation block
@property (assign,nonatomic) BOOL hasAlternateLocale;                                 //@synthesize hasAlternateLocale=_hasAlternateLocale - In the implementation block
@property (nonatomic,copy) NSString * userSelectedLocale;                             //@synthesize userSelectedLocale=_userSelectedLocale - In the implementation block
@property (assign,nonatomic) BOOL hasUserSelectedLocale;                              //@synthesize hasUserSelectedLocale=_hasUserSelectedLocale - In the implementation block
@property (assign,nonatomic) unsigned responseTimeMs;                                 //@synthesize responseTimeMs=_responseTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTimeMs; 
@property (assign,nonatomic) unsigned speechElapsedTime;                              //@synthesize speechElapsedTime=_speechElapsedTime - In the implementation block
@property (assign,nonatomic) BOOL hasSpeechElapsedTime; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(BOOL)hasRequestID;
-(NSData *)jsonData;
-(void)setSelectedLocale:(LTSchemaLocaleConfidence *)arg1 ;
-(LTSchemaLocaleConfidence *)selectedLocale;
-(BOOL)hasSelectedLocale;
-(void)setHasRequestID:(BOOL)arg1 ;
-(void)setHasSelectedLocale:(BOOL)arg1 ;
-(void)setResponseTimeMs:(unsigned)arg1 ;
-(unsigned)responseTimeMs;
-(BOOL)hasResponseTimeMs;
-(void)setHasResponseTimeMs:(BOOL)arg1 ;
-(void)setUserSelectedLocale:(NSString *)arg1 ;
-(NSString *)userSelectedLocale;
-(BOOL)hasUserSelectedLocale;
-(void)setHasUserSelectedLocale:(BOOL)arg1 ;
-(void)setAlternateLocale:(LTSchemaLocaleConfidence *)arg1 ;
-(void)setSpeechElapsedTime:(unsigned)arg1 ;
-(LTSchemaLocaleConfidence *)alternateLocale;
-(unsigned)speechElapsedTime;
-(BOOL)hasAlternateLocale;
-(BOOL)hasSpeechElapsedTime;
-(void)setHasSpeechElapsedTime:(BOOL)arg1 ;
-(void)setHasAlternateLocale:(BOOL)arg1 ;
@end


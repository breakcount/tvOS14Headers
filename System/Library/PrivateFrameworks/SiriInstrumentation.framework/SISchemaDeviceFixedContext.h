/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:46 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaSiriUISettings, NSData;

@interface SISchemaDeviceFixedContext : PBCodable {

	NSString* _deviceType;
	NSString* _systemBuild;
	NSString* _siriInputLanguage;
	NSString* _siriVoiceLanguage;
	NSString* _systemLocale;
	NSString* _siriDeviceID;
	NSString* _speechID;
	SISchemaSiriUISettings* _siriUISettings;
	BOOL _isSatellitePaired;
	SCD_Struct_SI1 _has;
	BOOL _hasDeviceType;
	BOOL _hasSystemBuild;
	BOOL _hasSiriInputLanguage;
	BOOL _hasSiriVoiceLanguage;
	BOOL _hasSystemLocale;
	BOOL _hasSiriDeviceID;
	BOOL _hasSpeechID;
	BOOL _hasSiriUISettings;

}

@property (nonatomic,copy) NSString * deviceType;                                  //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceType;                                   //@synthesize hasDeviceType=_hasDeviceType - In the implementation block
@property (nonatomic,copy) NSString * systemBuild;                                 //@synthesize systemBuild=_systemBuild - In the implementation block
@property (assign,nonatomic) BOOL hasSystemBuild;                                  //@synthesize hasSystemBuild=_hasSystemBuild - In the implementation block
@property (nonatomic,copy) NSString * siriInputLanguage;                           //@synthesize siriInputLanguage=_siriInputLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasSiriInputLanguage;                            //@synthesize hasSiriInputLanguage=_hasSiriInputLanguage - In the implementation block
@property (nonatomic,copy) NSString * siriVoiceLanguage;                           //@synthesize siriVoiceLanguage=_siriVoiceLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasSiriVoiceLanguage;                            //@synthesize hasSiriVoiceLanguage=_hasSiriVoiceLanguage - In the implementation block
@property (nonatomic,copy) NSString * systemLocale;                                //@synthesize systemLocale=_systemLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSystemLocale;                                 //@synthesize hasSystemLocale=_hasSystemLocale - In the implementation block
@property (nonatomic,copy) NSString * siriDeviceID;                                //@synthesize siriDeviceID=_siriDeviceID - In the implementation block
@property (assign,nonatomic) BOOL hasSiriDeviceID;                                 //@synthesize hasSiriDeviceID=_hasSiriDeviceID - In the implementation block
@property (nonatomic,copy) NSString * speechID;                                    //@synthesize speechID=_speechID - In the implementation block
@property (assign,nonatomic) BOOL hasSpeechID;                                     //@synthesize hasSpeechID=_hasSpeechID - In the implementation block
@property (nonatomic,retain) SISchemaSiriUISettings * siriUISettings;              //@synthesize siriUISettings=_siriUISettings - In the implementation block
@property (assign,nonatomic) BOOL hasSiriUISettings;                               //@synthesize hasSiriUISettings=_hasSiriUISettings - In the implementation block
@property (assign,nonatomic) BOOL isSatellitePaired;                               //@synthesize isSatellitePaired=_isSatellitePaired - In the implementation block
@property (assign,nonatomic) BOOL hasIsSatellitePaired; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)systemLocale;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasDeviceType;
-(void)setHasDeviceType:(BOOL)arg1 ;
-(NSData *)jsonData;
-(void)setSystemLocale:(NSString *)arg1 ;
-(BOOL)hasSystemLocale;
-(void)setHasSystemLocale:(BOOL)arg1 ;
-(void)setSiriDeviceID:(NSString *)arg1 ;
-(NSString *)siriDeviceID;
-(BOOL)hasSiriDeviceID;
-(void)setHasSiriDeviceID:(BOOL)arg1 ;
-(void)setSystemBuild:(NSString *)arg1 ;
-(void)setSiriInputLanguage:(NSString *)arg1 ;
-(void)setSiriVoiceLanguage:(NSString *)arg1 ;
-(void)setSpeechID:(NSString *)arg1 ;
-(void)setSiriUISettings:(SISchemaSiriUISettings *)arg1 ;
-(void)setIsSatellitePaired:(BOOL)arg1 ;
-(NSString *)systemBuild;
-(NSString *)siriInputLanguage;
-(NSString *)siriVoiceLanguage;
-(NSString *)speechID;
-(SISchemaSiriUISettings *)siriUISettings;
-(BOOL)isSatellitePaired;
-(BOOL)hasSystemBuild;
-(BOOL)hasSiriInputLanguage;
-(BOOL)hasSiriVoiceLanguage;
-(BOOL)hasSpeechID;
-(BOOL)hasSiriUISettings;
-(BOOL)hasIsSatellitePaired;
-(void)setHasIsSatellitePaired:(BOOL)arg1 ;
-(void)setHasSystemBuild:(BOOL)arg1 ;
-(void)setHasSiriInputLanguage:(BOOL)arg1 ;
-(void)setHasSiriVoiceLanguage:(BOOL)arg1 ;
-(void)setHasSpeechID:(BOOL)arg1 ;
-(void)setHasSiriUISettings:(BOOL)arg1 ;
@end


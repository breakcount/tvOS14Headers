/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TTSSpeechService;
@class NSString;

@interface TTSSpeechVoice : NSObject <NSSecureCoding, NSCopying> {

	id<TTSSpeechService> _service;
	BOOL _isDefault;
	BOOL _isFallbackDefault;
	BOOL _excludeInAvailableVoiceList;
	BOOL _canBeDownloaded;
	BOOL _isCombinedFootprint;
	NSString* _name;
	NSString* _language;
	NSString* _identifier;
	long long _footprint;
	long long _gender;
	NSString* _nonCombinedVoiceId;
	NSString* _serviceIdentifier;

}

@property (nonatomic,retain) NSString * serviceIdentifier;                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * language;                             //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long footprint;                             //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) BOOL isDefault;                                //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) BOOL isFallbackDefault;                        //@synthesize isFallbackDefault=_isFallbackDefault - In the implementation block
@property (nonatomic,readonly) BOOL excludeInAvailableVoiceList;              //@synthesize excludeInAvailableVoiceList=_excludeInAvailableVoiceList - In the implementation block
@property (assign,nonatomic) long long gender;                                //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) BOOL canBeDownloaded;                            //@synthesize canBeDownloaded=_canBeDownloaded - In the implementation block
@property (nonatomic,readonly) BOOL isCombinedFootprint;                      //@synthesize isCombinedFootprint=_isCombinedFootprint - In the implementation block
@property (nonatomic,retain) NSString * nonCombinedVoiceId;                   //@synthesize nonCombinedVoiceId=_nonCombinedVoiceId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedName:(id)arg1 forLanguage:(id)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(id)service;
-(BOOL)isDefault;
-(NSString *)serviceIdentifier;
-(void)setService:(id)arg1 ;
-(NSString *)language;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setFootprint:(long long)arg1 ;
-(long long)footprint;
-(BOOL)excludeInAvailableVoiceList;
-(BOOL)isFallbackDefault;
-(NSString *)nonCombinedVoiceId;
-(void)setNonCombinedVoiceId:(NSString *)arg1 ;
-(BOOL)canBeDownloaded;
-(void)setCanBeDownloaded:(BOOL)arg1 ;
-(id)localizedNameForLanguage:(id)arg1 ;
-(BOOL)isCombinedFootprint;
@end


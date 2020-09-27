/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaSpeechTranscription : PBCodable {

	NSString* _aceID;
	int _speechTranscriptionType;
	SCD_Struct_SI1 _has;
	BOOL _hasAceID;

}

@property (nonatomic,copy) NSString * aceID;                               //@synthesize aceID=_aceID - In the implementation block
@property (assign,nonatomic) BOOL hasAceID;                                //@synthesize hasAceID=_hasAceID - In the implementation block
@property (assign,nonatomic) int speechTranscriptionType;                  //@synthesize speechTranscriptionType=_speechTranscriptionType - In the implementation block
@property (assign,nonatomic) BOOL hasSpeechTranscriptionType; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAceID:(NSString *)arg1 ;
-(void)setSpeechTranscriptionType:(int)arg1 ;
-(NSString *)aceID;
-(int)speechTranscriptionType;
-(BOOL)hasAceID;
-(BOOL)hasSpeechTranscriptionType;
-(void)setHasSpeechTranscriptionType:(BOOL)arg1 ;
-(void)setHasAceID:(BOOL)arg1 ;
@end

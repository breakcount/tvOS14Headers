/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaLanguageProfile : PBCodable {

	BOOL _hasL;
	NSData* _l;

}

@property (l,nonatomic,copy) NSData * l;                       //@synthesize l=_l - In the implementation block
@property (assign,nonatomic) BOOL hasL;                        //@synthesize hasL=_hasL - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(NSData *)l;
-(void)setL:(NSData *)arg1 ;
-(BOOL)hasL;
-(void)setHasL:(BOOL)arg1 ;
@end

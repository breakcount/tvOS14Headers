/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariInteractedWithGeneratedPasswordEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _generatedPasswordInteractionType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasGeneratedPasswordInteractionType; 
@property (assign,nonatomic) int generatedPasswordInteractionType;                  //@synthesize generatedPasswordInteractionType=_generatedPasswordInteractionType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(int)generatedPasswordInteractionType;
-(void)setGeneratedPasswordInteractionType:(int)arg1 ;
-(void)setHasGeneratedPasswordInteractionType:(BOOL)arg1 ;
-(BOOL)hasGeneratedPasswordInteractionType;
-(id)generatedPasswordInteractionTypeAsString:(int)arg1 ;
-(int)StringAsGeneratedPasswordInteractionType:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariTappedOnToolbarButtonEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _button;
	BOOL _usedLongTap;
	SCD_Struct_WB7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasButton; 
@property (assign,nonatomic) int button;                                //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL hasUsedLongTap; 
@property (assign,nonatomic) BOOL usedLongTap;                          //@synthesize usedLongTap=_usedLongTap - In the implementation block
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
-(int)button;
-(void)setButton:(int)arg1 ;
-(void)setHasButton:(BOOL)arg1 ;
-(BOOL)hasButton;
-(id)buttonAsString:(int)arg1 ;
-(int)StringAsButton:(id)arg1 ;
-(void)setUsedLongTap:(BOOL)arg1 ;
-(void)setHasUsedLongTap:(BOOL)arg1 ;
-(BOOL)hasUsedLongTap;
-(BOOL)usedLongTap;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMultiTabsState : PBCodable <NSCopying> {

	unsigned _currentTabIndex;
	unsigned _numberOfTabsOpen;
	SCD_Struct_GE114 _flags;

}

@property (assign,nonatomic) BOOL hasNumberOfTabsOpen; 
@property (assign,nonatomic) unsigned numberOfTabsOpen; 
@property (assign,nonatomic) BOOL hasCurrentTabIndex; 
@property (assign,nonatomic) unsigned currentTabIndex; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setNumberOfTabsOpen:(unsigned)arg1 ;
-(void)setCurrentTabIndex:(unsigned)arg1 ;
-(unsigned)numberOfTabsOpen;
-(void)setHasNumberOfTabsOpen:(BOOL)arg1 ;
-(BOOL)hasNumberOfTabsOpen;
-(unsigned)currentTabIndex;
-(void)setHasCurrentTabIndex:(BOOL)arg1 ;
-(BOOL)hasCurrentTabIndex;
@end


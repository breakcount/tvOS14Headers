/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBCreateFolderEvent : PBCodable <NSCopying> {

	NSString* _folderSource;
	unsigned _icon;
	NSString* _key;
	unsigned _shortcutCount;
	SCD_Struct_WF2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasIcon; 
@property (assign,nonatomic) unsigned icon;                        //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL hasShortcutCount; 
@property (assign,nonatomic) unsigned shortcutCount;               //@synthesize shortcutCount=_shortcutCount - In the implementation block
@property (nonatomic,readonly) BOOL hasFolderSource; 
@property (nonatomic,retain) NSString * folderSource;              //@synthesize folderSource=_folderSource - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)icon;
-(void)setIcon:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)hasIcon;
-(void)setHasIcon:(BOOL)arg1 ;
-(void)setShortcutCount:(unsigned)arg1 ;
-(void)setHasShortcutCount:(BOOL)arg1 ;
-(BOOL)hasShortcutCount;
-(BOOL)hasFolderSource;
-(unsigned)shortcutCount;
-(NSString *)folderSource;
-(void)setFolderSource:(NSString *)arg1 ;
@end


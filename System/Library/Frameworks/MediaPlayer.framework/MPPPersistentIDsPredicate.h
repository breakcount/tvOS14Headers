/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPPPersistentIDsPredicate : PBCodable <NSCopying> {

	SCD_Struct_MP77* _persistentIDs;
	BOOL _shouldContain;
	SCD_Struct_MP47 _has;

}

@property (assign,nonatomic) BOOL hasShouldContain; 
@property (assign,nonatomic) BOOL shouldContain;                                   //@synthesize shouldContain=_shouldContain - In the implementation block
@property (nonatomic,readonly) unsigned long long persistentIDsCount; 
@property (nonatomic,readonly) long long* persistentIDs; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)shouldContain;
-(long long*)persistentIDs;
-(void)setShouldContain:(BOOL)arg1 ;
-(void)setHasShouldContain:(BOOL)arg1 ;
-(BOOL)hasShouldContain;
-(unsigned long long)persistentIDsCount;
-(void)clearPersistentIDs;
-(void)addPersistentIDs:(long long)arg1 ;
-(long long)persistentIDsAtIndex:(unsigned long long)arg1 ;
-(void)setPersistentIDs:(long long*)arg1 count:(unsigned long long)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _MRAudioFormatSettingsProtobuf : PBCodable <NSCopying> {

	NSData* _formatSettingsPlistData;

}

@property (nonatomic,readonly) BOOL hasFormatSettingsPlistData; 
@property (nonatomic,retain) NSData * formatSettingsPlistData;               //@synthesize formatSettingsPlistData=_formatSettingsPlistData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFormatSettingsPlistData:(NSData *)arg1 ;
-(NSData *)formatSettingsPlistData;
-(BOOL)hasFormatSettingsPlistData;
@end


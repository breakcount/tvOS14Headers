/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MPCProtoRadioContentReferenceLibraryAlbumContentReference, _MPCProtoRadioContentReferenceLibraryArtistContentReference, _MPCProtoRadioContentReferenceLibraryItemContentReference, _MPCProtoRadioContentReferenceStoreContentReference;

@interface _MPCProtoRadioContentReference : PBCodable <NSCopying> {

	_MPCProtoRadioContentReferenceLibraryAlbumContentReference* _libraryAlbumContentReference;
	_MPCProtoRadioContentReferenceLibraryArtistContentReference* _libraryArtistContentReference;
	_MPCProtoRadioContentReferenceLibraryItemContentReference* _libraryItemContentReference;
	_MPCProtoRadioContentReferenceStoreContentReference* _storeContentReference;

}

@property (nonatomic,readonly) BOOL hasLibraryAlbumContentReference; 
@property (nonatomic,retain) _MPCProtoRadioContentReferenceLibraryAlbumContentReference * libraryAlbumContentReference;                //@synthesize libraryAlbumContentReference=_libraryAlbumContentReference - In the implementation block
@property (nonatomic,readonly) BOOL hasLibraryArtistContentReference; 
@property (nonatomic,retain) _MPCProtoRadioContentReferenceLibraryArtistContentReference * libraryArtistContentReference;              //@synthesize libraryArtistContentReference=_libraryArtistContentReference - In the implementation block
@property (nonatomic,readonly) BOOL hasLibraryItemContentReference; 
@property (nonatomic,retain) _MPCProtoRadioContentReferenceLibraryItemContentReference * libraryItemContentReference;                  //@synthesize libraryItemContentReference=_libraryItemContentReference - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreContentReference; 
@property (nonatomic,retain) _MPCProtoRadioContentReferenceStoreContentReference * storeContentReference;                              //@synthesize storeContentReference=_storeContentReference - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLibraryAlbumContentReference:(_MPCProtoRadioContentReferenceLibraryAlbumContentReference *)arg1 ;
-(void)setLibraryArtistContentReference:(_MPCProtoRadioContentReferenceLibraryArtistContentReference *)arg1 ;
-(void)setLibraryItemContentReference:(_MPCProtoRadioContentReferenceLibraryItemContentReference *)arg1 ;
-(void)setStoreContentReference:(_MPCProtoRadioContentReferenceStoreContentReference *)arg1 ;
-(BOOL)hasLibraryAlbumContentReference;
-(BOOL)hasLibraryArtistContentReference;
-(BOOL)hasLibraryItemContentReference;
-(BOOL)hasStoreContentReference;
-(_MPCProtoRadioContentReferenceLibraryAlbumContentReference *)libraryAlbumContentReference;
-(_MPCProtoRadioContentReferenceLibraryArtistContentReference *)libraryArtistContentReference;
-(_MPCProtoRadioContentReferenceLibraryItemContentReference *)libraryItemContentReference;
-(_MPCProtoRadioContentReferenceStoreContentReference *)storeContentReference;
@end


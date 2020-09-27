/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLAlbumProtocol;
@class NSString, NSMutableSet, NSObject, PLAssetJournalEntryPayload, NSSet;

@interface PLFileSystemImportAsset : NSObject {

	NSString* _path;
	BOOL _pathContainsDCIM;
	NSMutableSet* _urls;
	int _assetKind;
	NSObject*<PLAlbumProtocol> _destinationAlbum;
	PLAssetJournalEntryPayload* _assetPayload;

}

@property (nonatomic,retain) NSObject*<PLAlbumProtocol> destinationAlbum;              //@synthesize destinationAlbum=_destinationAlbum - In the implementation block
@property (assign,nonatomic) int assetKind;                                            //@synthesize assetKind=_assetKind - In the implementation block
@property (nonatomic,readonly) NSSet * urls; 
@property (nonatomic,readonly) PLAssetJournalEntryPayload * assetPayload;              //@synthesize assetPayload=_assetPayload - In the implementation block
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSSet *)urls;
-(BOOL)isCameraKit;
-(int)assetKind;
-(PLAssetJournalEntryPayload *)assetPayload;
-(NSObject*<PLAlbumProtocol>)destinationAlbum;
-(id)initWithDestinationAlbum:(id)arg1 assetKind:(int)arg2 ;
-(id)initWithAssetPayload:(id)arg1 ;
-(void)addURL:(id)arg1 ;
-(void)addURLs:(id)arg1 ;
-(void)setDestinationAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(void)setAssetKind:(int)arg1 ;
@end


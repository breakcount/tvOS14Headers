/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSDate;

@interface BLDownloadStatus : NSObject <NSCopying> {

	BOOL _isAudiobook;
	BOOL _isRestore;
	BOOL _canPause;
	BOOL _isSample;
	BOOL _isPurchase;
	NSNumber* _storeID;
	NSNumber* _storePlaylistID;
	NSString* _permLink;
	NSString* _downloadID;
	NSNumber* _percentComplete;
	NSNumber* _estimatedTimeRemaining;
	NSNumber* _transferBytesWritten;
	NSNumber* _transferBytesExpected;
	long long _downloadPhase;
	NSDate* _purchaseDate;
	long long _persistentIdentifier;
	NSNumber* _storeAccountIdentifier;
	NSString* _artistName;
	NSString* _title;
	NSString* _subtitle;
	NSString* _collectionArtistName;
	NSString* _collectionTitle;
	NSString* _genre;
	NSString* _thumbnailImageURL;
	NSString* _assetKind;

}

@property (nonatomic,retain) NSNumber * storeID;                             //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,retain) NSNumber * storePlaylistID;                     //@synthesize storePlaylistID=_storePlaylistID - In the implementation block
@property (nonatomic,copy) NSString * permLink;                              //@synthesize permLink=_permLink - In the implementation block
@property (nonatomic,copy) NSString * downloadID;                            //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,retain) NSNumber * percentComplete;                     //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,retain) NSNumber * estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
@property (nonatomic,retain) NSNumber * transferBytesWritten;                //@synthesize transferBytesWritten=_transferBytesWritten - In the implementation block
@property (nonatomic,retain) NSNumber * transferBytesExpected;               //@synthesize transferBytesExpected=_transferBytesExpected - In the implementation block
@property (assign,nonatomic) long long downloadPhase;                        //@synthesize downloadPhase=_downloadPhase - In the implementation block
@property (assign,nonatomic) BOOL isAudiobook;                               //@synthesize isAudiobook=_isAudiobook - In the implementation block
@property (assign,nonatomic) BOOL isRestore;                                 //@synthesize isRestore=_isRestore - In the implementation block
@property (assign,nonatomic) BOOL canPause;                                  //@synthesize canPause=_canPause - In the implementation block
@property (assign,nonatomic) BOOL isSample;                                  //@synthesize isSample=_isSample - In the implementation block
@property (assign,nonatomic) BOOL isPurchase;                                //@synthesize isPurchase=_isPurchase - In the implementation block
@property (nonatomic,retain) NSDate * purchaseDate;                          //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (assign,nonatomic) long long persistentIdentifier;                 //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * storeAccountIdentifier;              //@synthesize storeAccountIdentifier=_storeAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * artistName;                            //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * collectionArtistName;                  //@synthesize collectionArtistName=_collectionArtistName - In the implementation block
@property (nonatomic,copy) NSString * collectionTitle;                       //@synthesize collectionTitle=_collectionTitle - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * genre;                                 //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * thumbnailImageURL;                     //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
@property (nonatomic,copy) NSString * assetKind;                             //@synthesize assetKind=_assetKind - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)persistentIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)estimatedTimeRemaining;
-(void)setEstimatedTimeRemaining:(NSNumber *)arg1 ;
-(NSNumber *)percentComplete;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSNumber *)storeID;
-(NSString *)collectionTitle;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)genre;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setPercentComplete:(NSNumber *)arg1 ;
-(void)setCanPause:(BOOL)arg1 ;
-(NSString *)collectionArtistName;
-(void)setCollectionArtistName:(NSString *)arg1 ;
-(void)setThumbnailImageURL:(NSString *)arg1 ;
-(NSDate *)purchaseDate;
-(NSString *)thumbnailImageURL;
-(BOOL)isSample;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(BOOL)canPause;
-(NSString *)downloadID;
-(long long)downloadPhase;
-(NSNumber *)storeAccountIdentifier;
-(BOOL)isRestore;
-(BOOL)isPurchase;
-(NSNumber *)transferBytesWritten;
-(NSNumber *)transferBytesExpected;
-(void)setStoreID:(NSNumber *)arg1 ;
-(void)setPersistentIdentifier:(long long)arg1 ;
-(void)setIsRestore:(BOOL)arg1 ;
-(NSString *)assetKind;
-(void)setAssetKind:(NSString *)arg1 ;
-(void)setCollectionTitle:(NSString *)arg1 ;
-(void)setDownloadID:(NSString *)arg1 ;
-(void)setIsSample:(BOOL)arg1 ;
-(void)setIsPurchase:(BOOL)arg1 ;
-(NSString *)permLink;
-(void)setPermLink:(NSString *)arg1 ;
-(BOOL)isAudiobook;
-(NSNumber *)storePlaylistID;
-(void)setStorePlaylistID:(NSNumber *)arg1 ;
-(void)setTransferBytesWritten:(NSNumber *)arg1 ;
-(void)setTransferBytesExpected:(NSNumber *)arg1 ;
-(void)setDownloadPhase:(long long)arg1 ;
-(void)setIsAudiobook:(BOOL)arg1 ;
-(void)setStoreAccountIdentifier:(NSNumber *)arg1 ;
@end


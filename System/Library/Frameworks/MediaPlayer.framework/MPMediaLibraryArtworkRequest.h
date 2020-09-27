/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber, MPMediaLibraryArtwork, ML3MusicLibrary, ICUserIdentity;

@interface MPMediaLibraryArtworkRequest : NSObject {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	unsigned long long _mediaType;
	BOOL _hasRetrievedTokens;
	double _retrievalTime;
	NSString* _availableArtworkToken;
	NSString* _fetchableArtworkToken;
	NSNumber* _fetchableArtworkSource;
	long long _entityType;
	unsigned long long _libraryID;
	long long _artworkType;
	MPMediaLibraryArtwork* _libraryArtwork;
	ML3MusicLibrary* _library;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,copy,readonly) ICUserIdentity * userIdentity;                  //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,readonly) ML3MusicLibrary * library;                           //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) long long artworkType;                               //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,readonly) unsigned long long libraryID;                        //@synthesize libraryID=_libraryID - In the implementation block
@property (nonatomic,readonly) long long entityType;                                //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) MPMediaLibraryArtwork * libraryArtwork;              //@synthesize libraryArtwork=_libraryArtwork - In the implementation block
@property (assign,nonatomic) double retrievalTime;                                  //@synthesize retrievalTime=_retrievalTime - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,copy) NSString * availableArtworkToken;                        //@synthesize availableArtworkToken=_availableArtworkToken - In the implementation block
@property (nonatomic,copy) NSString * fetchableArtworkToken;                        //@synthesize fetchableArtworkToken=_fetchableArtworkToken - In the implementation block
@property (nonatomic,copy) NSNumber * fetchableArtworkSource;                       //@synthesize fetchableArtworkSource=_fetchableArtworkSource - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(ML3MusicLibrary *)library;
-(long long)artworkType;
-(unsigned long long)mediaType;
-(ICUserIdentity *)userIdentity;
-(long long)entityType;
-(unsigned long long)libraryID;
-(NSString *)availableArtworkToken;
-(NSString *)fetchableArtworkToken;
-(double)retrievalTime;
-(void)setRetrievalTime:(double)arg1 ;
-(id)initWithLibrary:(id)arg1 identifier:(unsigned long long)arg2 entityType:(long long)arg3 artworkType:(long long)arg4 ;
-(id)initWithLibrary:(id)arg1 identifier:(unsigned long long)arg2 entityType:(long long)arg3 artworkType:(long long)arg4 mediaType:(unsigned long long)arg5 ;
-(id)initWithIdentifier:(unsigned long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 ;
-(id)initWithML3Library:(id)arg1 identifier:(unsigned long long)arg2 entityType:(long long)arg3 artworkType:(long long)arg4 ;
-(void)setAvailableArtworkToken:(NSString *)arg1 ;
-(void)setFetchableArtworkToken:(NSString *)arg1 ;
-(NSNumber *)fetchableArtworkSource;
-(void)setFetchableArtworkSource:(NSNumber *)arg1 ;
-(MPMediaLibraryArtwork *)libraryArtwork;
-(void)setLibraryArtwork:(MPMediaLibraryArtwork *)arg1 ;
-(void)clearFailedFetchableToken;
-(void)promoteFetchableArtworkTokenIfNeeded;
-(void)_onQueue_updateTokens;
@end


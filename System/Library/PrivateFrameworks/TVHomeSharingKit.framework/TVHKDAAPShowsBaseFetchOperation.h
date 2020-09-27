/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKManualMediaEntitiesFetchOperation.h>
#import <TVHomeSharingKit/TVHKMediaEntitiesNetworkFetching.h>

@class TVHKMediaServerIdentifier, TVHKMediaLibrarySessionState, TVHKMediaLibraryRequestSession, TVHKMediaServerVersion, TVHKDAAPMediaItemsFetchOperation, TVHKMediaEntitiesFetchCache, NSString;

@interface TVHKDAAPShowsBaseFetchOperation : TVHKManualMediaEntitiesFetchOperation <TVHKMediaEntitiesNetworkFetching> {

	TVHKMediaServerIdentifier* _mediaServerIdentifier;
	TVHKMediaLibrarySessionState* _sessionState;
	TVHKMediaLibraryRequestSession* _requestSession;
	unsigned long long _basePlaylistID;
	unsigned long long _databaseID;
	unsigned long long _currentServerRevision;
	TVHKMediaServerVersion* _serverVersion;
	TVHKDAAPMediaItemsFetchOperation* _episodesFetchOperation;
	TVHKMediaEntitiesFetchCache* _fetchCache;

}

@property (nonatomic,retain) TVHKDAAPMediaItemsFetchOperation * episodesFetchOperation;              //@synthesize episodesFetchOperation=_episodesFetchOperation - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesFetchCache * fetchCache;                               //@synthesize fetchCache=_fetchCache - In the implementation block
@property (nonatomic,copy,readonly) TVHKMediaServerIdentifier * mediaServerIdentifier;               //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) TVHKMediaLibrarySessionState * sessionState;                     //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,readonly) TVHKMediaLibraryRequestSession * requestSession;                      //@synthesize requestSession=_requestSession - In the implementation block
@property (nonatomic,copy) TVHKMediaServerVersion * serverVersion;                                   //@synthesize serverVersion=_serverVersion - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;                                          //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) unsigned long long basePlaylistID;                                      //@synthesize basePlaylistID=_basePlaylistID - In the implementation block
@property (assign,nonatomic) unsigned long long currentServerRevision;                               //@synthesize currentServerRevision=_currentServerRevision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(TVHKMediaLibrarySessionState *)sessionState;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(unsigned long long)databaseID;
-(id)_initWithRequest:(id)arg1 ;
-(TVHKMediaEntitiesFetchCache *)fetchCache;
-(void)setFetchCache:(TVHKMediaEntitiesFetchCache *)arg1 ;
-(TVHKMediaServerVersion *)serverVersion;
-(void)setServerVersion:(TVHKMediaServerVersion *)arg1 ;
-(TVHKMediaServerIdentifier *)mediaServerIdentifier;
-(id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 sessionState:(id)arg3 requestSession:(id)arg4 fetchCache:(id)arg5 ;
-(id)_episodesFetchRequest;
-(id)_mediaEntityCacheWithFetchCache:(id)arg1 ;
-(id)_mediaEntitiesWithFetchedEpisodes:(id)arg1 andMediaEntityCache:(id)arg2 ;
-(TVHKMediaLibraryRequestSession *)requestSession;
-(unsigned long long)basePlaylistID;
-(void)setBasePlaylistID:(unsigned long long)arg1 ;
-(unsigned long long)currentServerRevision;
-(void)setCurrentServerRevision:(unsigned long long)arg1 ;
-(void)_mediaEntitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(TVHKDAAPMediaItemsFetchOperation *)episodesFetchOperation;
-(void)setEpisodesFetchOperation:(TVHKDAAPMediaItemsFetchOperation *)arg1 ;
@end


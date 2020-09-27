/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TVHKMediaServerIdentifier, TVHKMediaLibrarySessionState, TVHKMediaLibraryRequestSession, TVHKMediaServerVersion;


@protocol TVHKMediaEntitiesNetworkFetching <NSObject>
@property (nonatomic,copy,readonly) TVHKMediaServerIdentifier * mediaServerIdentifier; 
@property (nonatomic,copy,readonly) TVHKMediaLibrarySessionState * sessionState; 
@property (nonatomic,readonly) TVHKMediaLibraryRequestSession * requestSession; 
@property (nonatomic,copy) TVHKMediaServerVersion * serverVersion; 
@property (assign,nonatomic) unsigned long long databaseID; 
@property (assign,nonatomic) unsigned long long basePlaylistID; 
@property (assign,nonatomic) unsigned long long currentServerRevision; 
@required
-(TVHKMediaLibrarySessionState *)sessionState;
-(void)setDatabaseID:(unsigned long long)arg1;
-(unsigned long long)databaseID;
-(TVHKMediaServerVersion *)serverVersion;
-(void)setServerVersion:(id)arg1;
-(TVHKMediaServerIdentifier *)mediaServerIdentifier;
-(TVHKMediaLibraryRequestSession *)requestSession;
-(unsigned long long)basePlaylistID;
-(void)setBasePlaylistID:(unsigned long long)arg1;
-(unsigned long long)currentServerRevision;
-(void)setCurrentServerRevision:(unsigned long long)arg1;

@end


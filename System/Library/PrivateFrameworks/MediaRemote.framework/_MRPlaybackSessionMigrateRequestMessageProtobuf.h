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

@class _MRPlaybackSessionProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionMigrateRequestProtobuf;

@interface _MRPlaybackSessionMigrateRequestMessageProtobuf : PBCodable <NSCopying> {

	_MRPlaybackSessionProtobuf* _playbackSession;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	_MRPlaybackSessionMigrateRequestProtobuf* _request;

}

@property (nonatomic,readonly) BOOL hasPlaybackSession; 
@property (nonatomic,retain) _MRPlaybackSessionProtobuf * playbackSession;                    //@synthesize playbackSession=_playbackSession - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) _MRPlaybackSessionMigrateRequestProtobuf * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                    //@synthesize playerPath=_playerPath - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(_MRPlaybackSessionMigrateRequestProtobuf *)request;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequest:(_MRPlaybackSessionMigrateRequestProtobuf *)arg1 ;
-(BOOL)hasRequest;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(BOOL)hasPlayerPath;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(_MRPlaybackSessionProtobuf *)playbackSession;
-(void)setPlaybackSession:(_MRPlaybackSessionProtobuf *)arg1 ;
-(BOOL)hasPlaybackSession;
@end


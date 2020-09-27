/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRNowPlayingInfoProtobuf, _MRPlaybackQueueProtobuf, _MRPlaybackQueueCapabilitiesProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueRequestProtobuf, _MRSupportedCommandsProtobuf;

@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying> {

	double _playbackStateTimestamp;
	NSString* _displayID;
	NSString* _displayName;
	_MRNowPlayingInfoProtobuf* _nowPlayingInfo;
	_MRPlaybackQueueProtobuf* _playbackQueue;
	_MRPlaybackQueueCapabilitiesProtobuf* _playbackQueueCapabilities;
	int _playbackState;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	_MRPlaybackQueueRequestProtobuf* _request;
	_MRSupportedCommandsProtobuf* _supportedCommands;
	SCD_Struct_MR2 _has;

}

@property (nonatomic,readonly) BOOL hasNowPlayingInfo; 
@property (nonatomic,retain) _MRNowPlayingInfoProtobuf * nowPlayingInfo;                                    //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportedCommands; 
@property (nonatomic,retain) _MRSupportedCommandsProtobuf * supportedCommands;                              //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueue; 
@property (nonatomic,retain) _MRPlaybackQueueProtobuf * playbackQueue;                                      //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayID; 
@property (nonatomic,retain) NSString * displayID;                                                          //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                                                        //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackState; 
@property (assign,nonatomic) int playbackState;                                                             //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueueCapabilities; 
@property (nonatomic,retain) _MRPlaybackQueueCapabilitiesProtobuf * playbackQueueCapabilities;              //@synthesize playbackQueueCapabilities=_playbackQueueCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                                  //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) _MRPlaybackQueueRequestProtobuf * request;                                     //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackStateTimestamp; 
@property (assign,nonatomic) double playbackStateTimestamp;                                                 //@synthesize playbackStateTimestamp=_playbackStateTimestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(_MRPlaybackQueueRequestProtobuf *)request;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)displayID;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setRequest:(_MRPlaybackQueueRequestProtobuf *)arg1 ;
-(BOOL)hasRequest;
-(BOOL)hasDisplayName;
-(_MRNowPlayingInfoProtobuf *)nowPlayingInfo;
-(void)setNowPlayingInfo:(_MRNowPlayingInfoProtobuf *)arg1 ;
-(BOOL)hasNowPlayingInfo;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(BOOL)hasPlayerPath;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(_MRSupportedCommandsProtobuf *)supportedCommands;
-(void)setSupportedCommands:(_MRSupportedCommandsProtobuf *)arg1 ;
-(_MRPlaybackQueueProtobuf *)playbackQueue;
-(void)setDisplayID:(NSString *)arg1 ;
-(void)setPlaybackQueue:(_MRPlaybackQueueProtobuf *)arg1 ;
-(void)setPlaybackQueueCapabilities:(_MRPlaybackQueueCapabilitiesProtobuf *)arg1 ;
-(BOOL)hasSupportedCommands;
-(BOOL)hasPlaybackQueue;
-(BOOL)hasDisplayID;
-(int)playbackState;
-(void)setPlaybackState:(int)arg1 ;
-(void)setHasPlaybackState:(BOOL)arg1 ;
-(BOOL)hasPlaybackState;
-(id)playbackStateAsString:(int)arg1 ;
-(int)StringAsPlaybackState:(id)arg1 ;
-(BOOL)hasPlaybackQueueCapabilities;
-(void)setPlaybackStateTimestamp:(double)arg1 ;
-(void)setHasPlaybackStateTimestamp:(BOOL)arg1 ;
-(BOOL)hasPlaybackStateTimestamp;
-(_MRPlaybackQueueCapabilitiesProtobuf *)playbackQueueCapabilities;
-(double)playbackStateTimestamp;
@end


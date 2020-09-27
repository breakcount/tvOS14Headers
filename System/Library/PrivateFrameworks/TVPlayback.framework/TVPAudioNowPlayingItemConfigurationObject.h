/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TVImageProxy;

@interface TVPAudioNowPlayingItemConfigurationObject : NSObject {

	BOOL _shuffleEnabled;
	BOOL _repeating;
	BOOL _streaming;
	BOOL _explicit;
	NSString* _trackTitle;
	NSString* _artistName;
	NSString* _albumTitle;
	NSString* _radioStationAttribution;
	NSString* _radioStationName;
	NSString* _artworkIdentifier;
	TVImageProxy* _artworkProxy;
	unsigned long long _trackNumber;
	unsigned long long _playlistTrackCount;
	double _duration;

}

@property (nonatomic,copy) NSString * trackTitle;                                //@synthesize trackTitle=_trackTitle - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * albumTitle;                                //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,copy) NSString * radioStationAttribution;                   //@synthesize radioStationAttribution=_radioStationAttribution - In the implementation block
@property (nonatomic,copy) NSString * radioStationName;                          //@synthesize radioStationName=_radioStationName - In the implementation block
@property (nonatomic,copy) NSString * artworkIdentifier;                         //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,retain) TVImageProxy * artworkProxy;                        //@synthesize artworkProxy=_artworkProxy - In the implementation block
@property (assign,nonatomic) unsigned long long trackNumber;                     //@synthesize trackNumber=_trackNumber - In the implementation block
@property (assign,nonatomic) unsigned long long playlistTrackCount;              //@synthesize playlistTrackCount=_playlistTrackCount - In the implementation block
@property (assign,nonatomic) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL shuffleEnabled;                                //@synthesize shuffleEnabled=_shuffleEnabled - In the implementation block
@property (assign,nonatomic) BOOL repeating;                                     //@synthesize repeating=_repeating - In the implementation block
@property (assign,nonatomic) BOOL streaming;                                     //@synthesize streaming=_streaming - In the implementation block
@property (assign,nonatomic) BOOL explicit;                                      //@synthesize explicit=_explicit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setRepeating:(BOOL)arg1 ;
-(BOOL)repeating;
-(void)setRadioStationName:(NSString *)arg1 ;
-(NSString *)radioStationName;
-(unsigned long long)trackNumber;
-(NSString *)artworkIdentifier;
-(void)setTrackNumber:(unsigned long long)arg1 ;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(BOOL)explicit;
-(void)setExplicit:(BOOL)arg1 ;
-(BOOL)streaming;
-(void)setStreaming:(BOOL)arg1 ;
-(BOOL)shuffleEnabled;
-(void)setShuffleEnabled:(BOOL)arg1 ;
-(NSString *)albumTitle;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(NSString *)trackTitle;
-(void)setTrackTitle:(NSString *)arg1 ;
-(TVImageProxy *)artworkProxy;
-(void)setArtworkProxy:(TVImageProxy *)arg1 ;
-(unsigned long long)playlistTrackCount;
-(void)setPlaylistTrackCount:(unsigned long long)arg1 ;
-(void)setRadioStationAttribution:(NSString *)arg1 ;
-(NSString *)radioStationAttribution;
-(BOOL)_isStringEqual:(id)arg1 rhsString:(id)arg2 ;
@end


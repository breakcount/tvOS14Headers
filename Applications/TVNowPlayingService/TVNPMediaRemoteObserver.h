//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVNPMetadataPlayerCommandDelegate-Protocol.h"

@class NSDictionary, NSString, TVNPDataImageLoader, TVNPEndpointRouteConnection, TVNPMetadataPlayer;
@protocol NSCopying;

@interface TVNPMediaRemoteObserver : NSObject <TVNPMetadataPlayerCommandDelegate>
{
    _Bool _isObserving;	// 8 = 0x8
    _Bool _airtunesIsPlaying;	// 9 = 0x9
    NSDictionary *_airtunesTimeData;	// 16 = 0x10
    NSString *_lastTrackIdentifier;	// 24 = 0x18
    TVNPDataImageLoader *_imageLoader;	// 32 = 0x20
    TVNPEndpointRouteConnection *_routeConnection;	// 40 = 0x28
    id <NSCopying> _routeConnectionObserverToken;	// 48 = 0x30
    TVNPMetadataPlayer *_player;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010002150c
@property(retain, nonatomic) TVNPMetadataPlayer *player; // @synthesize player=_player;
- (void)_updateTimeStampFromAirtunesd:(id)arg1;	// IMP=0x0000000100021468
- (void)_updateMediaItemMetadata:(id)arg1 routeConnection:(id)arg2;	// IMP=0x0000000100020ea0
- (void)_deregisterAsObserver;	// IMP=0x0000000100020e34
- (void)_registerAsObserver;	// IMP=0x0000000100020dbc
- (void)_nowPlayingInfoDidChange:(id)arg1;	// IMP=0x0000000100020910
- (void)metadataPlayerSentCommand:(unsigned int)arg1 withOptions:(id)arg2;	// IMP=0x0000000100020900
- (void)reset;	// IMP=0x0000000100020848
- (void)prepareForPlaybackWithEndpoint:(id)arg1;	// IMP=0x00000001000205a4
- (void)prepareForPlayback;	// IMP=0x000000010002054c
- (id)init;	// IMP=0x00000001000204e8

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TVHKMediaEntityIdentifier, TVHKMediaServerIdentifier;

@interface TVHURL : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    unsigned long long _action;	// 16 = 0x10
    unsigned long long _displayType;	// 24 = 0x18
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 32 = 0x20
    TVHKMediaEntityIdentifier *_mediaItemIdentifier;	// 40 = 0x28
    unsigned long long _mediaItemType;	// 48 = 0x30
    unsigned long long _mediaCategoryType;	// 56 = 0x38
    NSString *_mediaItemTitle;	// 64 = 0x40
    TVHKMediaEntityIdentifier *_albumIdentifier;	// 72 = 0x48
    NSString *_albumTitle;	// 80 = 0x50
    TVHKMediaEntityIdentifier *_albumArtistIdentifier;	// 88 = 0x58
    NSString *_albumArtistTitle;	// 96 = 0x60
    TVHKMediaEntityIdentifier *_seasonIdentifier;	// 104 = 0x68
    NSString *_showTitle;	// 112 = 0x70
}

+ (id)_mediaEntityIdentifierFromString:(id)arg1;	// IMP=0x00000001000aa948
+ (id)_mediaServerIdentifierFromString:(id)arg1;	// IMP=0x00000001000aa8b4
+ (unsigned long long)_mediaItemTypeFromString:(id)arg1;	// IMP=0x00000001000aa804
+ (unsigned long long)_mediaCategoryTypeFromString:(id)arg1;	// IMP=0x00000001000aa754
+ (unsigned long long)_displayTypeFromString:(id)arg1;	// IMP=0x00000001000aa6d8
+ (id)_displayTypeStringFromDisplayType:(unsigned long long)arg1;	// IMP=0x00000001000aa694
+ (unsigned long long)_actionFromString:(id)arg1;	// IMP=0x00000001000aa5f4
+ (id)_actionStringFromAction:(unsigned long long)arg1;	// IMP=0x00000001000aa5bc
+ (id)URLFromURL:(id)arg1;	// IMP=0x00000001000a94e4
+ (id)new;	// IMP=0x00000001000a94a8
- (void).cxx_destruct;	// IMP=0x00000001000aaa64
@property(copy, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
@property(copy, nonatomic) TVHKMediaEntityIdentifier *seasonIdentifier; // @synthesize seasonIdentifier=_seasonIdentifier;
@property(copy, nonatomic) NSString *albumArtistTitle; // @synthesize albumArtistTitle=_albumArtistTitle;
@property(copy, nonatomic) TVHKMediaEntityIdentifier *albumArtistIdentifier; // @synthesize albumArtistIdentifier=_albumArtistIdentifier;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(copy, nonatomic) TVHKMediaEntityIdentifier *albumIdentifier; // @synthesize albumIdentifier=_albumIdentifier;
@property(copy, nonatomic) NSString *mediaItemTitle; // @synthesize mediaItemTitle=_mediaItemTitle;
@property(nonatomic) unsigned long long mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(nonatomic) unsigned long long mediaItemType; // @synthesize mediaItemType=_mediaItemType;
@property(copy, nonatomic) TVHKMediaEntityIdentifier *mediaItemIdentifier; // @synthesize mediaItemIdentifier=_mediaItemIdentifier;
@property(copy, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)description;	// IMP=0x00000001000a9f24
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000a9df4
- (unsigned long long)hash;	// IMP=0x00000001000a9da8
@property(readonly, nonatomic) _Bool browsesMediaLibrary;
@property(readonly, nonatomic) _Bool requiresMediaLibrary;
- (id)_initWithURL:(id)arg1 action:(unsigned long long)arg2;	// IMP=0x00000001000a9cc8
- (id)init;	// IMP=0x00000001000a9c40

@end


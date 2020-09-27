/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, NSNumber, MPPlaybackArchive;

@interface HMDMPCSessionData : HMFObject {

	NSSet* _mediaProfiles;
	NSNumber* _playbackStateNumber;
	NSNumber* _playbackVolumeNumber;
	MPPlaybackArchive* _playbackArchive;
	NSNumber* _source;

}

@property (nonatomic,copy,readonly) NSSet * mediaProfiles;                        //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * playbackStateNumber;               //@synthesize playbackStateNumber=_playbackStateNumber - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * playbackVolumeNumber;              //@synthesize playbackVolumeNumber=_playbackVolumeNumber - In the implementation block
@property (nonatomic,readonly) MPPlaybackArchive * playbackArchive;               //@synthesize playbackArchive=_playbackArchive - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * source;                            //@synthesize source=_source - In the implementation block
-(NSNumber *)source;
-(MPPlaybackArchive *)playbackArchive;
-(NSSet *)mediaProfiles;
-(id)initWithMediaAction:(id)arg1 source:(id)arg2 ;
-(id)dictionaryRepresentation:(BOOL)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 profileSource:(id)arg2 ;
-(NSNumber *)playbackStateNumber;
-(id)initWithMediaProfiles:(id)arg1 playbackState:(id)arg2 playbackVolume:(id)arg3 playbackArchive:(id)arg4 source:(id)arg5 ;
-(NSNumber *)playbackVolumeNumber;
@end


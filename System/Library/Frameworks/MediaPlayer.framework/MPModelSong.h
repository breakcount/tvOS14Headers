/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>

@class NSString, MPModelAlbum, MPModelArtist, MPModelGenre, MPModelComposer, MPModelFileAsset, MPModelHomeSharingAsset, MPModelPlaybackPosition, MPModelStoreAsset, MPModelLyrics, NSDate, MPGaplessInfo;

@interface MPModelSong : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) MPModelAlbum * album; 
@property (nonatomic,retain) MPModelArtist * artist; 
@property (nonatomic,retain) MPModelGenre * genre; 
@property (nonatomic,retain) MPModelComposer * composer; 
@property (nonatomic,copy) NSString * grouping; 
@property (nonatomic,retain) MPModelFileAsset * localFileAsset; 
@property (nonatomic,retain) MPModelHomeSharingAsset * homeSharingAsset; 
@property (nonatomic,retain) MPModelPlaybackPosition * playbackPosition; 
@property (nonatomic,retain) MPModelStoreAsset * storeAsset; 
@property (nonatomic,copy) NSString * copyrightText; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) long long trackNumber; 
@property (assign,nonatomic) long long discNumber; 
@property (assign,nonatomic) long long playCount; 
@property (assign,nonatomic) long long skipCount; 
@property (assign,getter=isExplicitSong,nonatomic) BOOL explicitSong; 
@property (assign,getter=isArtistUploadedContent,nonatomic) BOOL artistUploadedContent; 
@property (assign,nonatomic) BOOL hasVideo; 
@property (assign,nonatomic) long long beatsPerMinute; 
@property (nonatomic,retain) MPModelLyrics * lyrics; 
@property (assign,nonatomic) BOOL shouldShowComposer; 
@property (assign,nonatomic) float volumeNormalization; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (assign,nonatomic) BOOL hasCloudSyncSource; 
@property (assign,getter=isLibraryAdded,nonatomic) BOOL libraryAdded; 
@property (nonatomic,copy) NSDate * libraryAddedDate; 
@property (assign,getter=isLibraryAddEligible,nonatomic) BOOL libraryAddEligible; 
@property (assign,nonatomic) long long keepLocalEnableState; 
@property (assign,nonatomic) long long keepLocalManagedStatus; 
@property (assign,nonatomic) long long year; 
@property (assign,nonatomic) float userRating; 
@property (nonatomic,retain) MPGaplessInfo * gaplessInfo; 
@property (assign,nonatomic) float volumeAdjustment; 
@property (nonatomic,copy) NSString * classicalWork; 
@property (nonatomic,copy) NSString * classicalMovement; 
@property (assign,nonatomic) long long classicalMovementCount; 
@property (assign,nonatomic) long long classicalMovementNumber; 
@property (assign,nonatomic) long long trackCount; 
@property (nonatomic,copy,readonly) NSDate * downloadedDate; 
@property (nonatomic,copy,readonly) NSDate * lastDevicePlaybackDate; 
+(id)kindWithVariants:(unsigned long long)arg1 ;
+(id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
+(id)__title_KEY;
+(id)__album_KEY;
+(id)__artist_KEY;
+(id)__genre_KEY;
+(id)__composer_KEY;
+(id)__grouping_KEY;
+(id)__copyrightText_KEY;
+(id)__duration_KEY;
+(id)__trackCount_KEY;
+(id)__trackNumber_KEY;
+(id)__discNumber_KEY;
+(id)__playCount_KEY;
+(id)__skipCount_KEY;
+(id)__explicitSong_KEY;
+(id)__artistUploadedContent_KEY;
+(id)__hasVideo_KEY;
+(id)__beatsPerMinute_KEY;
+(id)__lyrics_KEY;
+(id)__shouldShowComposer_KEY;
+(id)__volumeNormalization_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__localFileAsset_KEY;
+(id)__keepLocalEnableState_KEY;
+(id)__keepLocalManagedStatus_KEY;
+(id)__libraryAdded_KEY;
+(id)__libraryAddedDate_KEY;
+(id)__lastDevicePlaybackDate_KEY;
+(id)__libraryAddEligible_KEY;
+(id)__hasCloudSyncSource_KEY;
+(id)__classicalWork_KEY;
+(id)__classicalMovement_KEY;
+(id)__classicalMovementCount_KEY;
+(id)__classicalMovementNumber_KEY;
+(id)__year_KEY;
+(id)__homeSharingAsset_KEY;
+(id)__storeAsset_KEY;
+(id)__userRating_KEY;
+(id)__gaplessInfo_KEY;
+(id)__volumeAdjustment_KEY;
+(id)__playbackPosition_KEY;
+(id)__downloadedDate_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(id)requiredKeepLocalStatusObservationProperties;
+(BOOL)supportsKeepLocalStatusObservation;
-(id)humanDescription;
-(id)artworkCatalog;
-(id)mediaItemPropertyValues;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
@end


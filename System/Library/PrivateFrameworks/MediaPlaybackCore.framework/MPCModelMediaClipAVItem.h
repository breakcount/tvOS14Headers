/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>
#import <libobjc.A.dylib/MPRTCReportingItemSessionCreating.h>

@class MPModelGenericObject, MPModelMediaClip, NSString;

@interface MPCModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating> {

	MPModelGenericObject* _modelGenericObject;
	MPModelMediaClip* _mediaClip;

}

@property (nonatomic,readonly) MPModelMediaClip * mediaClip;                               //@synthesize mediaClip=_mediaClip - In the implementation block
@property (nonatomic,readonly) id rtcReportingParentHierarchyToken; 
@property (nonatomic,copy,readonly) NSString * rtcReportingServiceIdentifier; 
@property (nonatomic,readonly) long long rtcReportingAssetType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredMediaClipProperties;
-(NSString *)description;
-(BOOL)isStreamable;
-(BOOL)allowsExternalPlayback;
-(void)loadAssetAndPlayerItem;
-(void)notePlaybackFinishedByHittingEnd;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isAssetURLValid;
-(id)mainTitle;
-(double)durationFromExternalMetadata;
-(void)_applyLoudnessInfo;
-(void)reevaluateType;
-(id)rtcReportingParentHierarchyToken;
-(BOOL)prefersSeekOverSkip;
-(id)modelGenericObject;
-(BOOL)allowsAirPlayFromCloud;
-(/*^block*/id)artworkCatalogBlock;
-(MPModelMediaClip *)mediaClip;
-(NSString *)rtcReportingServiceIdentifier;
-(long long)rtcReportingAssetType;
-(BOOL)_allowsCellularPlayback;
-(id)_currentPreferredStaticAsset;
-(BOOL)_isVideoAsset;
-(id)initWithMediaClip:(id)arg1 ;
@end


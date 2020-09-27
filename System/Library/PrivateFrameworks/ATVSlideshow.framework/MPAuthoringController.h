/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MPDocument, NSRecursiveLock, NSMutableDictionary, NSLock, MPWeighter;

@interface MPAuthoringController : NSObject {

	BOOL _isAuthoring;
	MPDocument* _authoredDocument;
	unsigned long long _seed;
	NSRecursiveLock* _beatLock;
	NSMutableDictionary* _cachedROIInformation;
	NSLock* _cachedROILock;
	MPWeighter* _weighter;
	MPWeighter* _transitionWeighter;
	MPWeighter* _shuffleWeighter;
	NSMutableDictionary* _stats;
	id _delegate;
	long long _logLevel;
	double _logTiming;
	double _placesDistanceSeperation;
	BOOL _placesDebug;
	BOOL _cancelAuthoring;
	BOOL _skipApplyingSettings;

}
+(id)sharedController;
+(void)releaseSharedController;
+(id)transitionAnimatedSetsBetween:(id)arg1 and:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)cleanup;
-(void)cleanup:(BOOL)arg1 ;
-(unsigned long long)authorLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)startLogging;
-(void)setAuthoredDocument:(id)arg1 ;
-(id)shuffleImagesByRating:(id)arg1 withOptions:(id)arg2 ;
-(void)clearROICache;
-(void)cacheROIInformationForImages:(id)arg1 withOptions:(id)arg2 ;
-(id)createAudioPlayListFromAudioPaths:(id)arg1 andOptions:(id)arg2 ;
-(void)createBeatsThreaded:(id)arg1 ;
-(void)authorPlacesWithImages:(id)arg1 forLayerGroup:(id)arg2 inDocument:(id)arg3 withOptions:(id)arg4 ;
-(void)setupClustersWithPaths:(id)arg1 withOptions:(id)arg2 ;
-(id)orderImages:(id)arg1 withOptions:(id)arg2 ;
-(id)slidesWithImages:(id)arg1 andOptions:(id)arg2 ;
-(id)dynamicLayerWithImages:(id)arg1 withOptions:(id)arg2 ;
-(id)effectAuthoredLayerWithImages:(id)arg1 withOptions:(id)arg2 ;
-(id)effectsForImages:(id)arg1 withOptions:(id)arg2 ;
-(id)createLayerWithImages:(id)arg1 effects:(id)arg2 andOptions:(id)arg3 ;
-(void)checkForOffsetsForLayers:(id)arg1 withOptions:(id)arg2 ;
-(void)scaleDurationsInLayer:(id)arg1 withOptions:(id)arg2 ;
-(id)beatsForAudioPlaylist:(id)arg1 withOptions:(id)arg2 ;
-(void)beatAlignLayer:(id)arg1 toBeats:(id)arg2 withOptions:(id)arg3 ;
-(void)performInitialFaceDetectionInGroup:(id)arg1 withOptions:(id)arg2 ;
-(void)configureBreakInformationToEffect:(id)arg1 inDocument:(id)arg2 startingIndex:(long long)arg3 count:(long long)arg4 removeOldIndex:(long long)arg5 ;
-(void)createAnimatedSetsInLayer:(id)arg1 withOptions:(id)arg2 ;
-(void)addStyledCaptionToSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)configureFiltersInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)configureTransitionsInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)scaleDurationsInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)matchDurationsForLayers:(id)arg1 withOptions:(id)arg2 ;
-(void)fillDurationsForLayers:(id)arg1 withOptions:(id)arg2 ;
-(void)reconfigureColorSchemeForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)configureIntroInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)configureOutroInDocument:(id)arg1 withOptions:(id)arg2 ;
-(id)_collectVersionInformationFromStyle:(id)arg1 ;
-(void)finishLogging;
-(void)upgradeLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(id)effectContainersWithImages:(id)arg1 effects:(id)arg2 andOptions:(id)arg3 ;
-(void)scaleDurationsInEffectContainers:(id)arg1 withOptions:(id)arg2 ;
-(id)transitionFromOptions:(id)arg1 firstEffectContainer:(id)arg2 nextEffectContainer:(id)arg3 ;
-(void)scaleDurationsForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)scaleDurationsInPlacesForDocument:(id)arg1 withOptions:(id)arg2 ;
-(unsigned long long)authorDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)_reorderImagesInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)reconfigureTitleEffectForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)setTitleTextToColor:(CGColorRef)arg1 forLayerGroup:(id)arg2 inDocument:(id)arg3 withOptions:(id)arg4 ;
-(id)exportTransitionFromOptions:(id)arg1 ;
-(id)loopTransitionFromOptions:(id)arg1 ;
-(BOOL)canLayerGroupFitToAudio:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 requiredAudioDuration:(double*)arg4 ;
-(BOOL)canDocumentFitToAudio:(id)arg1 withOptions:(id)arg2 requiredAudioDuration:(double*)arg3 ;
-(void)upgradeDocument:(id)arg1 withOptions:(id)arg2 ;
-(id)effectContainersWithPaths:(id)arg1 forDocument:(id)arg2 withOptions:(id)arg3 ;
-(id)transitionFromOptions:(id)arg1 ;
-(void)beatAlignLayers:(id)arg1 toAudioPlaylist:(id)arg2 forDocument:(id)arg3 withOptions:(id)arg4 ;
-(void)reconfigureImagesInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)reconfigureTitleEffectInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)reconfigureColorSchemeInDocument:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)prepareDocumentForExport:(id)arg1 withOptions:(id)arg2 ;
-(void)prepareDocumentForPlayback:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)canScaleToAudioInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)cleanupClusters;
-(id)createLayersForPlacesForImages:(id)arg1 forDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)findUsableClustersForUserDefinedSlideOrderPresentation:(id)arg1 inClusters:(id)arg2 ;
-(id)findEffectIDInPresetArray:(id)arg1 forImages:(id)arg2 withOptions:(id)arg3 ;
-(void)populateWeighter:(id)arg1 withEffects:(id)arg2 andOptions:(id)arg3 ;
-(id)findEffectIDInWeighter:(id)arg1 images:(id)arg2 startingIndex:(long long)arg3 count:(long long)arg4 triesToFind:(long long*)arg5 constraints:(id)arg6 previousTags:(id)arg7 ;
-(long long)bestCountFromClusterForEffectWithImages:(id)arg1 atStartIndex:(long long)arg2 withWeighter:(id)arg3 usedIndex:(long long*)arg4 ;
-(BOOL)imagesHaveMovie:(id)arg1 start:(long long)arg2 count:(long long)arg3 ;
-(BOOL)determineIfSlideDisplayesForTheWholeDurationForEffect:(id)arg1 presetID:(id)arg2 atIndex:(long long)arg3 inStyleID:(id)arg4 ;
-(void)scaleLayerToMatchAudio:(id)arg1 withOptions:(id)arg2 ;
-(void)beatAlignEffectContainers:(id)arg1 toBeats:(id)arg2 withOptions:(id)arg3 ;
-(void)scaleLayerToMatchAudio:(id)arg1 withBeats:(id)arg2 withOptions:(id)arg3 ;
-(double)findClosestBeatForTime:(double)arg1 inBeats:(id)arg2 atIndex:(long long*)arg3 ;
-(id)filtersForSlideFromOptions:(id)arg1 ;
-(id)filtersForLayerFromOptions:(id)arg1 ;
-(id)frameFromOptions:(id)arg1 ;
-(id)filtersForEffectFromOptions:(id)arg1 ;
-(id)createEffectToTransitionMapWithOptions:(id)arg1 ;
-(void)populateWeighter:(id)arg1 withTransitions:(id)arg2 andOptions:(id)arg3 ;
-(id)sortImagePaths:(id)arg1 toAspectRatiosInEffectPresetID:(id)arg2 withOptions:(id)arg3 ;
-(id)pickRandomPathsInArray:(id)arg1 excludingPaths:(id)arg2 count:(long long)arg3 ;
-(void)setTitleTextToColor:(CGColorRef)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(BOOL)isAuthoring;
-(id)authoredDocument;
-(void)createAnimatedSetsInLayer2:(id)arg1 withOptions:(id)arg2 ;
-(long long)indexOfBeatWithTimestamp:(double)arg1 inBeats:(id)arg2 inRange:(NSRange)arg3 ;
-(id)_grabAndRemoveTitleEffectFromDocument:(id)arg1 withOptions:(id)arg2 ;
-(long long)_numberOfSlidesForOutroInLayer:(id)arg1 withOptions:(id)arg2 ;
-(void)_readdTitleEffect:(id)arg1 toDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)removeSlidesAtIndicies:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)insertVideoPaths:(id)arg1 atIndex:(long long)arg2 inDocument:(id)arg3 withOptions:(id)arg4 ;
-(void)removeStyledCaptionFromSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(id)_addVideoPaths:(id)arg1 toEndOfLayer:(id)arg2 inDocument:(id)arg3 withOptions:(id)arg4 ;
-(void)_checkForEmptyLayersInDocument:(id)arg1 ;
-(void)combineEffectsNearSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)moveSlidesFromIndicies:(id)arg1 toIndex:(long long)arg2 inDocument:(id)arg3 withOptions:(id)arg4 ;
-(void)combineSlides:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(long long)_countOfEmptyContainersInIntroOfLayer:(id)arg1 withOptions:(id)arg2 ;
-(id)_mapsSortedByCity:(id)arg1 hasCities:(BOOL*)arg2 ;
-(id)_mapsSortedByState:(id)arg1 ;
-(void)_gatherLocationInfoForMaps:(id)arg1 ;
-(BOOL)_tryAndCollapseMaps:(id)arg1 ;
-(void)_renameMapsAndPins:(id)arg1 withOptions:(id)arg2 ;
-(id)_createMapsWithImages:(id)arg1 withOptions:(id)arg2 ;
-(id)_placeEffectContainersForPhotos:(id)arg1 options:(id)arg2 ;
-(long long)mapTypeForPoint0:(CGPoint)arg1 point1:(CGPoint)arg2 point2:(CGPoint)arg3 map:(id)arg4 flight:(id)arg5 ;
-(long long)tileSetForMap1:(long long)arg1 map2:(long long)arg2 needsWater:(BOOL)arg3 ;
-(BOOL)rect:(CGRect)arg1 intersectsRects:(id)arg2 index:(long long*)arg3 ;
-(void)removeAllMapsInDocument:(id)arg1 ;
-(void)recreateMapsInDocument:(id)arg1 ;
@end


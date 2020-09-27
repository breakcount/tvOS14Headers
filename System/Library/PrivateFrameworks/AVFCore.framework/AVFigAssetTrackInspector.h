/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrackInspector.h>

@protocol OS_dispatch_queue;
@class AVDispatchOnce, NSObject, NSMutableArray, AVWeakReference;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {

	OpaqueFigAssetRef _figAsset;
	OpaqueFigAssetTrackRef _figAssetTrack;
	AVDispatchOnce* _copyFigFormatReaderOnce;
	OpaqueFigFormatReaderRef _figFormatReader;
	AVDispatchOnce* _copyFigTrackReaderOnce;
	OpaqueFigTrackReaderRef _figTrackReader;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSObject*<OS_dispatch_queue> _completionHandlerQueue;
	NSMutableArray* _loadingBatches;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(id)languageCode;
-(BOOL)isEnabled;
-(BOOL)hasProtectedContent;
-(long long)layer;
-(SCD_Struct_AV7)timeRange;
-(int)trackID;
-(id)segments;
-(id)mediaType;
-(CGSize)dimensions;
-(id)asset;
-(id)formatDescriptions;
-(id)commonMetadata;
-(id)extendedLanguageTag;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGAffineTransform)preferredTransform;
-(CGSize)naturalSize;
-(long long)totalSampleDataLength;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPlayable;
-(BOOL)isDecodable;
-(float)nominalFrameRate;
-(id)metadataForFormat:(id)arg1 ;
-(id)availableMetadataFormats;
-(float)preferredVolume;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(int)naturalTimeScale;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(int)playabilityValidationResult;
-(BOOL)isSelfContained;
-(SCD_Struct_AV7)mediaPresentationTimeRange;
-(SCD_Struct_AV7)mediaDecodeTimeRange;
-(SCD_Struct_AV6)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(BOOL)requiresFrameReordering;
-(float)estimatedDataRate;
-(float)peakDataRate;
-(id)loudnessInfo;
-(SCD_Struct_AV6)minSampleDuration;
-(id)segmentForTrackTime:(SCD_Struct_AV6)arg1 ;
-(BOOL)segmentsExcludeAudioPrimingAndRemainderDurations;
-(SCD_Struct_AV7)gaplessSourceTimeRange;
-(id)segmentsAsPresented;
-(long long)alternateGroupID;
-(long long)defaultAlternateGroupID;
-(long long)provisionalAlternateGroupID;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(id)_trackReferences;
-(BOOL)hasAudibleBooksContent;
-(BOOL)isAudibleBooksContentAuthorized;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(id)_loadingBatches;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg1 ;
-(unsigned)_figMediaType;
-(int)decodabilityValidationResult;
-(void)_addFigNotifications;
-(void)_removeFigNotifications;
-(long long)_loadStatusForFigAssetTrackProperty:(id)arg1 error:(id*)arg2 ;
-(OpaqueFigFormatReaderRef)_figFormatReader;
-(id)_segmentsForProperty:(CFStringRef)arg1 ;
@end


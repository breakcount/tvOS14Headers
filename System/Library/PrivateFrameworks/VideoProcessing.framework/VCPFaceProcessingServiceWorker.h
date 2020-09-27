/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHPhotoLibrary, PVContext, PVClusterer, VCPPhotosPersistenceDelegate, NSURL;

@interface VCPFaceProcessingServiceWorker : NSObject {

	PHPhotoLibrary* _photoLibrary;
	PVContext* _context;
	PVClusterer* _clusterer;
	VCPPhotosPersistenceDelegate* _persistenceDelegate;
	NSURL* _suggestionLoggingDirectory;
	BOOL _suggestionLoggingSessionOpen;
	BOOL _suggestionsLoggingEnabled;

}
+(id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg1 ;
+(id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1 ;
+(id)workerWithPhotoLibrary:(id)arg1 andContext:(id)arg2 ;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)resetFaceClusteringStateWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)validateClusterCacheWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)personPromoterStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2 ;
-(void)_appendToSuggestionsLog:(id)arg1 ;
-(void)_closeSuggestionsLoggingSession;
-(void)_startAndSyncClusterCacheWithLibrary:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)_openSuggestionsLoggingSession;
-(void)_logFaceToSuggestionsLog:(id)arg1 ;
-(id)_suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 cancel:(/*^block*/id)arg4 context:(id)arg5 error:(id*)arg6 ;
-(void)_finalizeSuggestionsLog;
-(id)_suggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 cancel:(/*^block*/id)arg4 error:(id*)arg5 ;
-(BOOL)_deleteAllVerifiedPersonsWithError:(id*)arg1 ;
-(void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg1 ;
-(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 cancel:(/*^block*/id)arg6 ;
-(void)resetPersonsModelWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)reclusterFacesWithContext:(id)arg1 reply:(/*^block*/id)arg2 extendTimeout:(/*^block*/id)arg3 cancel:(/*^block*/id)arg4 ;
-(void)rebuildPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2 extendTimeout:(/*^block*/id)arg3 cancel:(/*^block*/id)arg4 ;
@end


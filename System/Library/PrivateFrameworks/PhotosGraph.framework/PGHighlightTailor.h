/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject, PGMoodGenerationContext, PGManager, NSArray, NSSet;

@interface PGHighlightTailor : NSObject {

	NSObject*<OS_dispatch_group> _enrichmentCommitGroup;
	PGMoodGenerationContext* _moodGenerationContext;
	PGManager* _manager;
	NSArray* _enrichmentProfiles;
	NSSet* _verifiedPersonLocalIdentifiers;

}

@property (nonatomic,retain) PGManager * manager;                         //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSArray * enrichmentProfiles;                //@synthesize enrichmentProfiles=_enrichmentProfiles - In the implementation block
@property (readonly) NSSet * verifiedPersonLocalIdentifiers;              //@synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers - In the implementation block
+(BOOL)itemScoreIsAutoplayable:(double)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(PGManager *)manager;
-(void)setManager:(PGManager *)arg1 ;
-(id)assetSortDescriptors;
-(NSSet *)verifiedPersonLocalIdentifiers;
-(id)initForTesting;
-(double)highlightVisibilityWeightForItem:(id)arg1 ;
-(id)computeChangedVisibilityScoresForItems:(id)arg1 ;
-(id)enrichmentValuesForHighlight:(id)arg1 usingEnrichmentProfile:(id)arg2 options:(unsigned long long)arg3 reportChangedValuesOnly:(BOOL)arg4 progressBlock:(/*^block*/id)arg5 ;
-(void)writeHighlightEnrichmentValues:(id)arg1 toChangeRequest:(id)arg2 ;
-(id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)enrichHighlights:(id)arg1 options:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(BOOL)enrichAllHighlightsWithOptions:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)enrichDayHighlights:(id)arg1 dayGroupHighlights:(id)arg2 withOptions:(unsigned long long)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)bestEnrichmentProfileForHighlight:(id)arg1 options:(unsigned long long)arg2 ;
-(id)keyAssetFromHighlight:(id)arg1 ;
-(id)sortedCurationOfType:(unsigned short)arg1 fromHighlight:(id)arg2 ;
-(NSArray *)enrichmentProfiles;
-(void)setEnrichmentProfiles:(NSArray *)arg1 ;
@end


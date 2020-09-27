/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Project, MiroBlueprint, NSMutableArray, MiroAutoEditKenBurnsController, NSMutableDictionary, NSDictionary;

@interface MiroAutoEditTransitionController : NSObject {

	BOOL _memoryTypeDisablesCropping;
	BOOL _memoryFeaturesPeople;
	int _numberOfPotentialTransitionPoints;
	Project* _project;
	MiroBlueprint* _activeBlueprint;
	NSMutableArray* _layoutClips;
	unsigned long long _memoryCategory;
	unsigned long long _memorySubcategory;
	MiroAutoEditKenBurnsController* _kbController;
	NSMutableArray* _kenBurnsPanZoomPatterns;
	NSMutableArray* _transitions;
	NSMutableDictionary* _groupingTransitions;
	NSMutableArray* _specialTransitions;
	NSMutableArray* _multiTransitions;
	NSDictionary* _memoryFeaturesPersonInAsset;
	NSDictionary* _featuredPersonsInMemoryAsFaceRanges;

}

@property (nonatomic,retain) Project * project;                                               //@synthesize project=_project - In the implementation block
@property (nonatomic,retain) MiroBlueprint * activeBlueprint;                                 //@synthesize activeBlueprint=_activeBlueprint - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutClips;                                    //@synthesize layoutClips=_layoutClips - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCategory;                               //@synthesize memoryCategory=_memoryCategory - In the implementation block
@property (assign,nonatomic) unsigned long long memorySubcategory;                            //@synthesize memorySubcategory=_memorySubcategory - In the implementation block
@property (nonatomic,retain) MiroAutoEditKenBurnsController * kbController;                   //@synthesize kbController=_kbController - In the implementation block
@property (nonatomic,retain) NSMutableArray * kenBurnsPanZoomPatterns;                        //@synthesize kenBurnsPanZoomPatterns=_kenBurnsPanZoomPatterns - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitions;                                    //@synthesize transitions=_transitions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * groupingTransitions;                       //@synthesize groupingTransitions=_groupingTransitions - In the implementation block
@property (nonatomic,retain) NSMutableArray * specialTransitions;                             //@synthesize specialTransitions=_specialTransitions - In the implementation block
@property (nonatomic,retain) NSMutableArray * multiTransitions;                               //@synthesize multiTransitions=_multiTransitions - In the implementation block
@property (assign,nonatomic) int numberOfPotentialTransitionPoints;                           //@synthesize numberOfPotentialTransitionPoints=_numberOfPotentialTransitionPoints - In the implementation block
@property (assign,nonatomic) BOOL memoryTypeDisablesCropping;                                 //@synthesize memoryTypeDisablesCropping=_memoryTypeDisablesCropping - In the implementation block
@property (assign,nonatomic) BOOL memoryFeaturesPeople;                                       //@synthesize memoryFeaturesPeople=_memoryFeaturesPeople - In the implementation block
@property (nonatomic,retain) NSDictionary * memoryFeaturesPersonInAsset;                      //@synthesize memoryFeaturesPersonInAsset=_memoryFeaturesPersonInAsset - In the implementation block
@property (nonatomic,retain) NSDictionary * featuredPersonsInMemoryAsFaceRanges;              //@synthesize featuredPersonsInMemoryAsFaceRanges=_featuredPersonsInMemoryAsFaceRanges - In the implementation block
-(NSMutableArray *)transitions;
-(void)setTransitions:(NSMutableArray *)arg1 ;
-(void)setMemoryCategory:(unsigned long long)arg1 ;
-(void)setMemorySubcategory:(unsigned long long)arg1 ;
-(unsigned long long)memoryCategory;
-(unsigned long long)memorySubcategory;
-(Project *)project;
-(BOOL)memoryTypeDisablesCropping;
-(void)setMemoryTypeDisablesCropping:(BOOL)arg1 ;
-(NSDictionary *)memoryFeaturesPersonInAsset;
-(void)setMemoryFeaturesPersonInAsset:(NSDictionary *)arg1 ;
-(NSDictionary *)featuredPersonsInMemoryAsFaceRanges;
-(void)setFeaturedPersonsInMemoryAsFaceRanges:(NSDictionary *)arg1 ;
-(void)setProject:(Project *)arg1 ;
-(BOOL)memoryFeaturesPeople;
-(void)setLayoutClips:(NSMutableArray *)arg1 ;
-(NSMutableArray *)layoutClips;
-(void)setKbController:(MiroAutoEditKenBurnsController *)arg1 ;
-(MiroAutoEditKenBurnsController *)kbController;
-(void)establishPanAndZoomPatterns;
-(int)numberOfTransitionClipsInLayoutClips;
-(void)setNumberOfPotentialTransitionPoints:(int)arg1 ;
-(int)numberOfMultiTransitionsNeeded;
-(MiroBlueprint *)activeBlueprint;
-(int)numberOfPotentialTransitionPoints;
-(id)prepareTransitionsFromBlueprint:(id)arg1 forNumberOfEditPoints:(int)arg2 numberOfMultiTransitions:(int)arg3 ;
-(void)assignTransitionsToLayoutClips;
-(NSMutableArray *)kenBurnsPanZoomPatterns;
-(void)setKenBurnsPanZoomPatterns:(NSMutableArray *)arg1 ;
-(void)applyTransitionToLayoutClip:(id)arg1 ;
-(id)nextKBPanAndZoomSetForNumberOfEdits:(int)arg1 following:(id)arg2 forAspect:(id)arg3 ;
-(unsigned long long)kenBurnsPaceForBlueprint;
-(void)applyDeterminedKenBurnsTreatments:(id)arg1 forAspect:(id)arg2 ;
-(void)applyPanoStyleToClip:(id)arg1 ;
-(void)applyKenBurnsForBurstClip:(id)arg1 ;
-(BOOL)transitionDictatesKenBurnsMotion:(id)arg1 ;
-(void)applyKenBurnsOrEffectForKenBurnsClip:(id)arg1 ;
-(void)assignRemainingKenBurnsAnyClipTreatments;
-(NSMutableArray *)multiTransitions;
-(NSMutableArray *)specialTransitions;
-(id)convertMultiTransitionDictionary:(id)arg1 basedOnMultiLayout:(int)arg2 ;
-(BOOL)transitionCandidate:(id)arg1 validForLayoutClip:(id)arg2 ;
-(NSMutableDictionary *)groupingTransitions;
-(void)assignRequiredCutsAndMultiTransitionsIn:(id)arg1 ;
-(void)assignFirstAppropriateTransitionTo:(id)arg1 ;
-(void)updateNumberOfTransitionsToInclude:(int)arg1 ;
-(BOOL)findAndAssignConsecutiveClipsIn:(id)arg1 supportingTransitionGroup:(id)arg2 ;
-(void)shuffleTransitionsInArray:(id)arg1 ;
-(id)transitionForLayoutClip:(id)arg1 ;
-(id)transitionFromTransitions:(id)arg1 leadingClipType:(int)arg2 followingClipType:(int)arg3 includesPano:(BOOL)arg4 ;
-(BOOL)attemptToTransitionFromClip:(id)arg1 toClip:(id)arg2 withSettingsFromLayoutClip:(id)arg3 ;
-(void)setSpecialTransitions:(NSMutableArray *)arg1 ;
-(void)setGroupingTransitions:(NSMutableDictionary *)arg1 ;
-(void)setMultiTransitions:(NSMutableArray *)arg1 ;
-(id)transitionDictionaryForMultiFromBlueprint:(id)arg1 ;
-(unsigned long long)kenBurnsPreferredMovementForClip:(id)arg1 ;
-(BOOL)clipHasMediaLimitations:(id)arg1 ;
-(BOOL)clipShouldTrimToSelection:(id)arg1 ;
-(id)clipBeforeClip:(id)arg1 ;
-(int)maxTransitionDurationFromClip:(id)arg1 toClip:(id)arg2 transitionName:(id)arg3 ;
-(void)applyMultiUpTransitionTreatmentToLayoutClip:(id)arg1 ;
-(unsigned long long)safeInsertIndexForTransition:(id)arg1 inTransitions:(id)arg2 ;
-(void)adjustChosenTransitionsToAdhereToContentRules:(id)arg1 ;
-(BOOL)transitionAcceptableBetween:(id)arg1 secondClip:(id)arg2 ;
-(id)_everyTransitionDEBUG;
-(void)applyTransitions;
-(void)setActiveBlueprint:(MiroBlueprint *)arg1 ;
-(void)setMemoryFeaturesPeople:(BOOL)arg1 ;
-(void)prepareTransitionsForBlueprint;
-(void)applyClipEffectsBasedOnTransitions;
@end


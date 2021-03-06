//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCListener.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "_CDInteractionXPCProtocol-Protocol.h"

@class NSObject, NSString, _CDInteractionAdviceEngine, _CDInteractionPolicies, _CDInteractionStore, _DKDataProtectionStateMonitor, _PSContactSuggester, _PSEnsembleModel, _PSFamilyRecommender, _PSMessagesPinningSuggester, _PSSuggester;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying><_DKKnowledgeSaving, _DKLocationHistorian;

@interface CDPeopleDaemon : NSXPCListener <NSXPCListenerDelegate, _CDInteractionXPCProtocol>
{
    _CDInteractionAdviceEngine *_advisor;	// 8 = 0x8
    _DKDataProtectionStateMonitor *_dataProtection;	// 16 = 0x10
    _CDInteractionPolicies *_policies;	// 24 = 0x18
    id <_DKLocationHistorian> _locationHistorian;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    _CDInteractionStore *_store;	// 48 = 0x30
    id <_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;	// 56 = 0x38
    _PSSuggester *_suggester;	// 64 = 0x40
    _PSEnsembleModel *_ensembleModel;	// 72 = 0x48
    _PSFamilyRecommender *_familyRecommender;	// 80 = 0x50
    _PSMessagesPinningSuggester *_messagesPinningSuggester;	// 88 = 0x58
    _PSContactSuggester *_contactSuggester;	// 96 = 0x60
}

+ (id)readRepopulationCheckpoint;	// IMP=0x0000000100006fc8
+ (_Bool)writeRepopulationCheckpoint:(id)arg1;	// IMP=0x0000000100006ed8
- (void).cxx_destruct;	// IMP=0x000000010000a714
@property(readonly, nonatomic) _PSContactSuggester *contactSuggester; // @synthesize contactSuggester=_contactSuggester;
@property(readonly, nonatomic) _PSMessagesPinningSuggester *messagesPinningSuggester; // @synthesize messagesPinningSuggester=_messagesPinningSuggester;
@property(readonly, nonatomic) _PSFamilyRecommender *familyRecommender; // @synthesize familyRecommender=_familyRecommender;
@property(readonly, nonatomic) _PSEnsembleModel *ensembleModel; // @synthesize ensembleModel=_ensembleModel;
@property(readonly, nonatomic) _PSSuggester *suggester; // @synthesize suggester=_suggester;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(readonly, nonatomic) _CDInteractionStore *store; // @synthesize store=_store;
- (void)reportPeopleStatistics;	// IMP=0x000000010000a42c
- (void)logSizeOfStorage:(id)arg1;	// IMP=0x000000010000a0c4
- (void)populateSharingAppUsageCache;	// IMP=0x000000010000a064
- (void)_maintainPrivacy;	// IMP=0x0000000100009b90
- (void)maintainPrivacy;	// IMP=0x00000001000099f0
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000098e8
- (void)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100009788
- (void)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000095f4
- (void)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000094b0
- (void)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000936c
- (void)adviseInteractionsUsingSettings:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009238
- (void)fillInCurrentLocationIfNeeded:(id)arg1;	// IMP=0x0000000100009124
- (void)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008fe0
- (void)contactSuggestionsWithMaxSuggestions:(id)arg1 excludedContactIds:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008ed8
- (void)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008dc0
- (void)rankedHandlesFromCandidateHandles:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008cf0
- (void)rankedSiriMLCRHandlesFromContext:(id)arg1 handles:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008bfc
- (void)rankedFamilySuggestionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008ba0
- (void)provideMessagesPinningFeedback:(id)arg1;	// IMP=0x0000000100008b9c
- (void)rankedMessagesPinsWithMaxSuggestions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008b40
- (void)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008a4c
- (void)rankedSiriNLContactSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 interactionId:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100008928
- (void)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(_Bool)arg2 maxSuggestions:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100008818
- (void)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008724
- (void)messagesZKWSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000861c
- (void)mapsSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008514
- (void)shareExtensionSuggestionsFromContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008444
- (void)suggestInteractionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008334
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008128
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007f1c
- (void)deleteInteractionsWithBundleId:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007d34
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007b10
- (void)countContactsUsingPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007928
- (void)countInteractionsUsingPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007740
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007518
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000072b8
- (void)recordInteractions:(id)arg1 enforceDataLimits:(_Bool)arg2 enforcePrivacy:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000714c
- (void)setLocationHistorian:(id)arg1;	// IMP=0x00000001000070e0
- (_Bool)isClassCLocked;	// IMP=0x00000001000070a8
- (_Bool)requestInteractionRepopulation;	// IMP=0x00000001000070a0
- (_Bool)versionCheckAndUpgradeIfNecessaryAndPossible;	// IMP=0x0000000100006bfc
- (void)writeVersionNumberToDefaults:(unsigned long long)arg1;	// IMP=0x0000000100006b94
- (long long)readVersionNumberFromDefaults;	// IMP=0x0000000100006b38
- (void)handleError:(id)arg1;	// IMP=0x0000000100006824
- (void)populatePeopleSuggesterCaches;	// IMP=0x0000000100006700
- (void)setupDataProtectionChangeHandler;	// IMP=0x00000001000063d0
- (id)workQueue;	// IMP=0x00000001000063c0
- (id)initWithKnowledgeStore:(id)arg1;	// IMP=0x000000010000602c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100005da4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


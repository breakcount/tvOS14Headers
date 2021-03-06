//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFConversation, NSMutableArray, SRCompactViewModel;
@protocol SRCompactViewModelChangeObserving, SRCompactViewModelControllerDelegate;

@interface SRCompactViewModelController : NSObject
{
    _Bool _immersiveExperienceOn;	// 8 = 0x8
    id <SRCompactViewModelChangeObserving> _viewModelChangeObserver;	// 16 = 0x10
    id <SRCompactViewModelControllerDelegate> _delegate;	// 24 = 0x18
    SRCompactViewModel *_viewModel;	// 32 = 0x20
    AFConversation *_conversation;	// 40 = 0x28
    NSMutableArray *_serverUtteranceConversationIds;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010004fad8
@property(readonly, nonatomic) NSMutableArray *serverUtteranceConversationIds; // @synthesize serverUtteranceConversationIds=_serverUtteranceConversationIds;
@property(nonatomic) _Bool immersiveExperienceOn; // @synthesize immersiveExperienceOn=_immersiveExperienceOn;
@property(readonly, nonatomic) AFConversation *conversation; // @synthesize conversation=_conversation;
@property(copy, nonatomic) SRCompactViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SRCompactViewModelControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SRCompactViewModelChangeObserving> viewModelChangeObserver; // @synthesize viewModelChangeObserver=_viewModelChangeObserver;
- (id)_instrumentationManager;	// IMP=0x000000010004fa5c
@property(readonly, nonatomic) _Bool alwaysShowRecognizedSpeech;
- (void)revealUserUtterance:(id)arg1 backingAceObject:(id)arg2;	// IMP=0x000000010004f934
- (id)_serverUtterancesToDisplay;	// IMP=0x000000010004f53c
- (id)_userUtteranceForConversationItem:(id)arg1;	// IMP=0x000000010004f3e0
- (void)_processInsertedConversationItems:(id)arg1;	// IMP=0x000000010004e6b4
- (void)_processUpdatedConversationItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010004dfbc
- (void)conversationDidChangeWithTransaction:(id)arg1;	// IMP=0x000000010004db44
- (void)_processInitialConversationItems;	// IMP=0x000000010004da64
- (unsigned long long)_generateDiffFromViewModel:(id)arg1 toViewModel:(id)arg2;	// IMP=0x000000010004d65c
- (void)_notifyObserverOfViewModelChangeWithDiff:(unsigned long long)arg1;	// IMP=0x000000010004d5dc
- (id)initWithConversation:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010004d4bc

@end


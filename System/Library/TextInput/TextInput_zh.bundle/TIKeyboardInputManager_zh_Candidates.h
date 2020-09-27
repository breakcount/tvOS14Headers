/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputChinese/TIKeyboardInputManagerChinesePhonetic.h>

@class NSSet, NSString, TIKeyboardCandidate, TIWordSearch, TIWordSearchCandidateResultSet;

@interface TIKeyboardInputManager_zh_Candidates : TIKeyboardInputManagerChinesePhonetic {

	BOOL _skipLastCharacterCandidates;
	NSSet* _autoSelectCandidates;
	NSString* _syntheticCandidate;
	NSString* _inputString;
	TIKeyboardCandidate* _defaultCandidate;
	TIWordSearch* _kbws;
	NSString* _autoCommitString;
	TIWordSearchCandidateResultSet* _wholePhraseCandidateResultSet;
	TIWordSearchCandidateResultSet* _lastCharacterCandidateResultSet;

}

@property (nonatomic,copy) NSString * inputString;                                                          //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,copy) TIKeyboardCandidate * defaultCandidate;                                          //@synthesize defaultCandidate=_defaultCandidate - In the implementation block
@property (nonatomic,readonly) TIWordSearch * kbws;                                                         //@synthesize kbws=_kbws - In the implementation block
@property (nonatomic,copy) NSString * autoCommitString;                                                     //@synthesize autoCommitString=_autoCommitString - In the implementation block
@property (nonatomic,retain) TIWordSearchCandidateResultSet * wholePhraseCandidateResultSet;                //@synthesize wholePhraseCandidateResultSet=_wholePhraseCandidateResultSet - In the implementation block
@property (nonatomic,retain) TIWordSearchCandidateResultSet * lastCharacterCandidateResultSet;              //@synthesize lastCharacterCandidateResultSet=_lastCharacterCandidateResultSet - In the implementation block
@property (assign,nonatomic) BOOL skipLastCharacterCandidates;                                              //@synthesize skipLastCharacterCandidates=_skipLastCharacterCandidates - In the implementation block
@property (nonatomic,copy) NSSet * autoSelectCandidates;                                                    //@synthesize autoSelectCandidates=_autoSelectCandidates - In the implementation block
@property (nonatomic,retain) NSString * syntheticCandidate;                                                 //@synthesize syntheticCandidate=_syntheticCandidate - In the implementation block
-(TIKeyboardCandidate *)defaultCandidate;
-(void)setDefaultCandidate:(TIKeyboardCandidate *)arg1 ;
-(id)keyboardConfiguration;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesLiveConversion;
-(BOOL)delayedCandidateList;
-(NSString *)inputString;
-(void)setInputString:(NSString *)arg1 ;
-(BOOL)shouldClearInputOnMarkedTextOutOfSync;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(void*)mecabraCandidateRefFromCandidate:(id)arg1 ;
-(BOOL)supportsCandidateGeneration;
-(id)candidateResultSetFromCandidates:(id)arg1 ;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 wordSearch:(id)arg3 ;
-(void)setAutoCommitString:(NSString *)arg1 ;
-(NSString *)autoCommitString;
-(void)setAutoSelectCandidates:(NSSet *)arg1 ;
-(void)setSyntheticCandidate:(NSString *)arg1 ;
-(BOOL)makeCandidatesWithInputString:(id)arg1 autoCommitString:(id)arg2 predictionEnabled:(BOOL)arg3 reanalysisMode:(BOOL)arg4 geometoryModelData:(id)arg5 ;
-(TIWordSearch *)kbws;
-(BOOL)hasIdeographicCandidates;
-(id)inputStringForLastCharacter:(id)arg1 ;
-(void)setWholePhraseCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
-(void)setLastCharacterCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
-(void)setSkipLastCharacterCandidates:(BOOL)arg1 ;
-(void)_notifyWholePhraseCandidate:(id)arg1 forOperation:(id)arg2 ;
-(void)performWordSearch:(id)arg1 action:(SEL)arg2 waitUntilFinished:(BOOL)arg3 ;
-(void)_notifyLastCharacterCandidate:(id)arg1 forOperation:(id)arg2 ;
-(void)_notifyUpdateCandidates;
-(TIWordSearchCandidateResultSet *)wholePhraseCandidateResultSet;
-(BOOL)skipLastCharacterCandidates;
-(TIWordSearchCandidateResultSet *)lastCharacterCandidateResultSet;
-(id)candidateResultSetFromCandidateResultSet:(id)arg1 lastCharacterCandidateResultSet:(id)arg2 ;
-(NSSet *)autoSelectCandidates;
-(id)punctuationCandiadtesFor:(id)arg1 withAutoCommit:(id)arg2 ;
-(NSString *)syntheticCandidate;
@end


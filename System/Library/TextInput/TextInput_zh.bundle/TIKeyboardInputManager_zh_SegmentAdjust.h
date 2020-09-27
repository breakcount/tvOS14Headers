/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class TIWordSearch, NSArray, TIZhuyinInputManager, TIMecabraIMLogger, TIKeyboardCandidate, NSString;

@interface TIKeyboardInputManager_zh_SegmentAdjust : TIKeyboardInputManager_zh_ja {

	TIWordSearch* _wordSearch;
	long long _segmentIndex;
	NSArray* _segments;
	TIZhuyinInputManager* _inputManager;
	TIMecabraIMLogger* _logger;
	/*^block*/id _candidateGenerationCompletionHandler;
	TIKeyboardCandidate* _currentCandidate;
	NSString* _remainingInput;

}

@property (nonatomic,copy) TIZhuyinInputManager * inputManager;                  //@synthesize inputManager=_inputManager - In the implementation block
@property (nonatomic,copy,readonly) TIMecabraIMLogger * logger;                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) id candidateGenerationCompletionHandler;              //@synthesize candidateGenerationCompletionHandler=_candidateGenerationCompletionHandler - In the implementation block
@property (nonatomic,copy) TIKeyboardCandidate * currentCandidate;               //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (nonatomic,copy) NSString * remainingInput;                            //@synthesize remainingInput=_remainingInput - In the implementation block
@property (assign) long long segmentIndex;                                       //@synthesize segmentIndex=_segmentIndex - In the implementation block
@property (nonatomic,copy) NSArray * segments;                                   //@synthesize segments=_segments - In the implementation block
-(TIMecabraIMLogger *)logger;
-(unsigned)inputCount;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(long long)segmentIndex;
-(BOOL)supportsNumberKeySelection;
-(BOOL)supportsSetPhraseBoundary;
-(BOOL)usesCandidateSelection;
-(BOOL)usesLiveConversion;
-(BOOL)delayedCandidateList;
-(unsigned)inputIndex;
-(id)inputString;
-(id)keyboardBehaviors;
-(id)keyEventMap;
-(id)wordCharacters;
-(TIKeyboardCandidate *)currentCandidate;
-(void)setCurrentCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIZhuyinInputManager *)inputManager;
-(void)setInputManager:(TIZhuyinInputManager *)arg1 ;
-(void)clearInput;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id)wordSearch;
-(void)loadDictionaries;
-(id)didAcceptCandidate:(id)arg1 ;
-(NSString *)remainingInput;
-(void)loadFavoniusTypingModel;
-(id)candidateGenerationCompletionHandler;
-(void)setCandidateGenerationCompletionHandler:(id)arg1 ;
-(void)setSegmentIndex:(long long)arg1 ;
-(void)setRemainingInput:(NSString *)arg1 ;
-(id)convertString;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 segments:(id)arg3 inputManager:(id)arg4 wordSearch:(id)arg5 ;
@end


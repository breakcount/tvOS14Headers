/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/TextInput/TextInput_th.bundle/TextInput_th
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_th/TextInput_th-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_th : TIKeyboardInputManager
-(void)candidateRejected:(id)arg1 ;
-(BOOL)shouldExtendPriorWord;
-(id)wordSeparator;
-(id)keyboardBehaviors;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 withInput:(id)arg3 ;
-(void)loadDictionaries;
-(BOOL)supportsLearning;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(TIInputManager*)initImplementation;
-(id)trimmedInputStem;
-(void)setWordBoundary;
@end

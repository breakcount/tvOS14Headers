/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextCheckingClient;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextChecker;

@interface UITextCheckingController : NSObject {

	id<UITextCheckingClient> _client;
	UITextChecker* _textChecker;
	NSRange _selectedRangeFromPreviousUnchecked;
	struct {
		unsigned respondsToAutocorrectionType : 1;
		unsigned respondsToSpellCheckingType : 1;
		unsigned respondsToSmartQuotesType : 1;
		unsigned respondsToSmartDashesType : 1;
		unsigned respondsToSmartInsertDeleteType : 1;
		unsigned respondsToContinuousSpellCheckingEnabled : 1;
	}  _tccClientFlags;

}

@property (readonly) id<UITextCheckingClient> client; 
-(void)dealloc;
-(void)invalidate;
-(id<UITextCheckingClient>)client;
-(id)initWithClient:(id)arg1 ;
-(NSRange)selectedRange;
-(id)textChecker;
-(NSRange)nsRangeForTextRange:(id)arg1 ;
-(void)removeSpellingMarkersFromWordInRange:(id)arg1 ;
-(void)didChangeSelectionFromRange:(id)arg1 ;
-(BOOL)continuousSpellCheckingEnabled;
-(void)checkSpellingForWordInRange:(id)arg1 ;
-(id)validAnnotations;
-(void)preheatTextChecker;
-(id)keyboardLanguages;
-(BOOL)foundApostropheAfterRange:(NSRange)arg1 ;
-(void)checkSpellingForSelectionChangeFromRange:(NSRange)arg1 ;
-(void)didChangeTextInRange:(id)arg1 ;
-(void)insertedTextInRange:(id)arg1 ;
-(void)considerTextCheckingForRange:(id)arg1 ;
@end


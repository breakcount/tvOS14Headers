/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextInputUIResponderAccessibility_super.h>

@interface UITextInputUIResponderAccessibility : __UITextInputUIResponderAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(NSRange)_accessibilityRawRangeForUITextRange:(id)arg1 ;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(id)_accessibilityTextRangeFromNSRange:(NSRange)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1 ;
-(NSRange)_accessibilityCharacterRangeForPosition:(unsigned long long)arg1 ;
-(unsigned long long)_accessibilityPositionInDirection:(long long)arg1 offset:(unsigned long long)arg2 forPosition:(unsigned long long)arg3 ;
-(id)_accessibilityTextRectsForSpeakThisStringRange:(NSRange)arg1 string:(id)arg2 wantsSentences:(BOOL)arg3 ;
-(id)_accessibilityAlternativesForTextAtPosition:(unsigned long long)arg1 ;
-(long long)_accessibilityLineStartPosition;
-(long long)_accessibilityLineEndPosition;
-(id)_accessibilitySpeakThisString;
-(BOOL)_accessibilityInsertTextWithAlternatives:(id)arg1 ;
-(id)_accessibilityTextRectsForSpeakThisStringRange:(NSRange)arg1 ;
-(void)_axDrawFocusRingAroundFirstResponderAndMoveFocus:(BOOL)arg1 ;
-(void)_axResetFKAFocusToFirstResponder;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(void)_accessibilityCheckBorderHit:(BOOL)arg1 left:(BOOL)arg2 ;
-(id)_accessibilityBeginningOfDocument;
-(long long)_accessibilityOffsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)_accessibilityTextInputLinePosition:(BOOL)arg1 ;
-(id)_accessibilityPositionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)_accessibilityEndOfDocument;
-(id)_accessibilityTextRectsForSpeakThisStringRange:(NSRange)arg1 wantsSentences:(BOOL)arg2 ;
-(BOOL)_axShouldDrawFocusAroundFirstResponder;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSTextSelectionNavigation, NSTextRange, NSMapTable, NSArray;

@interface __NSTextSelectionLineFragmentInfo : NSObject {

	NSTextSelectionNavigation* _navigation;
	NSTextRange* _textRange;
	long long _offset;
	long long _baseDirection;
	int _visualDirection;
	SCD_Struct_NS19* _carets;
	long long _numberOfCarets;
	NSMapTable* _primaryLocationTable;
	NSArray* _sortedLocations;

}

@property (readonly) NSTextSelectionNavigation * textSelectionNavigation;              //@synthesize navigation=_navigation - In the implementation block
@property (readonly) NSTextRange * textRange;                                          //@synthesize textRange=_textRange - In the implementation block
@property (getter=isMonotonicDirection,readonly) BOOL monotonicDirection; 
@property (assign) long long numberOfCaretPositions; 
-(id)description;
-(void)dealloc;
-(void)_cache;
-(long long)_baseWritingDirection;
-(id)_sortedLocations;
-(long long)_sortedLocationIndexForLocation:(id)arg1 ;
-(id)_findNextCaretLocationForLocation:(id)arg1 ;
-(NSTextRange *)textRange;
-(const SCD_Struct_NS19*)caretPositionClosestToLocation:(id)arg1 visualDirection:(long long)arg2 matchLocation:(out BOOL*)arg3 ;
-(long long)indexForPrimaryLocation:(id)arg1 ;
-(const SCD_Struct_NS19*)caretPositionAtIndex:(long long)arg1 ;
-(const SCD_Struct_NS19*)caretPositionClosestToOffset:(double)arg1 ;
-(id)initWithTextSelectionNavigation:(id)arg1 range:(id)arg2 ;
-(id)textRangeOfCharacterAtOffset:(double)arg1 fractionOfDistanceThroughGlyph:(double*)arg2 ;
-(const SCD_Struct_NS19*)logicalFirstCaret;
-(const SCD_Struct_NS19*)logicalLastCaret;
-(double)offsetForLocation:(id)arg1 ;
-(id)rangesBetweenStartingOffset:(double)arg1 endOffset:(double)arg2 ;
-(long long)numberOfCaretPositions;
-(BOOL)isMonotonicDirection;
-(long long)indexForEdgeLocationInTextRanges:(id)arg1 leading:(BOOL)arg2 ;
-(NSTextSelectionNavigation *)textSelectionNavigation;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSTextLocation;
@class NSArray, NSDictionary;

@interface NSTextSelection : NSObject <NSSecureCoding> {

	BOOL _transient;
	BOOL _logical;
	NSArray* _textRanges;
	long long _granularity;
	long long _affinity;
	double _anchorPositionOffset;
	id<NSTextLocation> _secondarySelectionLocation;
	NSDictionary* _typingAttributes;
	id<NSTextLocation> _selectionAnchorLocation;

}

@property (getter=isTransient) BOOL transient;                                 //@synthesize transient=_transient - In the implementation block
@property (retain) id<NSTextLocation> selectionAnchorLocation;                 //@synthesize selectionAnchorLocation=_selectionAnchorLocation - In the implementation block
@property (copy,readonly) NSArray * textRanges;                                //@synthesize textRanges=_textRanges - In the implementation block
@property (readonly) long long granularity;                                    //@synthesize granularity=_granularity - In the implementation block
@property (readonly) long long affinity;                                       //@synthesize affinity=_affinity - In the implementation block
@property (assign) double anchorPositionOffset;                                //@synthesize anchorPositionOffset=_anchorPositionOffset - In the implementation block
@property (getter=isLogical) BOOL logical;                                     //@synthesize logical=_logical - In the implementation block
@property (retain) id<NSTextLocation> secondarySelectionLocation;              //@synthesize secondarySelectionLocation=_secondarySelectionLocation - In the implementation block
@property (copy) NSDictionary * typingAttributes;                              //@synthesize typingAttributes=_typingAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptionForGranularity:(long long)arg1 ;
+(id)descriptionForAffinity:(long long)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTransient;
-(void)setTransient:(BOOL)arg1 ;
-(long long)granularity;
-(NSDictionary *)typingAttributes;
-(long long)affinity;
-(BOOL)containsLocation:(id)arg1 ;
-(NSArray *)textRanges;
-(double)anchorPositionOffset;
-(id<NSTextLocation>)selectionAnchorLocation;
-(id)initWithRanges:(id)arg1 affinity:(long long)arg2 granularity:(long long)arg3 ;
-(id)initWithLocation:(id)arg1 affinity:(long long)arg2 ;
-(void)setAnchorPositionOffset:(double)arg1 ;
-(id)initWithRange:(id)arg1 affinity:(long long)arg2 granularity:(long long)arg3 ;
-(void)setSecondarySelectionLocation:(id<NSTextLocation>)arg1 ;
-(void)setLogical:(BOOL)arg1 ;
-(void)setSelectionAnchorLocation:(id<NSTextLocation>)arg1 ;
-(id<NSTextLocation>)secondarySelectionLocation;
-(id)textSelectionWithTextRanges:(id)arg1 ;
-(id)textRangeContainingLocation:(id)arg1 ;
-(BOOL)isLogical;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
@end


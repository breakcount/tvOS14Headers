/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UICommandChange.h>

@class NSArray, _UICommandIdentifier;

@interface _UICommandItemInsertion : _UICommandChange {

	NSArray* _fallbacks;
	NSArray* _insertsBefore;
	NSArray* _insertsAfter;

}

@property (nonatomic,readonly) _UICommandIdentifier * anchor; 
@property (nonatomic,readonly) NSArray * fallbacks;                        //@synthesize fallbacks=_fallbacks - In the implementation block
@property (nonatomic,readonly) NSArray * insertsBefore;                    //@synthesize insertsBefore=_insertsBefore - In the implementation block
@property (nonatomic,readonly) NSArray * insertsAfter;                     //@synthesize insertsAfter=_insertsAfter - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)fallbacks;
-(NSArray *)insertsBefore;
-(NSArray *)insertsAfter;
-(void)acceptItemInsertionVisit:(/*^block*/id)arg1 itemDeletionVisit:(/*^block*/id)arg2 menuInsertionVisit:(/*^block*/id)arg3 menuDeletionVisit:(/*^block*/id)arg4 ;
-(BOOL)acceptBoolItemInsertionVisit:(/*^block*/id)arg1 itemDeletionVisit:(/*^block*/id)arg2 menuInsertionVisit:(/*^block*/id)arg3 menuDeletionVisit:(/*^block*/id)arg4 ;
-(id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4 ;
@end


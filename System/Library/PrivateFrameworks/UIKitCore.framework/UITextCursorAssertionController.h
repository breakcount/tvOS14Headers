/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextCursorAssertionControllerSubject;
@class NSHashTable;

@interface UITextCursorAssertionController : NSObject {

	NSHashTable* _assertions;
	id<UITextCursorAssertionControllerSubject> _subject;

}

@property (assign,nonatomic,__weak) id<UITextCursorAssertionControllerSubject> subject;              //@synthesize subject=_subject - In the implementation block
-(id)debugDescription;
-(void)dealloc;
-(id<UITextCursorAssertionControllerSubject>)subject;
-(void)setSubject:(id<UITextCursorAssertionControllerSubject>)arg1 ;
-(void)_endTrackingAssertion:(id)arg1 ;
-(void)_beginTrackingAssertion:(id)arg1 ;
-(id)nonBlinkingAssertionWithReason:(id)arg1 ;
-(void)_updateSubjectWithAssertionState;
-(id)_createAssertionWithReason:(id)arg1 options:(unsigned long long)arg2 ;
-(id)nonBlinkingGhostAssertionWithReason:(id)arg1 ;
-(id)nonVisibleAssertionWithReason:(id)arg1 ;
@end


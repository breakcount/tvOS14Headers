/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TITransientLexiconManaging <TIKeyboardActivityObserving>
@property (nonatomic,readonly) const LXLexiconRef namedEntityLexicon; 
@property (nonatomic,readonly) const LXLexiconRef namedEntityPhraseLexicon; 
@required
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1;
-(void)removeContactObserver:(/*^block*/id)arg1;
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
-(void)loadLexicons;
-(BOOL)searchForWord:(id)arg1;
-(BOOL)searchForWordCaseInsensitive:(id)arg1;
-(void)getOnce:(/*^block*/id)arg1;
-(void)debugLogEntities;
-(const LXLexiconRef)namedEntityLexicon;
-(const LXLexiconRef)namedEntityPhraseLexicon;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/TextInput/TextInput_ta.bundle/TextInput_ta
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ta/TextInput_ta-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_ta : TIKeyboardInputManager {

	void* _internalToExternalTransliterator;
	void* _externalToInternalTransliterator;
	BOOL _isQWERTYLayout;

}
-(void)dealloc;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)configureTransliterators;
-(void)closeTransliterators;
-(void)initTransliteratorsWithID:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIKeyEventMap_zh_Phonetic.h>

@interface TIKeyEventMap_zh_Hant_Zhuyin : TIKeyEventMap_zh_Phonetic
+(BOOL)supportsSecureCoding;
+(id)sharedInstance;
-(id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4 ;
-(id)punctuationMap;
-(BOOL)shouldInsertZhuyinCharacterAfter:(id)arg1 ;
-(BOOL)isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(id)arg1 ;
@end


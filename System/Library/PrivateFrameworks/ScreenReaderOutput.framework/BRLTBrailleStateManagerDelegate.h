/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRLTBrailleStateManagerDelegate <NSObject>
@required
-(void)brailleDisplayInsertedCharacter:(id)arg1;
-(void)brailleDisplayDeletedCharacter:(id)arg1;
-(void)brailleDisplayStringDidChange:(id)arg1 brailleSelection:(NSRange)arg2;
-(void)replaceScriptStringRange:(NSRange)arg1 withScriptString:(id)arg2 cursorLocation:(unsigned long long)arg3;
-(void)scriptSelectionDidChange:(NSRange)arg1;
-(void)didInsertScriptString:(id)arg1;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/SCROBrailleKey.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey <NSSecureCoding> {

	unsigned _modifiers;
	unsigned _keyCode;
	unsigned _virtualKeyCode;
	NSString* _keyString;

}

@property (nonatomic,retain) NSString * keyString;                 //@synthesize keyString=_keyString - In the implementation block
@property (assign,nonatomic) unsigned modifiers;                   //@synthesize modifiers=_modifiers - In the implementation block
@property (assign,nonatomic) unsigned keyCode;                     //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) unsigned virtualKeyCode;              //@synthesize virtualKeyCode=_virtualKeyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)keyCode;
-(NSString *)keyString;
-(void)setKeyCode:(unsigned)arg1 ;
-(void)setKeyString:(NSString *)arg1 ;
-(unsigned)modifiers;
-(void)setModifiers:(unsigned)arg1 ;
-(unsigned)virtualKeyCode;
-(void)setVirtualKeyCode:(unsigned)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVRMSKeyboardInfo : NSObject {

	BOOL _secureText;
	NSString* _text;
	NSString* _title;
	NSString* _subtitle;
	long long _keyboardType;
	long long _keyboardInputType;
	long long _minimumCharacters;
	long long _maximumCharacters;

}

@property (nonatomic,retain) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL secureText;                          //@synthesize secureText=_secureText - In the implementation block
@property (assign,nonatomic) long long keyboardType;                   //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long keyboardInputType;              //@synthesize keyboardInputType=_keyboardInputType - In the implementation block
@property (assign,nonatomic) long long minimumCharacters;              //@synthesize minimumCharacters=_minimumCharacters - In the implementation block
@property (assign,nonatomic) long long maximumCharacters;              //@synthesize maximumCharacters=_maximumCharacters - In the implementation block
-(long long)keyboardType;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSecureText:(BOOL)arg1 ;
-(id)initWithItemsArray:(id)arg1 ;
-(BOOL)secureText;
-(long long)keyboardInputType;
-(void)setKeyboardInputType:(long long)arg1 ;
-(long long)minimumCharacters;
-(void)setMinimumCharacters:(long long)arg1 ;
-(long long)maximumCharacters;
-(void)setMaximumCharacters:(long long)arg1 ;
@end

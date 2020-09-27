/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableString;

@interface ENEncryptedContentInfo : NSObject {

	NSString* _hint;
	NSString* _cipher;
	long long _keyLength;
	NSMutableString* _cipherText;

}

@property (nonatomic,copy) NSString * cipher;                           //@synthesize cipher=_cipher - In the implementation block
@property (assign) long long keyLength;                                 //@synthesize keyLength=_keyLength - In the implementation block
@property (nonatomic,copy) NSString * hint;                             //@synthesize hint=_hint - In the implementation block
@property (nonatomic,retain) NSMutableString * cipherText;              //@synthesize cipherText=_cipherText - In the implementation block
-(id)init;
-(long long)keyLength;
-(void)setKeyLength:(long long)arg1 ;
-(NSString *)hint;
-(void)setCipher:(NSString *)arg1 ;
-(NSString *)cipher;
-(void)setHint:(NSString *)arg1 ;
-(NSMutableString *)cipherText;
-(void)setCipherText:(NSMutableString *)arg1 ;
@end


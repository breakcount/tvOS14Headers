/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TTSUTF8Offset : NSObject {

	long long _cStringOffset;
	long long _actualPos;
	long long _actualLength;
	long long _lengthDifference;

}

@property (assign,nonatomic) long long cStringOffset;                 //@synthesize cStringOffset=_cStringOffset - In the implementation block
@property (assign,nonatomic) long long actualPos;                     //@synthesize actualPos=_actualPos - In the implementation block
@property (assign,nonatomic) long long actualLength;                  //@synthesize actualLength=_actualLength - In the implementation block
@property (assign,nonatomic) long long lengthDifference;              //@synthesize lengthDifference=_lengthDifference - In the implementation block
-(id)description;
-(long long)actualLength;
-(long long)cStringOffset;
-(long long)lengthDifference;
-(long long)actualPos;
-(void)setCStringOffset:(long long)arg1 ;
-(void)setActualPos:(long long)arg1 ;
-(void)setActualLength:(long long)arg1 ;
-(void)setLengthDifference:(long long)arg1 ;
@end


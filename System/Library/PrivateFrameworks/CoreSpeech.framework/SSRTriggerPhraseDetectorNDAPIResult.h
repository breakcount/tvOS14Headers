/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSRTriggerPhraseDetectorNDAPIResult : NSObject {

	BOOL _isEarlyWarning;
	BOOL _isRescoring;
	float _bestScore;
	unsigned long long _phraseId;
	unsigned long long _samplesFed;
	unsigned long long _bestPhrase;
	unsigned long long _bestStart;
	unsigned long long _bestEnd;

}

@property (assign,nonatomic) unsigned long long phraseId;                //@synthesize phraseId=_phraseId - In the implementation block
@property (assign,nonatomic) unsigned long long samplesFed;              //@synthesize samplesFed=_samplesFed - In the implementation block
@property (assign,nonatomic) unsigned long long bestPhrase;              //@synthesize bestPhrase=_bestPhrase - In the implementation block
@property (assign,nonatomic) unsigned long long bestStart;               //@synthesize bestStart=_bestStart - In the implementation block
@property (assign,nonatomic) unsigned long long bestEnd;                 //@synthesize bestEnd=_bestEnd - In the implementation block
@property (assign,nonatomic) float bestScore;                            //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) BOOL isEarlyWarning;                        //@synthesize isEarlyWarning=_isEarlyWarning - In the implementation block
@property (assign,nonatomic) BOOL isRescoring;                           //@synthesize isRescoring=_isRescoring - In the implementation block
-(void)setBestScore:(float)arg1 ;
-(float)bestScore;
-(unsigned long long)phraseId;
-(void)setPhraseId:(unsigned long long)arg1 ;
-(unsigned long long)samplesFed;
-(void)setSamplesFed:(unsigned long long)arg1 ;
-(unsigned long long)bestStart;
-(void)setBestStart:(unsigned long long)arg1 ;
-(unsigned long long)bestEnd;
-(void)setBestEnd:(unsigned long long)arg1 ;
-(BOOL)isEarlyWarning;
-(void)setIsEarlyWarning:(BOOL)arg1 ;
-(BOOL)isRescoring;
-(void)setIsRescoring:(BOOL)arg1 ;
-(unsigned long long)bestPhrase;
-(void)setBestPhrase:(unsigned long long)arg1 ;
@end

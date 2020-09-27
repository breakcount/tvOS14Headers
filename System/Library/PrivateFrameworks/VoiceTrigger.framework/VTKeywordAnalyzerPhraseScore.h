/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface VTKeywordAnalyzerPhraseScore : NSObject {

	BOOL _isEarlyWarning;
	BOOL _isRescoring;
	BOOL _isSecondChance;
	float _bestScore;
	unsigned long long _phraseId;
	NSString* _phStr;
	unsigned long long _samplesFed;
	unsigned long long _bestStart;
	unsigned long long _bestEnd;
	unsigned long long _samplesAtFire;
	unsigned long long _startSampleCount;

}

@property (assign,nonatomic) unsigned long long phraseId;                      //@synthesize phraseId=_phraseId - In the implementation block
@property (nonatomic,retain) NSString * phStr;                                 //@synthesize phStr=_phStr - In the implementation block
@property (assign,nonatomic) unsigned long long samplesFed;                    //@synthesize samplesFed=_samplesFed - In the implementation block
@property (assign,nonatomic) unsigned long long bestStart;                     //@synthesize bestStart=_bestStart - In the implementation block
@property (assign,nonatomic) unsigned long long bestEnd;                       //@synthesize bestEnd=_bestEnd - In the implementation block
@property (assign,nonatomic) float bestScore;                                  //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) BOOL isEarlyWarning;                              //@synthesize isEarlyWarning=_isEarlyWarning - In the implementation block
@property (assign,nonatomic) BOOL isRescoring;                                 //@synthesize isRescoring=_isRescoring - In the implementation block
@property (assign,nonatomic) BOOL isSecondChance;                              //@synthesize isSecondChance=_isSecondChance - In the implementation block
@property (assign,nonatomic) unsigned long long samplesAtFire;                 //@synthesize samplesAtFire=_samplesAtFire - In the implementation block
@property (assign,nonatomic) unsigned long long startSampleCount;              //@synthesize startSampleCount=_startSampleCount - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
-(id)init;
-(NSDictionary *)dictionary;
-(void)setBestScore:(float)arg1 ;
-(float)bestScore;
-(void)setStartSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)phraseId;
-(void)setPhraseId:(unsigned long long)arg1 ;
-(NSString *)phStr;
-(void)setPhStr:(NSString *)arg1 ;
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
-(BOOL)isSecondChance;
-(void)setIsSecondChance:(BOOL)arg1 ;
-(unsigned long long)samplesAtFire;
-(void)setSamplesAtFire:(unsigned long long)arg1 ;
-(unsigned long long)startSampleCount;
@end


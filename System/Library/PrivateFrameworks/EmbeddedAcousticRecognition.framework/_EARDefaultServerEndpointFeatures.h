/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _EARDefaultServerEndpointFeatures : NSObject {

	float _endOfSentenceLikelihood;
	float _silencePosterior;
	long long _wordCount;
	long long _trailingSilenceDuration;

}

@property (assign,nonatomic) long long wordCount;                            //@synthesize wordCount=_wordCount - In the implementation block
@property (assign,nonatomic) long long trailingSilenceDuration;              //@synthesize trailingSilenceDuration=_trailingSilenceDuration - In the implementation block
@property (assign,nonatomic) float endOfSentenceLikelihood;                  //@synthesize endOfSentenceLikelihood=_endOfSentenceLikelihood - In the implementation block
@property (assign,nonatomic) float silencePosterior;                         //@synthesize silencePosterior=_silencePosterior - In the implementation block
-(long long)trailingSilenceDuration;
-(void)setTrailingSilenceDuration:(long long)arg1 ;
-(long long)wordCount;
-(void)setWordCount:(long long)arg1 ;
-(float)endOfSentenceLikelihood;
-(void)setEndOfSentenceLikelihood:(float)arg1 ;
-(float)silencePosterior;
-(void)setSilencePosterior:(float)arg1 ;
-(id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(float)arg3 silencePosterior:(float)arg4 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PPScoreInterpreter, PPScoreDict;

@interface PPStreamingTopicScorer : NSObject {

	PPScoreInterpreter* _aggregationScorer;
	PPScoreInterpreter* _finalScorer;
	PPScoreDict* _aggregationScoreInputs;
	PPScoreDict* _currentAggResult;

}
@end


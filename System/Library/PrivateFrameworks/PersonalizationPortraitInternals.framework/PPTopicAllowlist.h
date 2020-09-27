/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASCFBurstTrie, PPTrialWrapper;

@interface PPTopicAllowlist : NSObject {

	_PASCFBurstTrie* _allowlistTrie;
	PPTrialWrapper* _trialWrapper;

}
+(id)sharedInstance;
+(id)_keyFor:(id)arg1 of:(id)arg2 ;
-(id)initWithTrialWrapper:(id)arg1 ;
-(void)_loadAssetData;
-(BOOL)shouldBypassAllowlist:(id)arg1 ;
-(BOOL)_topicIsAllowedForClientProcess:(id)arg1 topic:(id)arg2 ;
-(id)indicesOfAllowedTopicsInRecordArray:(id)arg1 clientProcess:(id)arg2 ;
-(id)indicesOfAllowedTopicsInScoredTopicArray:(id)arg1 clientProcess:(id)arg2 ;
-(id)filterTopicDictionary:(id)arg1 clientProcess:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyStatisticCurrentAutocorrections.h>

@class NSMutableDictionary, NSDictionary;

@interface TITypologyStatisticRankCandidatesAccepted : TITypologyStatisticCurrentAutocorrections {

	NSMutableDictionary* _histogram;
	long long _lengthOfSelectedCandidates;
	long long _lengthOfSelectedPredictions;

}

@property (nonatomic,readonly) NSDictionary * histogram;                           //@synthesize histogram=_histogram - In the implementation block
@property (nonatomic,readonly) long long lengthOfSelectedCandidates;               //@synthesize lengthOfSelectedCandidates=_lengthOfSelectedCandidates - In the implementation block
@property (nonatomic,readonly) long long lengthOfSelectedPredictions;              //@synthesize lengthOfSelectedPredictions=_lengthOfSelectedPredictions - In the implementation block
-(id)init;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(id)structuredReport;
-(unsigned long long)rankOfCandidate:(id)arg1 ;
-(void)addLengthOfSelectedCandidate:(id)arg1 ;
-(void)addLengthOfSelectedPrediction:(id)arg1 ;
-(void)countSelectedAutocorrection:(id)arg1 ;
-(void)countSelectedInputString;
-(void)countSelectedInputStringToRejectAutocorrection;
-(BOOL)isCandidatePrediction:(id)arg1 ;
-(void)countSelectedPrediction:(id)arg1 withRank:(unsigned long long)arg2 ;
-(void)countSelectedCandidate:(id)arg1 withRank:(unsigned long long)arg2 ;
-(void)rankAndCountSelectedCandidate:(id)arg1 ;
-(NSDictionary *)histogram;
-(long long)lengthOfSelectedCandidates;
-(long long)lengthOfSelectedPredictions;
@end


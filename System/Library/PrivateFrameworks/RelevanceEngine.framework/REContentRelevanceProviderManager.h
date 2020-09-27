/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REPredictorObserver.h>
#import <libobjc.A.dylib/REMLModelManagerObserver.h>

@class REMLSentimentAnalyzer, NSString;

@interface REContentRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REMLModelManagerObserver> {

	REMLSentimentAnalyzer* _sentimentAnalyzer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_features;
+(Class)_relevanceProviderClass;
-(void)resume;
-(void)pause;
-(void)modelManagerDidUpdateModel:(id)arg1 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(BOOL)_suppportsPortarit;
-(BOOL)_suppportsSentimentAnalysis;
-(id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3 ;
@end


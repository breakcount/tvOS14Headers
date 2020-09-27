/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class NSString;

@interface SNSpeechUtteranceDetector : NSObject <SNAnalyzing> {

	long long _requestType;
	shared_ptr<DSPGraph::Graph>* _graph;

}

@property (nonatomic,readonly) BOOL hardVAD; 
@property (readonly) double decisionDelay; 
@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(id)initWithRequestType:(long long)arg1 ;
-(double)decisionDelay;
-(Box*)resultsBox;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(float)softVAD;
-(BOOL)hardVAD;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NLModelConfiguration, NSDictionary, NLModelImpl, NSData, MLModel, NSObject;

@interface NLModel : NSObject {

	NLModelConfiguration* _configuration;
	NSDictionary* _infoDictionary;
	NLModelImpl* _modelImpl;
	NSData* _data;
	MLModel* _mlModel;
	void* _container;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
+(id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)modelWithData:(id)arg1 error:(id*)arg2 ;
+(id)modelWithMLModel:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)data;
-(NLModelConfiguration *)configuration;
-(unsigned long long)systemVersion;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(id)predictedLabelForString:(id)arg1 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)gazetteer;
-(id)initWithConfiguration:(id)arg1 modelImpl:(id)arg2 ;
-(BOOL)writeMLModelToURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 mlModel:(id)arg2 error:(id*)arg3 ;
-(id)initWithClassifierMLModel:(id)arg1 ;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(id)labelArray;
-(id)embedding;
-(id)embeddingData;
-(id)predictedLabelArraysForTokenArrays:(id)arg1 ;
-(id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(id)sequenceTestResultsWithDataProvider:(id)arg1 ;
-(id)classifierTestResultsWithDataProvider:(id)arg1 ;
-(id)testResultsWithDataProvider:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)writeMLModelToURL:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(id)mlModel;
-(id)testResultsWithDataSet:(id)arg1 ;
@end


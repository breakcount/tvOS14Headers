/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:41:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPCaptionDecoder.h>

@class NSDictionary, NSArray;

@interface CVNLPCaptionDecoderTransformer : CVNLPCaptionDecoder {

	unsigned long long _startID;
	unsigned long long _endID;
	unsigned long long _decoderBatchSize;
	unsigned long long _maxCaptionLen;
	unsigned long long _vocabSize;
	unsigned long long _outputVocabSize;
	NSDictionary* _vocab;
	NSArray* _decoderBlocks;
	unsigned long long _beamSize;
	CVNLPBeamSearchRef _beamSearch;
	CVNLPBeamSearchRef _filterBeamSearch;

}

@property (assign,nonatomic) unsigned long long startID;                       //@synthesize startID=_startID - In the implementation block
@property (assign,nonatomic) unsigned long long endID;                         //@synthesize endID=_endID - In the implementation block
@property (assign,nonatomic) unsigned long long decoderBatchSize;              //@synthesize decoderBatchSize=_decoderBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxCaptionLen;                 //@synthesize maxCaptionLen=_maxCaptionLen - In the implementation block
@property (assign,nonatomic) unsigned long long vocabSize;                     //@synthesize vocabSize=_vocabSize - In the implementation block
@property (assign,nonatomic) unsigned long long outputVocabSize;               //@synthesize outputVocabSize=_outputVocabSize - In the implementation block
@property (nonatomic,retain) NSDictionary * vocab;                             //@synthesize vocab=_vocab - In the implementation block
@property (nonatomic,retain) NSArray * decoderBlocks;                          //@synthesize decoderBlocks=_decoderBlocks - In the implementation block
@property (assign,nonatomic) unsigned long long beamSize;                      //@synthesize beamSize=_beamSize - In the implementation block
@property (assign,nonatomic) CVNLPBeamSearchRef beamSearch;                    //@synthesize beamSearch=_beamSearch - In the implementation block
@property (assign,nonatomic) CVNLPBeamSearchRef filterBeamSearch;              //@synthesize filterBeamSearch=_filterBeamSearch - In the implementation block
-(void)dealloc;
-(id)initWithOptions:(id)arg1 runTimeParams:(id)arg2 ;
-(id)performanceResults;
-(id)computeCaptionForImageWithInputs:(id)arg1 genderOption:(int)arg2 ;
-(void)_loadVocabFile:(id)arg1 ;
-(void)_loadNetwork:(id)arg1 options:(id)arg2 runTimeParams:(id)arg3 ;
-(void)_createBeamSearch:(id)arg1 runTimeParams:(id)arg2 ;
-(NSArray *)decoderBlocks;
-(id)computeCaptionForImageWithInputsImpl:(id)arg1 genderOption:(int)arg2 ;
-(unsigned long long)maxCaptionLen;
-(unsigned long long)startID;
-(unsigned long long)decoderBatchSize;
-(unsigned long long)vocabSize;
-(unsigned long long)endID;
-(NSDictionary *)vocab;
-(void)setStartID:(unsigned long long)arg1 ;
-(void)setEndID:(unsigned long long)arg1 ;
-(void)setDecoderBatchSize:(unsigned long long)arg1 ;
-(void)setMaxCaptionLen:(unsigned long long)arg1 ;
-(void)setVocabSize:(unsigned long long)arg1 ;
-(unsigned long long)outputVocabSize;
-(void)setOutputVocabSize:(unsigned long long)arg1 ;
-(void)setVocab:(NSDictionary *)arg1 ;
-(void)setDecoderBlocks:(NSArray *)arg1 ;
-(unsigned long long)beamSize;
-(void)setBeamSize:(unsigned long long)arg1 ;
-(CVNLPBeamSearchRef)beamSearch;
-(void)setBeamSearch:(CVNLPBeamSearchRef)arg1 ;
-(CVNLPBeamSearchRef)filterBeamSearch;
-(void)setFilterBeamSearch:(CVNLPBeamSearchRef)arg1 ;
@end


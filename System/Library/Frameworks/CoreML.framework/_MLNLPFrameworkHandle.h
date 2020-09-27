/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MLNLPFrameworkHandle : NSObject {

	BOOL _valid;
	/*function pointer*/void* _NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
	/*function pointer*/void* _NLPSequenceModelCreateWithDataImpl;
	/*function pointer*/void* _NLPSequenceModelGetRevisionImpl;
	/*function pointer*/void* _NLPSequenceModelIsRevisionSupportedImpl;
	/*function pointer*/void* _NLPSequenceModelGetCurrentRevisionImpl;
	/*function pointer*/void* _NLPClassifierModelCopyPredictedLabelForTextImpl;
	/*function pointer*/void* _NLPClassifierModelCreateWithDataImpl;
	/*function pointer*/void* _NLPClassifierModelGetRevisionImpl;
	/*function pointer*/void* _NLPClassifierModelIsRevisionSupportedImpl;
	/*function pointer*/void* _NLPClassifierModelGetCurrentRevisionImpl;
	/*function pointer*/void* _NLPGazetteerModelCopyLabelForStringImpl;
	/*function pointer*/void* _NLPGazetteerModelCreateWithDataImpl;
	/*function pointer*/void* _NLPGazetteerModelGetRevisionImpl;
	/*function pointer*/void* _NLPGazetteerModelIsRevisionSupportedImpl;
	/*function pointer*/void* _NLPGazetteerModelGetCurrentRevisionImpl;
	/*function pointer*/void* _NLPEmbeddingModelCopyVectorForStringImpl;
	/*function pointer*/void* _NLPEmbeddingModelCreateWithDataImpl;
	/*function pointer*/void* _NLPEmbeddingModelGetRevisionImpl;
	/*function pointer*/void* _NLPEmbeddingModelIsRevisionSupportedImpl;
	/*function pointer*/void* _NLPEmbeddingModelGetCurrentRevisionImpl;

}

@property (nonatomic,readonly) /*function pointer*/void* NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;              //@synthesize NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl=_NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPSequenceModelCreateWithDataImpl;                                   //@synthesize NLPSequenceModelCreateWithDataImpl=_NLPSequenceModelCreateWithDataImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPSequenceModelGetRevisionImpl;                                      //@synthesize NLPSequenceModelGetRevisionImpl=_NLPSequenceModelGetRevisionImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPSequenceModelIsRevisionSupportedImpl;                              //@synthesize NLPSequenceModelIsRevisionSupportedImpl=_NLPSequenceModelIsRevisionSupportedImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPSequenceModelGetCurrentRevisionImpl;                               //@synthesize NLPSequenceModelGetCurrentRevisionImpl=_NLPSequenceModelGetCurrentRevisionImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPClassifierModelCopyPredictedLabelForTextImpl;                      //@synthesize NLPClassifierModelCopyPredictedLabelForTextImpl=_NLPClassifierModelCopyPredictedLabelForTextImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPClassifierModelCreateWithDataImpl;                                 //@synthesize NLPClassifierModelCreateWithDataImpl=_NLPClassifierModelCreateWithDataImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPClassifierModelGetRevisionImpl;                                    //@synthesize NLPClassifierModelGetRevisionImpl=_NLPClassifierModelGetRevisionImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPClassifierModelIsRevisionSupportedImpl;                            //@synthesize NLPClassifierModelIsRevisionSupportedImpl=_NLPClassifierModelIsRevisionSupportedImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPClassifierModelGetCurrentRevisionImpl;                             //@synthesize NLPClassifierModelGetCurrentRevisionImpl=_NLPClassifierModelGetCurrentRevisionImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPGazetteerModelCopyLabelForStringImpl;                              //@synthesize NLPGazetteerModelCopyLabelForStringImpl=_NLPGazetteerModelCopyLabelForStringImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPGazetteerModelCreateWithDataImpl;                                  //@synthesize NLPGazetteerModelCreateWithDataImpl=_NLPGazetteerModelCreateWithDataImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPGazetteerModelGetRevisionImpl;                                     //@synthesize NLPGazetteerModelGetRevisionImpl=_NLPGazetteerModelGetRevisionImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPGazetteerModelIsRevisionSupportedImpl;                             //@synthesize NLPGazetteerModelIsRevisionSupportedImpl=_NLPGazetteerModelIsRevisionSupportedImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPGazetteerModelGetCurrentRevisionImpl;                              //@synthesize NLPGazetteerModelGetCurrentRevisionImpl=_NLPGazetteerModelGetCurrentRevisionImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPEmbeddingModelCopyVectorForStringImpl;                             //@synthesize NLPEmbeddingModelCopyVectorForStringImpl=_NLPEmbeddingModelCopyVectorForStringImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPEmbeddingModelCreateWithDataImpl;                                  //@synthesize NLPEmbeddingModelCreateWithDataImpl=_NLPEmbeddingModelCreateWithDataImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPEmbeddingModelGetRevisionImpl;                                     //@synthesize NLPEmbeddingModelGetRevisionImpl=_NLPEmbeddingModelGetRevisionImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPEmbeddingModelIsRevisionSupportedImpl;                             //@synthesize NLPEmbeddingModelIsRevisionSupportedImpl=_NLPEmbeddingModelIsRevisionSupportedImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* NLPEmbeddingModelGetCurrentRevisionImpl;                              //@synthesize NLPEmbeddingModelGetCurrentRevisionImpl=_NLPEmbeddingModelGetCurrentRevisionImpl - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                                                      //@synthesize valid=_valid - In the implementation block
+(id)sharedHandle;
-(id)init;
-(BOOL)isValid;
-(const void*)initializeWordTaggingModelWithData:(id)arg1 error:(id*)arg2 ;
-(const void*)initializeSentenceClassifierModelWithData:(id)arg1 error:(id*)arg2 ;
-(const void*)initializeGazetteerModelWithData:(id)arg1 error:(id*)arg2 ;
-(const void*)initializeEmbeddingModelWithData:(id)arg1 error:(id*)arg2 ;
-(id)predictTokensLabelsLocationsLengthsForString:(void*)arg1 inputString:(id)arg2 error:(id*)arg3 ;
-(id)predictLabelsForSentenceString:(void*)arg1 inputString:(id)arg2 error:(id*)arg3 ;
-(id)predictLabelForWordString:(void*)arg1 inputString:(id)arg2 error:(id*)arg3 ;
-(id)predictVectorForString:(void*)arg1 inputString:(id)arg2 error:(id*)arg3 ;
-(/*function pointer*/void*)NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
-(/*function pointer*/void*)NLPSequenceModelCreateWithDataImpl;
-(/*function pointer*/void*)NLPSequenceModelGetRevisionImpl;
-(/*function pointer*/void*)NLPSequenceModelIsRevisionSupportedImpl;
-(/*function pointer*/void*)NLPSequenceModelGetCurrentRevisionImpl;
-(/*function pointer*/void*)NLPClassifierModelCopyPredictedLabelForTextImpl;
-(/*function pointer*/void*)NLPClassifierModelCreateWithDataImpl;
-(/*function pointer*/void*)NLPClassifierModelGetRevisionImpl;
-(/*function pointer*/void*)NLPClassifierModelIsRevisionSupportedImpl;
-(/*function pointer*/void*)NLPClassifierModelGetCurrentRevisionImpl;
-(/*function pointer*/void*)NLPGazetteerModelCopyLabelForStringImpl;
-(/*function pointer*/void*)NLPGazetteerModelCreateWithDataImpl;
-(/*function pointer*/void*)NLPGazetteerModelGetRevisionImpl;
-(/*function pointer*/void*)NLPGazetteerModelIsRevisionSupportedImpl;
-(/*function pointer*/void*)NLPGazetteerModelGetCurrentRevisionImpl;
-(/*function pointer*/void*)NLPEmbeddingModelCopyVectorForStringImpl;
-(/*function pointer*/void*)NLPEmbeddingModelCreateWithDataImpl;
-(/*function pointer*/void*)NLPEmbeddingModelGetRevisionImpl;
-(/*function pointer*/void*)NLPEmbeddingModelIsRevisionSupportedImpl;
-(/*function pointer*/void*)NLPEmbeddingModelGetCurrentRevisionImpl;
@end

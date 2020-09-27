/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARCustomLMBuilder : NSObject {

	unique_ptr<quasar::CustomLMBuilder, std::__1::default_delete<quasar::CustomLMBuilder> >* _customLMBuilder;
	unique_ptr<sdapi::SdapiTokenizer, std::__1::default_delete<sdapi::SdapiTokenizer> >* _tokenizer;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)getFstGrammar:(id)arg1 overrideFolder:(id)arg2 weight:(float)arg3 errorOut:(id*)arg4 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLanguageDetector : NSObject {

	unique_ptr<quasar::LanguageDetector, std::__1::default_delete<quasar::LanguageDetector> >* languageDetector;
	unsigned _featureQueuePriority;

}

@property (assign,nonatomic) unsigned featureQueuePriority;              //@synthesize featureQueuePriority=_featureQueuePriority - In the implementation block
+(void)initialize;
+(vector<std::__1::optional<quasar::Locale>, std::__1::allocator<std::__1::optional<quasar::Locale> > >*)quasarLocalesOfMessages:(id)arg1 ;
+(shared_ptr<const quasar::LDContext>*)updateContext:(const LDContext*)arg1 withMessageLocales:(const vector<std::__1::optional<quasar::Locale>, std::__1::allocator<std::__1::optional<quasar::Locale> > >*)arg2 ;
+(id)localesOfMessages:(id)arg1 ;
-(id)initWithConfigFile:(id)arg1 ;
-(id)initWithConfigFile:(id)arg1 overrides:(id)arg2 ;
-(id)startRequestWith:(unsigned long long)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(unsigned)featureQueuePriority;
-(void)setFeatureQueuePriority:(unsigned)arg1 ;
@end


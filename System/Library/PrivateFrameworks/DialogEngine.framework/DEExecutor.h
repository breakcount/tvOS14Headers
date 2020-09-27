/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSDictionary, DEContext, DEDistribution;

@interface DEExecutor : NSObject {

	BOOL _debug;
	BOOL _test;
	BOOL _resetState;
	BOOL _multiuser;
	BOOL _grounding;
	BOOL _enableUpdates;
	unsigned _randomSeed;
	NSString* _templateDir;
	NSString* _catId;
	NSString* _locale;
	NSDictionary* _parameters;
	NSDictionary* _globalParameters;
	NSString* _pluginName;
	DEContext* _context;
	/*^block*/id _callback;
	NSString* _voiceGender;
	long long _currentTime;
	DEDistribution* _distribution;

}

@property (nonatomic,retain) NSString * templateDir;                       //@synthesize templateDir=_templateDir - In the implementation block
@property (nonatomic,retain) NSString * catId;                             //@synthesize catId=_catId - In the implementation block
@property (nonatomic,retain) NSString * locale;                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSDictionary * globalParameters;              //@synthesize globalParameters=_globalParameters - In the implementation block
@property (nonatomic,retain) NSString * pluginName;                        //@synthesize pluginName=_pluginName - In the implementation block
@property (nonatomic,retain) DEContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id callback;                                    //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) BOOL debug;                                   //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL test;                                    //@synthesize test=_test - In the implementation block
@property (assign,nonatomic) BOOL resetState;                              //@synthesize resetState=_resetState - In the implementation block
@property (assign,nonatomic) BOOL multiuser;                               //@synthesize multiuser=_multiuser - In the implementation block
@property (assign,nonatomic) BOOL grounding;                               //@synthesize grounding=_grounding - In the implementation block
@property (assign,nonatomic) BOOL enableUpdates;                           //@synthesize enableUpdates=_enableUpdates - In the implementation block
@property (nonatomic,retain) NSString * voiceGender;                       //@synthesize voiceGender=_voiceGender - In the implementation block
@property (assign,nonatomic) unsigned randomSeed;                          //@synthesize randomSeed=_randomSeed - In the implementation block
@property (assign,nonatomic) long long currentTime;                        //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) DEDistribution * distribution;                //@synthesize distribution=_distribution - In the implementation block
+(void)initialize;
+(void)preload;
+(/*^block*/id)prepareCallback:(/*^block*/id)arg1 forContext:(Context*)arg2 ;
+(void)executeWithJson:(id)arg1 paramsString:(id)arg2 localeString:(id)arg3 callback:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
+(void)executeWithJson:(id)arg1 callback:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)executeWithJson:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(BOOL)enableUpdates;
-(DEContext *)context;
-(void)setContext:(DEContext *)arg1 ;
-(NSDictionary *)parameters;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)execute;
-(Context*)getContext:(ElapsedTimer)arg1 ;
-(BOOL)debug;
-(void)setDebug:(BOOL)arg1 ;
-(long long)currentTime;
-(void)setCurrentTime:(long long)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(DEDistribution *)distribution;
-(void)setDistribution:(DEDistribution *)arg1 ;
-(BOOL)resetState;
-(void)setTest:(BOOL)arg1 ;
-(BOOL)test;
-(unsigned)randomSeed;
-(void)setRandomSeed:(unsigned)arg1 ;
-(NSString *)pluginName;
-(NSDictionary *)globalParameters;
-(void)setTemplateDir:(NSString *)arg1 ;
-(void)setResetState:(BOOL)arg1 ;
-(NSString *)templateDir;
-(void)setGlobalParameters:(NSDictionary *)arg1 ;
-(void)setMultiuser:(BOOL)arg1 ;
-(void)setGrounding:(BOOL)arg1 ;
-(NSString *)catId;
-(BOOL)multiuser;
-(BOOL)grounding;
-(NSString *)voiceGender;
-(void)updateContext:(Context*)arg1 localePath:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg2 ;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)consumeContextForJson:(Context*)arg1 ;
-(id)consumeContext:(Context*)arg1 localePath:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg2 ;
-(id)executeWithParams:(id)arg1 locale:(id)arg2 ;
-(void)executeWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)executeWithParams:(id)arg1 locale:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setCatId:(NSString *)arg1 ;
-(void)setPluginName:(NSString *)arg1 ;
-(void)setEnableUpdates:(BOOL)arg1 ;
-(void)setVoiceGender:(NSString *)arg1 ;
@end


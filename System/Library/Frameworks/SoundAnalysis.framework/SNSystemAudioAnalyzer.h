/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SNSystemAudioAnalyzerProtocol;
@interface SNSystemAudioAnalyzer : NSObject {

	id<SNSystemAudioAnalyzerProtocol> _impl;

}
+(id)selectAppropriateImplForThisProcess;
+(void)configureNewAnalyzersToComputeInThisProcess:(BOOL)arg1 ;
-(id)init;
-(void)start;
-(void)stop;
-(id)initWithImpl:(id)arg1 ;
-(void)removeRequest:(id)arg1 ;
-(void)removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)addRequestInBackground:(id)arg1 withObserver:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EAREndpointer : NSObject {

	unique_ptr<quasar::HybridEndpointer, std::__1::default_delete<quasar::HybridEndpointer> >* _endpointer;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 modelVersion:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 delaysTrigger:(BOOL)arg2 modelVersion:(id*)arg3 ;
-(BOOL)requestSupportedWithSamplingRate:(unsigned long long)arg1 ;
-(void)updateEndpointerThresholdWithValue:(float)arg1 ;
-(void)updateEndpointerDelayedTriggerSwitch:(BOOL)arg1 ;
-(BOOL)didEndpointWithFeatures:(id)arg1 audioTimestamp:(double)arg2 featuresToLog:(id*)arg3 endpointPosterior:(float*)arg4 extraDelayMs:(int*)arg5 ;
-(id)defaultServerEndpointFeatures;
-(BOOL)acceptEagerResultWithFeatures:(id)arg1 featuresToLog:(id*)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEBloom : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA82)arg3 withInfo:(SCD_Struct_PA83*)arg4 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA83*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA83*)arg1 inputInfo:(SCD_Struct_PA82)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(id)dynamicPropertiesAtTime:(/*function pointer*/void**)arg1 withError:(id*)arg2 ;
-(BOOL)bloomHeliumRender:(id)arg1 withInput:(id)arg2 withRadius:(double)arg3 withBrightness:(double)arg4 withThreshold:(double)arg5 doDarkBloom:(BOOL)arg6 withXScale:(double)arg7 withYScale:(double)arg8 withDoCrop:(BOOL)arg9 withDoClip:(BOOL)arg10 is360:(BOOL)arg11 withInfo:(SCD_Struct_PA83*)arg12 ;
@end


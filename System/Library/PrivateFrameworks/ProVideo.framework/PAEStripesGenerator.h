/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEStripesGenerator : PAEGeneratorDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA83*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInfo:(SCD_Struct_PA83*)arg2 ;
@end


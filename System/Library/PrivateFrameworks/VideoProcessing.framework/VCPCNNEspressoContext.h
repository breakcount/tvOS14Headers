/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPCNNEspressoContext : NSObject {

	void* _espressoContext;

}

@property (nonatomic,readonly) void* espressoContext;              //@synthesize espressoContext=_espressoContext - In the implementation block
+(BOOL)supportGPU;
+(void*)createContextWithForceCPU:(BOOL)arg1 ;
+(void*)sharedEspressoContext:(BOOL)arg1 ;
-(id)initWithForceCPU:(BOOL)arg1 shared:(BOOL)arg2 ;
-(void*)espressoContext;
@end


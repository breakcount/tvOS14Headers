/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPEffectsAnalyzer : NSObject {

	BOOL _hasFaceOrPet;

}
+(BOOL)usePHAssetScene;
-(id)initWithFlagHasFaceOrPet:(BOOL)arg1 ;
-(id)initWithAnalysisResults:(id)arg1 ;
-(int)analyzeAsset:(id)arg1 onDemand:(BOOL)arg2 cancel:(/*^block*/id)arg3 statsFlags:(unsigned long long*)arg4 results:(id*)arg5 ;
@end

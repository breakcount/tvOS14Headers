/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:44 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSMutableArray, NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject {

	NSMutableArray* _originalRequests;
	NSMutableDictionary* _kindToOriginalRequestsMapping;
	NSMutableDictionary* _detectorConfigurationOptions;

}
-(id)init;
-(id)originalRequests;
-(void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2 ;
-(void)addOriginalRequest:(id)arg1 forKind:(unsigned long long)arg2 ;
-(id)detectorConfigurationOptions;
-(void)enumerateOriginalRequestsByKindUsingBlock:(/*^block*/id)arg1 ;
-(id)processingDevice;
-(BOOL)preferBackgroundProcessing;
@end

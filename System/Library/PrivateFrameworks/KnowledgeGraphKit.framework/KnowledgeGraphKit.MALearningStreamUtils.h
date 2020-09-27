/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface KnowledgeGraphKit.MALearningStreamUtils : NSObject {

	 momentClassifier;
	 assetClassifier;

}
+(id)extractFeaturesForMomentNodes:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
+(id)extractFeaturesWithGraph:(id)arg1 mappedAssetFeatures:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)init;
-(id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3 ;
-(id)classifyMomentsWithInputFeatureVectors:(id)arg1 ;
-(id)classifyAssetsWithInputFeatureVectors:(id)arg1 ;
@end


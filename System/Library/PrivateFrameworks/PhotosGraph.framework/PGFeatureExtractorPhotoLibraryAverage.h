/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeatureExtractor.h>

@class MAFeatureExtractor, NSArray;

@interface PGFeatureExtractorPhotoLibraryAverage : PGFeatureExtractor {

	MAFeatureExtractor* _assetFeatureExtractor;
	NSArray* _assetFetchOptionPropertySet;
	NSArray* _featureNames;

}

@property (nonatomic,readonly) NSArray * assetFetchOptionPropertySet;                   //@synthesize assetFetchOptionPropertySet=_assetFetchOptionPropertySet - In the implementation block
@property (nonatomic,readonly) MAFeatureExtractor * assetFeatureExtractor;              //@synthesize assetFeatureExtractor=_assetFeatureExtractor - In the implementation block
@property (nonatomic,readonly) NSArray * featureNames;                                  //@synthesize featureNames=_featureNames - In the implementation block
+(BOOL)preCalculateFeatureVectorWithPhotoLibrary:(id)arg1 assetFeatureExtractor:(id)arg2 assetFetchOptionPropertySet:(id)arg3 error:(id*)arg4 ;
+(id)preCalculatedFloatVector;
+(void)resetPreCalculatedFeatureVector;
+(void)setPreCalculatedFloatVector:(id)arg1 ;
-(id)name;
-(NSArray *)featureNames;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(long long)featureLength;
-(MAFeatureExtractor *)assetFeatureExtractor;
-(NSArray *)assetFetchOptionPropertySet;
-(id)initWithAssetFeatureExtractor:(id)arg1 assetFetchOptionPropertySet:(id)arg2 ;
@end


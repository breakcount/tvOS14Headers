/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class NSCountedSet, NSString;

@interface PPMostCommonFeatureValue : NSObject <MLCustomModel> {

	NSCountedSet* _itemCounts;
	NSString* _featureName;
	NSString* _dominantItemFeatureValueKey;
	NSString* _dominantItemCountFeatureValueKey;

}
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(id)_dominantItem;
-(id)itemCounts;
@end


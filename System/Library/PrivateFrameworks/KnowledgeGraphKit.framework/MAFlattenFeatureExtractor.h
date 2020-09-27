/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MAFeatureExtractor.h>

@class NSString, NSArray;

@interface MAFlattenFeatureExtractor : MAFeatureExtractor {

	NSString* _name;
	NSArray* _featureNames;
	NSArray* _featureExtractors;

}

@property (nonatomic,readonly) NSArray * featureExtractors;              //@synthesize featureExtractors=_featureExtractors - In the implementation block
-(id)name;
-(id)featureNames;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 featureExtractors:(id)arg2 ;
-(id)defaultFloatVectorWithError:(id*)arg1 ;
-(NSArray *)featureExtractors;
@end

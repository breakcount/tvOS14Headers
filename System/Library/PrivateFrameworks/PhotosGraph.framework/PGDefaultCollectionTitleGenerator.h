/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;
@class PHAsset, PHAssetCollection;

@interface PGDefaultCollectionTitleGenerator : PGTitleGenerator {

	BOOL _debug;
	BOOL _forDiagnostics;
	id<PGEventEnrichment> _collection;
	PHAsset* _keyAsset;
	PHAssetCollection* _curatedAssetCollection;

}

@property (nonatomic,readonly) PHAsset * keyAsset;                                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * curatedAssetCollection;              //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,readonly) id<PGEventEnrichment> collection;                        //@synthesize collection=_collection - In the implementation block
@property (assign,getter=isDebug,nonatomic) BOOL debug;                                 //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL forDiagnostics;                                       //@synthesize forDiagnostics=_forDiagnostics - In the implementation block
-(id<PGEventEnrichment>)collection;
-(void)setDebug:(BOOL)arg1 ;
-(PHAsset *)keyAsset;
-(PHAssetCollection *)curatedAssetCollection;
-(id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 ;
-(BOOL)forDiagnostics;
-(void)setForDiagnostics:(BOOL)arg1 ;
-(BOOL)isDebug;
-(void)_generateTitleAndSubtitleWithManager:(id)arg1 result:(/*^block*/id)arg2 ;
@end


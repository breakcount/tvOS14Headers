/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIAssetAttributes, TIAsset, NSMutableSet;

@interface TIAssetVersions : NSObject {

	TIAssetAttributes* _attributes;
	TIAsset* _currentAsset;
	NSMutableSet* _assets;

}

@property (nonatomic,readonly) NSMutableSet * assets;                       //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic) TIAsset * currentAsset;                        //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,readonly) TIAssetAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(BOOL)isEmpty;
-(TIAssetAttributes *)attributes;
-(id)recursiveDescription;
-(id)initWithAttributes:(id)arg1 ;
-(NSMutableSet *)assets;
-(BOOL)purgeAsset:(id)arg1 ;
-(void)addAsset:(id)arg1 ;
-(void)setCurrentAsset:(TIAsset *)arg1 ;
-(TIAsset *)currentAsset;
-(id)assetContentItemsMatching:(id)arg1 ;
-(id)purgeableAssets;
@end

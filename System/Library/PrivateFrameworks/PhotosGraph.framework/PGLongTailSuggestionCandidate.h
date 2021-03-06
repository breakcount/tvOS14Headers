/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAsset;

@interface PGLongTailSuggestionCandidate : NSObject {

	PHAsset* _asset;
	unsigned long long _score;

}

@property (nonatomic,readonly) PHAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) unsigned long long score;              //@synthesize score=_score - In the implementation block
-(unsigned long long)score;
-(PHAsset *)asset;
-(id)initWithAsset:(id)arg1 score:(unsigned long long)arg2 ;
-(BOOL)isValidWithMeNodeLocalIdentifier:(id)arg1 ;
@end


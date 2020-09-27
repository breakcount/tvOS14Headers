/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAsset, AVNavigationMarkersGroup;

@interface _AVChapterInfo : NSObject {

	AVAsset* _asset;
	AVNavigationMarkersGroup* _navigationMarkersGroup;

}

@property (__weak) AVAsset * asset;                                                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) AVNavigationMarkersGroup * navigationMarkersGroup;              //@synthesize navigationMarkersGroup=_navigationMarkersGroup - In the implementation block
-(AVAsset *)asset;
-(id)initWithAsset:(id)arg1 ;
-(void)setAsset:(AVAsset *)arg1 ;
-(AVNavigationMarkersGroup *)navigationMarkersGroup;
@end


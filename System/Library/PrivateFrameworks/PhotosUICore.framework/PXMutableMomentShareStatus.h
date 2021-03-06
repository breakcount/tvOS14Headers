/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:11 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXMutableMomentShareStatus <NSObject>
@property (nonatomic,retain) id<PXDisplayMomentShare> momentShare; 
@property (nonatomic,retain) id<PXDisplayAssetFetchResult> copyingAssetsFetchResult; 
@property (nonatomic,retain) id<PXDisplayAssetFetchResult> copiedAssetsFetchResult; 
@property (nonatomic,retain) id<PXDisplayAssetFetchResult> allAssetsFetchResult; 
@property (nonatomic,retain) id<PXSectionedFetchResult> participantsFetchResult; 
@required
-(id<PXDisplayMomentShare>)momentShare;
-(void)setMomentShare:(id)arg1;
-(id<PXSectionedFetchResult>)participantsFetchResult;
-(id<PXDisplayAssetFetchResult>)copyingAssetsFetchResult;
-(void)setCopyingAssetsFetchResult:(id)arg1;
-(id<PXDisplayAssetFetchResult>)copiedAssetsFetchResult;
-(void)setCopiedAssetsFetchResult:(id)arg1;
-(id<PXDisplayAssetFetchResult>)allAssetsFetchResult;
-(void)setAllAssetsFetchResult:(id)arg1;
-(void)setParticipantsFetchResult:(id)arg1;

@end


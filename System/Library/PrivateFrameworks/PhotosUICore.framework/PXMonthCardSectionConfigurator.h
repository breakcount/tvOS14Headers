/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXCuratedLibraryCardSectionConfigurator.h>

@class PXMonthsAssetsSectionHeaderLayoutSpec;

@interface PXMonthCardSectionConfigurator : PXCuratedLibraryCardSectionConfigurator {

	PXMonthsAssetsSectionHeaderLayoutSpec* _floatingHeaderSpec;

}
+(long long)zoomLevel;
-(id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2 ;
-(void)configureAssetSectionLayout:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2 ;
-(id)createCardSpecWithExtendedTraitCollection:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:55 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PGLocationTitleUtility : NSObject
+(void)generateBusinessItemLocationWithOptions:(id)arg1 result:(/*^block*/id)arg2 ;
+(void)generateLocationTitleWithOptions:(id)arg1 result:(/*^block*/id)arg2 ;
+(BOOL)_containsAmusementParkPOIFromMomentNodes:(id)arg1 ;
+(void)generateLocationTitleForTripWithMomentNodes:(id)arg1 result:(/*^block*/id)arg2 ;
+(void)generateHighlightLocationTitleForTripWithMomentNodes:(id)arg1 lineBreakBehavior:(unsigned long long)arg2 result:(/*^block*/id)arg3 ;
+(id)_filteredAddressNodesWithAddressNodes:(id)arg1 momentNodes:(id)arg2 incompleteLocationResolver:(id)arg3 filterSignificantLocationsOption:(unsigned long long)arg4 ;
+(id)_filteredAOINodesForAddressNodes:(id)arg1 aoiTitleMaximumLength:(unsigned long long)arg2 ;
+(id)_commonAOIComponentsForMomentNodes:(id)arg1 addressNodes:(id)arg2 aoiDisplayType:(unsigned long long)arg3 containsAmusementParkPOI:(BOOL)arg4 ;
+(id)_aoiSubsetsFromAOI:(id)arg1 idx:(unsigned long long)arg2 currentSubset:(id)arg3 subsetSize:(unsigned long long)arg4 ;
+(id)_aoiSubsetsFromAOI:(id)arg1 maxSubsetSize:(unsigned long long)arg2 ;
+(float)_weightForAreaNode:(id)arg1 withAddressNodes:(id)arg2 ;
+(id)_sortedAOINodeCombinationsForCombinations:(id)arg1 aoiNodesToAddressNodesMapTable:(id)arg2 assetCountByAddressNodeIdentifier:(id)arg3 ;
+(id)_filteredAOINodeCombinationsForCombinations:(id)arg1 minSize:(unsigned long long)arg2 maxSize:(unsigned long long)arg3 maxTitleLength:(unsigned long long)arg4 minNumberOfAssets:(unsigned long long)arg5 aoiNodesToAddressNodesMapTable:(id)arg6 assetCountByAddressNodeIdentifier:(id)arg7 ;
+(id)_commonCityTitleComponentsFromMomentNodes:(id)arg1 remainingAddressNodes:(id)arg2 ignoredAddressNodes:(id)arg3 incompleteLocationResolver:(id)arg4 ;
+(id)_beautifiedLocationStringWithTitleComponents:(id)arg1 momentNodes:(id)arg2 lineBreakBehavior:(unsigned long long)arg3 keyAssetAddressNode:(id)arg4 curationAddressNodes:(id)arg5 isMatchingKeyAsset:(BOOL*)arg6 useDistrict:(BOOL)arg7 allowFamilyHome:(BOOL)arg8 showAllCities:(BOOL)arg9 ;
+(id)_localizedStringForTwoLocationsWithFirstComponentForTitle:(id)arg1 secondComponentForTitle:(id)arg2 firstLocation:(id)arg3 otherLocation:(id)arg4 ;
+(id)_localizedStringForMultipleLocationsWithFirstComponentForTitle:(id)arg1 secondComponentForTitle:(id)arg2 firstLocation:(id)arg3 otherLocation:(id)arg4 ;
+(id)_locationStringWithDistrictsFromTitleComponents:(id)arg1 momentNodes:(id)arg2 lineBreakBehavior:(unsigned long long)arg3 allowFamilyHome:(BOOL)arg4 ;
+(BOOL)_titleComponentsAreInSameSupersetCity:(id)arg1 graph:(id)arg2 ;
+(id)_firstComponentInTimeFromComponents:(id)arg1 momentNodes:(id)arg2 curationAddressNodes:(id)arg3 allowFamilyHome:(BOOL)arg4 ;
+(id)_sortedComponentsFromComponents:(id)arg1 ;
+(id)_titleWithLineBreakBehavior:(unsigned long long)arg1 forTitle:(id)arg2 titleComponents:(id)arg3 ;
+(id)_twoPartLocationTitleWithFirstPartTitle:(id)arg1 withDimension:(unsigned long long)arg2 usedFirstPartLocationNode:(id)arg3 addressNode:(id)arg4 ;
+(id)beautifiedLocationNodeStringWithPlaceNode:(id)arg1 ;
+(id)_peopleLocationFromAddressNode:(id)arg1 ;
@end


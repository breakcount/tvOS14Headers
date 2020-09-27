/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol PXPlacesGeotaggedItemDataSource <NSObject>
@property (__weak) id<PXPlacesGeotaggedItemDataSourceDelegate> delegate; 
@property (readonly) NSSet * allItems; 
@property (nonatomic,readonly) long long numberOfItems; 
@required
-(id<PXPlacesGeotaggedItemDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)numberOfItems;
-(NSSet *)allItems;
-(id)findItemsInMapRect:(SCD_Struct_PX2)arg1;
-(SCD_Struct_PX2*)minimalEncompassingMapRect;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHCatalogueViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"
#import "TVHMediaLibraryTabBarItemViewController-Protocol.h"

@class NSSet, NSString, TVHCatalogueViewController, TVHMoviesDataStore;

@interface TVHMoviesTabBarItemViewController : TVHMediaEntitiesFetchViewController <TVHCatalogueViewControllerDelegate, TVHMediaEntitiesFetchViewControllerDelegate, TVHMediaLibraryTabBarItemViewController>
{
    TVHMoviesDataStore *_dataStore;	// 8 = 0x8
    TVHCatalogueViewController *_catalogueViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010006832c
@property(retain, nonatomic) TVHCatalogueViewController *catalogueViewController; // @synthesize catalogueViewController=_catalogueViewController;
@property(retain, nonatomic) TVHMoviesDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void)_updateDataStoreWithFetchControllerResultSet:(id)arg1;	// IMP=0x0000000100068278
- (void)catalogViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x00000001000681a8
- (void)catalogViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x0000000100067eb4
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x0000000100067ea4
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x0000000100067d90
- (void)didLoseSelection;	// IMP=0x0000000100067d84
- (void)didReceiveSelection;	// IMP=0x0000000100067d78
@property(readonly, nonatomic) unsigned long long selectedMediaCategoryType;
@property(readonly, copy, nonatomic) NSSet *mediaCategoryTypes;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x0000000100067bb4
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x0000000100067b2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHImageDeckListViewController.h"

@class TVHCollectionViewDiffableDataSource, TVHPhotosMainListViewDataSource;

@interface TVHPhotosMainListViewController : TVHImageDeckListViewController
{
    TVHPhotosMainListViewDataSource *_dataSource;	// 8 = 0x8
    TVHCollectionViewDiffableDataSource *_diffableDataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100067530
@property(retain, nonatomic) TVHCollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(readonly, nonatomic) TVHPhotosMainListViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)_configureCell:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001000673ec
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchDescriptorForIdentifier:(id)arg2;	// IMP=0x0000000100067314
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchIdentifierForIndexPath:(id)arg2;	// IMP=0x0000000100067308
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100067054
- (void)viewDidLoad;	// IMP=0x0000000100066e38
- (void)updateWithPhotoPlaylistsFetchResponse:(id)arg1;	// IMP=0x0000000100066dcc
- (id)initWithMediaLibrary:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000100066d34
- (id)initWithMediaLibrary:(id)arg1 listViewLayout:(id)arg2;	// IMP=0x0000000100066cac
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x0000000100066c24

@end


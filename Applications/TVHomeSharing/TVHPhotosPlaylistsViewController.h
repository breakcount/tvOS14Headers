//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesGridViewControllerDelegate-Protocol.h"

@class NSString, TVHMediaEntitiesGridDataSource, TVHMediaEntitiesGridViewController;

@interface TVHPhotosPlaylistsViewController : TVHMediaEntitiesFetchViewController <TVHMediaEntitiesFetchViewControllerDelegate, TVHMediaEntitiesGridViewControllerDelegate>
{
    unsigned long long _displayType;	// 8 = 0x8
    TVHMediaEntitiesGridViewController *_gridViewController;	// 16 = 0x10
    TVHMediaEntitiesGridDataSource *_gridDataSource;	// 24 = 0x18
    struct CGSize _cellSize;	// 32 = 0x20
}

+ (id)_titleForDisplayType:(unsigned long long)arg1 andSourceFolder:(id)arg2;	// IMP=0x0000000100071a2c
+ (id)_noContentErrorMessageForMode:(unsigned long long)arg1;	// IMP=0x0000000100071940
- (void).cxx_destruct;	// IMP=0x0000000100071ce4
@property(retain, nonatomic) TVHMediaEntitiesGridDataSource *gridDataSource; // @synthesize gridDataSource=_gridDataSource;
@property(retain, nonatomic) TVHMediaEntitiesGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
- (void)_updateWithFetchControllerResultSet:(id)arg1;	// IMP=0x0000000100071b50
- (void)mediaEntitiesGridViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x00000001000716b0
- (void)mediaEntitiesGridViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x00000001000715f8
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x00000001000715e8
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x0000000100071390
- (id)_initWithMediaLibrary:(id)arg1 displayType:(unsigned long long)arg2 sourceFolder:(id)arg3 sourceFoldersFetchContext:(id)arg4;	// IMP=0x0000000100071048
- (id)initWithMediaLibrary:(id)arg1 displayType:(unsigned long long)arg2 sourceFolder:(id)arg3 sourceFoldersFetchContext:(id)arg4;	// IMP=0x0000000100070fc0
- (id)initWithMediaLibrary:(id)arg1 displayType:(unsigned long long)arg2;	// IMP=0x0000000100070fac
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x0000000100070f24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


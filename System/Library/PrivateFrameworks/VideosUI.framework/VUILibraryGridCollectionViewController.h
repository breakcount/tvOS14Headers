/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>
#import <libobjc.A.dylib/VUIFamilySharingContentProtocol.h>

@protocol VUILibraryGridCollectionViewControllerDelegate;
@class NSMutableDictionary, VUICollectionHeaderView, VUIFamilyMember, UIBarButtonItem, NSString, VUIMediaEntitiesDataSource, VUIMediaEntityFetchRequest, UICollectionViewCell, VUIViewControllerContentPresenter, UICollectionViewDiffableDataSource, NSArray, VUIMediaEntity, NSIndexPath, NSDictionary;

@interface VUILibraryGridCollectionViewController : UICollectionViewController <VUILibraryDataSourceDelegate, VUIFamilySharingContentProtocol> {

	BOOL _requiresRelayout;
	CGSize _cellSize;
	NSMutableDictionary* _cellMetrics;
	VUICollectionHeaderView* _sizingHeaderView;
	BOOL _hideLockupTitles;
	BOOL _forceBackButton;
	BOOL _waitingForFetch;
	VUIFamilyMember* _familyMember;
	id<VUILibraryGridCollectionViewControllerDelegate> _delegate;
	long long _gridFilter;
	long long _gridStyle;
	long long _gridType;
	UIBarButtonItem* _libraryBarButton;
	NSString* _pageType;
	VUIMediaEntitiesDataSource* _entitiesDataSource;
	VUIMediaEntityFetchRequest* _fetchRequest;
	UICollectionViewCell* _sizingCell;
	double _cellWidth;
	UIBarButtonItem* _currentNavBarButtonItem;
	VUIViewControllerContentPresenter* _contentPresenter;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	NSArray* _mediaEntities;
	VUIMediaEntity* _currentlySelectedMediaEntity;
	NSIndexPath* _indexPathForLastFocusedItem;
	NSDictionary* _artworkInfoDictionary;

}

@property (nonatomic,retain) VUIMediaEntitiesDataSource * entitiesDataSource;                                 //@synthesize entitiesDataSource=_entitiesDataSource - In the implementation block
@property (nonatomic,retain) VUIMediaEntityFetchRequest * fetchRequest;                                       //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * sizingCell;                                               //@synthesize sizingCell=_sizingCell - In the implementation block
@property (assign,nonatomic) double cellWidth;                                                                //@synthesize cellWidth=_cellWidth - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * currentNavBarButtonItem;                                       //@synthesize currentNavBarButtonItem=_currentNavBarButtonItem - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                            //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                         //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (assign,nonatomic) BOOL waitingForFetch;                                                            //@synthesize waitingForFetch=_waitingForFetch - In the implementation block
@property (nonatomic,retain) NSArray * mediaEntities;                                                         //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,retain) VUIMediaEntity * currentlySelectedMediaEntity;                                   //@synthesize currentlySelectedMediaEntity=_currentlySelectedMediaEntity - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathForLastFocusedItem;                                       //@synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem - In the implementation block
@property (nonatomic,retain) NSDictionary * artworkInfoDictionary;                                            //@synthesize artworkInfoDictionary=_artworkInfoDictionary - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryGridCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long gridFilter;                                                            //@synthesize gridFilter=_gridFilter - In the implementation block
@property (assign,nonatomic) long long gridStyle;                                                             //@synthesize gridStyle=_gridStyle - In the implementation block
@property (assign,nonatomic) long long gridType;                                                              //@synthesize gridType=_gridType - In the implementation block
@property (assign,nonatomic) BOOL hideLockupTitles;                                                           //@synthesize hideLockupTitles=_hideLockupTitles - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * libraryBarButton;                                              //@synthesize libraryBarButton=_libraryBarButton - In the implementation block
@property (assign,nonatomic) BOOL forceBackButton;                                                            //@synthesize forceBackButton=_forceBackButton - In the implementation block
@property (nonatomic,retain) NSString * pageType;                                                             //@synthesize pageType=_pageType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VUIFamilyMember * familyMember;                                                  //@synthesize familyMember=_familyMember - In the implementation block
-(void)dealloc;
-(id<VUILibraryGridCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VUILibraryGridCollectionViewControllerDelegate>)arg1 ;
-(VUIMediaEntityFetchRequest *)fetchRequest;
-(void)setFetchRequest:(VUIMediaEntityFetchRequest *)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(NSString *)pageType;
-(void)setPageType:(NSString *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(VUIFamilyMember *)familyMember;
-(void)setFamilyMember:(VUIFamilyMember *)arg1 ;
-(NSIndexPath *)indexPathForLastFocusedItem;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(NSArray *)mediaEntities;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setGridType:(long long)arg1 ;
-(void)setGridStyle:(long long)arg1 ;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(void)dataSourceDidFinishFetchingArtwork:(id)arg1 ;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(void)_updateNavigationBarPadding;
-(long long)gridStyle;
-(id)_createDiffableDataSourceSnapshot;
-(void)_startPlaybackWithMediaItem:(id)arg1 ;
-(double)cellWidth;
-(void)setCellWidth:(double)arg1 ;
-(UICollectionViewCell *)sizingCell;
-(void)setSizingCell:(UICollectionViewCell *)arg1 ;
-(long long)gridType;
-(void)_updateCurrentViewIfNeeded;
-(void)_applySnapshotFromEntitiesAndAnimateDifferences:(BOOL)arg1 ;
-(id)_createCollectionView;
-(void)_addPlayPauseHandler;
-(VUIMediaEntitiesDataSource *)entitiesDataSource;
-(id)_createDiffableDataSource;
-(void)setWaitingForFetch:(BOOL)arg1 ;
-(void)setArtworkInfoDictionary:(NSDictionary *)arg1 ;
-(void)_applyInitialSnapshot;
-(void)_updateVisibleCellsWithArtwork;
-(double)_computeBottomMargin;
-(void)_configureSizingCellForItemAtIndexPath:(id)arg1 ;
-(BOOL)waitingForFetch;
-(void)_tvOSHandleCellSelectionAtIndexPath:(id)arg1 ;
-(void)_updateLayoutForSize:(CGSize)arg1 ;
-(void)_playPausePressed:(id)arg1 ;
-(void)_showExtrasForMediaItem:(id)arg1 ;
-(id)_createCollectionViewFlowLayout;
-(NSDictionary *)artworkInfoDictionary;
-(id)_getEntityIdentifiersFromEntities;
-(void)updateWithLatestMediaEntities:(id)arg1 ;
-(long long)gridFilter;
-(void)setGridFilter:(long long)arg1 ;
-(BOOL)hideLockupTitles;
-(void)setHideLockupTitles:(BOOL)arg1 ;
-(UIBarButtonItem *)libraryBarButton;
-(void)setLibraryBarButton:(UIBarButtonItem *)arg1 ;
-(BOOL)forceBackButton;
-(void)setForceBackButton:(BOOL)arg1 ;
-(void)setEntitiesDataSource:(VUIMediaEntitiesDataSource *)arg1 ;
-(UIBarButtonItem *)currentNavBarButtonItem;
-(void)setCurrentNavBarButtonItem:(UIBarButtonItem *)arg1 ;
-(VUIMediaEntity *)currentlySelectedMediaEntity;
-(void)setCurrentlySelectedMediaEntity:(VUIMediaEntity *)arg1 ;
-(void)setIndexPathForLastFocusedItem:(NSIndexPath *)arg1 ;
@end


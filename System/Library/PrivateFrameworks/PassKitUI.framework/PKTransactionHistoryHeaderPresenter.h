/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKObjectDownloader, PKPaymentService, UICollectionViewCell, UIImage, PKMapsSnapshotManager, PKPeerPaymentContactResolver, UIVisualEffect, UIColor, NSString;

@interface PKTransactionHistoryHeaderPresenter : NSObject <PKDashboardItemPresenter> {

	PKObjectDownloader* _fileDownloader;
	PKPaymentService* _paymentService;
	UICollectionViewCell* _templateCell;
	UIImage* _logoImage;
	UIImage* _logoBackgroundImage;
	UIImage* _heroImage;
	UIImage* _mapsPlaceholderImage;
	BOOL _hasNetworkAccess;
	PKMapsSnapshotManager* _snapshotManager;
	PKPeerPaymentContactResolver* _contactResolver;
	UIVisualEffect* _overlayEffect;
	UIColor* _shadowColor;

}

@property (nonatomic,retain) PKMapsSnapshotManager * snapshotManager;                     //@synthesize snapshotManager=_snapshotManager - In the implementation block
@property (nonatomic,retain) PKPeerPaymentContactResolver * contactResolver;              //@synthesize contactResolver=_contactResolver - In the implementation block
@property (nonatomic,retain) UIVisualEffect * overlayEffect;                              //@synthesize overlayEffect=_overlayEffect - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                       //@synthesize shadowColor=_shadowColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(Class)itemClass;
-(id)mapsPlaceholderImage;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(PKPeerPaymentContactResolver *)contactResolver;
-(void)setContactResolver:(PKPeerPaymentContactResolver *)arg1 ;
-(PKMapsSnapshotManager *)snapshotManager;
-(void)setSnapshotManager:(PKMapsSnapshotManager *)arg1 ;
-(void)setOverlayEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)overlayEffect;
-(id)_installmentProductHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_merchantHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_peerPaymentHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_transactionGroupHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_transactionTypeHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_configureInstallmentProductHeaderCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)_configurePeerPaymentHeaderCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureCategoryHeaderCell:(id)arg1 forItem:(id)arg2 isUpdate:(BOOL)arg3 ;
-(void)_configureTransactionTypeHeaderCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureMerchantHeaderCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(id)_backgroundImageFromLogoImage:(id)arg1 ;
-(void)_updateMerchantHeaderImagesOnCell:(id)arg1 item:(id)arg2 ;
-(void)_downloadLogoForItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end


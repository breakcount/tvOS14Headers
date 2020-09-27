/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol MKMapInteractionControlsViewDelegate;
@class _MKInteractionControlsBackgroundView, NSArray, _MKMapInteractionControlAction, UICollectionView, UICollectionViewFlowLayout, MKMapView, NSLayoutConstraint, _MKInteractionControlsLegalButton, NSString;

@interface _MKMapInteractionControlsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {

	_MKInteractionControlsBackgroundView* _backgroundView;
	NSArray* _actions;
	_MKMapInteractionControlAction* _preferredFocusedAction;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	MKMapView* _mapView;
	NSLayoutConstraint* _widthConstraint;
	_MKInteractionControlsLegalButton* _legalButton;
	id<MKMapInteractionControlsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) MKMapView * mapView;                                            //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) id<MKMapInteractionControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) _MKMapInteractionControlAction * preferredFocusedAction;               //@synthesize preferredFocusedAction=_preferredFocusedAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MKMapInteractionControlsViewDelegate>)delegate;
-(void)setDelegate:(id<MKMapInteractionControlsViewDelegate>)arg1 ;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setPreferredFocusedAction:(_MKMapInteractionControlAction *)arg1 ;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(void)_showLegalInformation:(id)arg1 ;
-(void)setFocusedAction:(id)arg1 ;
-(_MKMapInteractionControlAction *)preferredFocusedAction;
@end


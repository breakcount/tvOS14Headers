/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKTableViewController.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol GEOTransitLineItem, MKTransitAttributionViewControllerDelegate;
@class MKMapItem, NSString;

@interface MKTransitAttributionViewController : _MKTableViewController <GEOResourceManifestTileGroupObserver, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol> {

	BOOL _isAttributionURLAvailable;
	MKMapItem* _mapItem;
	id<GEOTransitLineItem> _lineItem;
	id<MKTransitAttributionViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) id<GEOTransitLineItem> lineItem;                                             //@synthesize lineItem=_lineItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitAttributionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
-(void)dealloc;
-(id<MKTransitAttributionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKTransitAttributionViewControllerDelegate>)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)_attribution;
-(id)initWithMapItem:(id)arg1 ;
-(void)_commonInit;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)_transitInfoUpdated;
-(void)setLineItem:(id<GEOTransitLineItem>)arg1 ;
-(id<GEOTransitLineItem>)lineItem;
-(BOOL)_hasAttribution;
-(id)_attributionCell;
-(void)_presentTransitAttributionDetails;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(id)initWithTransitLineItem:(id)arg1 ;
@end


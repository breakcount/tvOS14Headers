/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol GEOEncyclopedicInfo, MKPlaceCardEncyclopedicControllerDelegate;
@class MKPlaceTextBlockCell, NSMutableArray, NSString;

@interface MKPlaceEncyclopedicViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _textBlockExpanded;
	MKPlaceTextBlockCell* _textCell;
	NSMutableArray* _factoidCells;
	id<GEOEncyclopedicInfo> _encyclopedicInfo;
	id<MKPlaceCardEncyclopedicControllerDelegate> _encyclopedicControllerDelegate;

}

@property (nonatomic,retain) id<GEOEncyclopedicInfo> encyclopedicInfo;                                                         //@synthesize encyclopedicInfo=_encyclopedicInfo - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardEncyclopedicControllerDelegate> encyclopedicControllerDelegate;              //@synthesize encyclopedicControllerDelegate=_encyclopedicControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)_updateViews;
-(id)_textBlockTitle;
-(void)_viewEncyclopedicContent;
-(id)_factoids;
-(id)_textBlockText;
-(id<MKPlaceCardEncyclopedicControllerDelegate>)encyclopedicControllerDelegate;
-(void)setEncyclopedicInfo:(id<GEOEncyclopedicInfo>)arg1 ;
-(void)setEncyclopedicControllerDelegate:(id<MKPlaceCardEncyclopedicControllerDelegate>)arg1 ;
@end

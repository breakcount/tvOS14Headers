/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@class NSArray, MKPlaceSectionRowView, MKOverallRatingHeaderView, UIStackView, NSString;

@interface MKAppleRatingsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {

	NSArray* _ratingCategories;
	MKPlaceSectionRowView* _containerView;
	MKOverallRatingHeaderView* _overallHeaderView;
	UIStackView* _ratingCategoryStackView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(id)initWithAppleRatings:(id)arg1 ;
@end


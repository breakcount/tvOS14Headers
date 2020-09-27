/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionItemView.h>

@class UILabel, GEOAppleRating, NSAttributedString, NSString;

@interface MKOverallRatingHeaderView : MKPlaceSectionItemView {

	UILabel* _overallPercentageLabel;
	UILabel* _thumbsRecommendedLabel;
	UILabel* _numberOfPeopleLabel;
	GEOAppleRating* _overallRating;

}

@property (nonatomic,readonly) NSAttributedString * overallPercentageString; 
@property (nonatomic,readonly) NSString * numberOfPeopleString; 
@property (nonatomic,retain) GEOAppleRating * overallRating;                              //@synthesize overallRating=_overallRating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_contentSizeDidChange;
-(void)setOverallRating:(GEOAppleRating *)arg1 ;
-(void)_updateContent;
-(NSAttributedString *)overallPercentageString;
-(id)recommendedString;
-(NSString *)numberOfPeopleString;
-(GEOAppleRating *)overallRating;
@end


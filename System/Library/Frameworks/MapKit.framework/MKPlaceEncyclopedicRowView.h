/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class NSMutableArray, UILayoutGuide, NSArray;

@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView {

	NSMutableArray* _factoidViews;
	UILayoutGuide* _insetMetricGuide;
	UILayoutGuide* _leftMetricGuide;
	UILayoutGuide* _rightMetricGuide;
	unsigned long long _columnCount;
	BOOL _isStandAlone;
	NSArray* _items;
	NSMutableArray* _labelConstraints;

}

@property (nonatomic,retain) NSArray * items;                                                       //@synthesize items=_items - In the implementation block
@property (getter=factoidViewsInARow,nonatomic,readonly) NSArray * factoidViewsInARow; 
@property (nonatomic,retain) NSMutableArray * labelConstraints;                                     //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (assign,nonatomic) BOOL isStandAlone;                                                     //@synthesize isStandAlone=_isStandAlone - In the implementation block
-(NSArray *)items;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)_contentSizeDidChange;
-(void)refreshContent:(BOOL)arg1 ;
-(void)refreshColumnCount;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(NSMutableArray *)labelConstraints;
-(void)setLabelConstraints:(NSMutableArray *)arg1 ;
-(BOOL)isStandAlone;
-(void)addWidthAndSideSpacingConstraintsForLabels;
-(NSArray *)factoidViewsInARow;
-(void)setIsStandAlone:(BOOL)arg1 ;
@end


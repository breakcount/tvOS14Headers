/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLMenuHeaderView.h>

@class _TVLSegmentedControl, NSArray;

@interface TVLTabHeaderView : TVLMenuHeaderView {

	_TVLSegmentedControl* _segmentedControl;

}

@property (nonatomic,retain) _TVLSegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,copy) NSArray * tabTitles; 
@property (assign,nonatomic) long long selectedIndex; 
-(void)setSelectedIndex:(long long)arg1 ;
-(long long)selectedIndex;
-(_TVLSegmentedControl *)segmentedControl;
-(void)layoutSubviews;
-(void)setSegmentedControl:(_TVLSegmentedControl *)arg1 ;
-(id)initWithHeaderElement:(id)arg1 ;
-(NSArray *)tabTitles;
-(void)setTabTitles:(NSArray *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, TVPlaybackProgressBarBackgroundMask, NSArray;

@interface TVProgressBarView : UIView {

	UIView* _backgroundFillView;
	TVPlaybackProgressBarBackgroundMask* _fillMask;
	UIView* _barView;
	double _minProgress;
	double _maxProgress;
	double _minPlayheadLocation;
	double _maxPlayheadLocation;

}

@property (nonatomic,readonly) UIView * barView;                      //@synthesize barView=_barView - In the implementation block
@property (assign,nonatomic) double minPlayheadLocation;              //@synthesize minPlayheadLocation=_minPlayheadLocation - In the implementation block
@property (assign,nonatomic) double maxPlayheadLocation;              //@synthesize maxPlayheadLocation=_maxPlayheadLocation - In the implementation block
@property (nonatomic,copy) NSArray * adMarkers; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)setAdMarkers:(NSArray *)arg1 ;
-(NSArray *)adMarkers;
-(id)initWithBarView:(id)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 barView:(id)arg2 ;
-(double)maxPlayheadLocation;
-(void)setMinPlayheadLocation:(double)arg1 maxPlayheadLocation:(double)arg2 ;
-(double)minPlayheadLocation;
-(void)setMinProgress:(double)arg1 maxProgress:(double)arg2 animated:(BOOL)arg3 ;
-(void)setMinPlayheadLocation:(double)arg1 ;
-(void)setMaxPlayheadLocation:(double)arg1 ;
-(UIView *)barView;
@end


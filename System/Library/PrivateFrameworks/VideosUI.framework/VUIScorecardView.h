/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VUIScorecardViewDelegate;
@class VUIScoreboardLayout, NSArray, UIImage;

@interface VUIScorecardView : UIView {

	BOOL _didCalculatedSize;
	BOOL _delegateRespondsToBackgroundImageForScorecardViewMaterial;
	BOOL _delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;
	id<VUIScorecardViewDelegate> _delegate;
	VUIScoreboardLayout* _scoreboardLayout;
	double _interitemSpacing;
	NSArray* _rowScoreValueSizes;
	NSArray* _columnWidths;
	NSArray* _rowHeights;
	UIImage* _darkMaterialImage;
	CGSize _scorecardSize;

}

@property (assign,nonatomic) BOOL didCalculatedSize;                                                           //@synthesize didCalculatedSize=_didCalculatedSize - In the implementation block
@property (assign,nonatomic) CGSize scorecardSize;                                                             //@synthesize scorecardSize=_scorecardSize - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                                          //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,retain) NSArray * rowScoreValueSizes;                                                     //@synthesize rowScoreValueSizes=_rowScoreValueSizes - In the implementation block
@property (nonatomic,retain) NSArray * columnWidths;                                                           //@synthesize columnWidths=_columnWidths - In the implementation block
@property (nonatomic,retain) NSArray * rowHeights;                                                             //@synthesize rowHeights=_rowHeights - In the implementation block
@property (nonatomic,retain) UIImage * darkMaterialImage;                                                      //@synthesize darkMaterialImage=_darkMaterialImage - In the implementation block
@property (assign,nonatomic) BOOL delegateRespondsToBackgroundImageForScorecardViewMaterial;                   //@synthesize delegateRespondsToBackgroundImageForScorecardViewMaterial=_delegateRespondsToBackgroundImageForScorecardViewMaterial - In the implementation block
@property (assign,nonatomic) BOOL delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;              //@synthesize delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex=_delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex - In the implementation block
@property (assign,nonatomic,__weak) id<VUIScorecardViewDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VUIScoreboardLayout * scoreboardLayout;                                           //@synthesize scoreboardLayout=_scoreboardLayout - In the implementation block
-(id<VUIScorecardViewDelegate>)delegate;
-(void)setDelegate:(id<VUIScorecardViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setColumnWidths:(NSArray *)arg1 ;
-(NSArray *)columnWidths;
-(void)invalidateData;
-(VUIScoreboardLayout *)scoreboardLayout;
-(void)setScoreboardLayout:(VUIScoreboardLayout *)arg1 ;
-(CGSize)_calculateMetricsOfScorecard;
-(void)_calculateColumnSpacing;
-(BOOL)didCalculatedSize;
-(void)setDidCalculatedSize:(BOOL)arg1 ;
-(CGSize)scorecardSize;
-(void)setScorecardSize:(CGSize)arg1 ;
-(NSArray *)rowScoreValueSizes;
-(void)setRowScoreValueSizes:(NSArray *)arg1 ;
-(NSArray *)rowHeights;
-(void)setRowHeights:(NSArray *)arg1 ;
-(UIImage *)darkMaterialImage;
-(void)setDarkMaterialImage:(UIImage *)arg1 ;
-(BOOL)delegateRespondsToBackgroundImageForScorecardViewMaterial;
-(void)setDelegateRespondsToBackgroundImageForScorecardViewMaterial:(BOOL)arg1 ;
-(BOOL)delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;
-(void)setDelegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex:(BOOL)arg1 ;
@end


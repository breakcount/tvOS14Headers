/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MRTransition.h>

@class NSMutableArray;

@interface MRTransitionTileFlip : MRTransition {

	NSMutableArray* mSortedTiles;
	unsigned mNumberOfTilesX;
	unsigned mNumberOfTilesY;
	float mFlipOverlap;
	unsigned char mDirection;
	BOOL mUseLighting;

}
-(void)cleanup;
-(void)setAttributes:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)releaseByTransitioner:(id)arg1 ;
-(void)buildTiles;
@end


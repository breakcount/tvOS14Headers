/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationContentOrAestheticScoreTrait : PGCurationTrait {

	double _minimumAestheticScore;

}

@property (assign,nonatomic) double minimumAestheticScore;              //@synthesize minimumAestheticScore=_minimumAestheticScore - In the implementation block
-(BOOL)isActive;
-(id)initWithMinimumContentScore:(double)arg1 minimumAestheticScore:(double)arg2 ;
-(double)minimumAestheticScore;
-(void)setMinimumAestheticScore:(double)arg1 ;
@end


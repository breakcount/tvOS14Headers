/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPageIndicatorFeedDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSArray;

@interface _UIPageIndicatorFeed : NSObject {

	id<_UIPageIndicatorFeedDelegate> _delegate;
	NSMutableArray* _activeQueue;
	NSMutableArray* _reuseQueue;

}

@property (nonatomic,retain) NSMutableArray * activeQueue;                                  //@synthesize activeQueue=_activeQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * reuseQueue;                                   //@synthesize reuseQueue=_reuseQueue - In the implementation block
@property (nonatomic,readonly) NSArray * indicators; 
@property (assign,nonatomic,__weak) id<_UIPageIndicatorFeedDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<_UIPageIndicatorFeedDelegate>)delegate;
-(void)setDelegate:(id<_UIPageIndicatorFeedDelegate>)arg1 ;
-(void)invalidateIndicators;
-(CGSize)indicatorSizeForPage:(long long)arg1 ;
-(void)setActiveQueue:(NSMutableArray *)arg1 ;
-(void)setReuseQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)activeQueue;
-(NSMutableArray *)reuseQueue;
-(id)indicatorForPage:(long long)arg1 ;
-(id)indicatorForPage:(long long)arg1 forSizeOnly:(BOOL)arg2 ;
-(NSArray *)indicators;
-(void)updateReuseQueue;
-(void)reloadIndicatorImages;
-(void)reloadIndicatorImageForPage:(long long)arg1 ;
-(void)prepareIndicatorsFrom:(long long)arg1 to:(long long)arg2 ;
-(CGSize)indicatorSizeForCustomImage:(id)arg1 ;
@end


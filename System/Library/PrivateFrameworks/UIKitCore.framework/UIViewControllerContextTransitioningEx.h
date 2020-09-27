/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol UIViewControllerContextTransitioningEx <UIViewControllerContextTransitioning>
@property (setter=_setContainerViews:,nonatomic,retain) NSArray * _containerViews; 
@property (assign,setter=_setPercentOffset:,nonatomic) double _percentOffset; 
@property (assign,setter=_setAllowUserInteraction:,getter=_allowUserInteraction,nonatomic) BOOL _allowUserInteraction; 
@required
-(void)__runAlongsideAnimations;
-(void)_setAllowUserInteraction:(BOOL)arg1;
-(BOOL)_allowUserInteraction;
-(long long)_alongsideAnimationsCount;
-(void)_interactivityDidChange:(BOOL)arg1;
-(double)_percentOffset;
-(NSArray *)_containerViews;
-(void)_setContainerViews:(id)arg1;
-(void)_setPercentOffset:(double)arg1;

@end


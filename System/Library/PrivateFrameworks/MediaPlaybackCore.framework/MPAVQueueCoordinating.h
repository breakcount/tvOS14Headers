/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPAVItem, NSArray;


@protocol MPAVQueueCoordinating <NSObject>
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (assign,nonatomic) BOOL shouldExpectEmptyQueue; 
@property (assign,nonatomic) BOOL shouldDeferItemLoading; 
@property (nonatomic,readonly) NSArray * items; 
@required
-(void)reset;
-(NSArray *)items;
-(MPAVItem *)currentItem;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1;
-(BOOL)shouldExpectEmptyQueue;
-(void)setShouldExpectEmptyQueue:(BOOL)arg1;
-(BOOL)shouldDeferItemLoading;
-(void)setShouldDeferItemLoading:(BOOL)arg1;

@end


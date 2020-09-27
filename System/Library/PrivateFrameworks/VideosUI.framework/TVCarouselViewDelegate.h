/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVCarouselViewDelegate <NSObject>
@optional
-(BOOL)carouselView:(id)arg1 shouldHighlightItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didUnhighlightItemAtIndex:(unsigned long long)arg2;
-(BOOL)carouselView:(id)arg1 shouldSelectItemAtIndex:(unsigned long long)arg2;
-(BOOL)carouselView:(id)arg1 shouldDeselectItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didDeselectItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
-(void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
-(void)carouselView:(id)arg1 willDisplayItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didEndDisplayingItemAtIndex:(unsigned long long)arg2;
-(void)carouselViewDidScroll:(id)arg1;
-(void)carouselView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didCenterItemAtIndex:(unsigned long long)arg2;

@end


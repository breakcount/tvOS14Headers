/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <PodcastsUI/MTMPUFontDescriptor.h>

@interface MTMPUMutableFontDescriptor : MTMPUFontDescriptor

@property (assign,nonatomic) long long textStyle; 
@property (assign,nonatomic) double systemFontSize; 
@property (assign,nonatomic) long long weight; 
@property (assign,nonatomic) long long leadingAdjustment; 
@property (assign,nonatomic) double defaultPointSizeAdjustment; 
@property (assign,nonatomic) BOOL usesItalic; 
@property (assign,nonatomic) BOOL usesCondensedMetrics; 
@property (assign,nonatomic) BOOL wantsMonospaceNumbers; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWeight:(long long)arg1 ;
-(void)setTextStyle:(long long)arg1 ;
-(void)setLeadingAdjustment:(long long)arg1 ;
-(void)setSystemFontSize:(double)arg1 ;
-(void)setDefaultPointSizeAdjustment:(double)arg1 ;
-(void)_resetToDefaultValues;
-(id)_copyAllowingGlobalCacheLookup:(BOOL)arg1 ;
-(void)setUsesItalic:(BOOL)arg1 ;
-(void)setUsesCondensedMetrics:(BOOL)arg1 ;
-(void)setWantsMonospaceNumbers:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class NSArray, _UIStatusBarImageView, NSString;

@interface _UIStatusBarIndicatorItem : _UIStatusBarItem {

	NSArray* _currentImageNamePrefixes;
	_UIStatusBarImageView* _imageView;

}

@property (nonatomic,copy) NSArray * currentImageNamePrefixes;                       //@synthesize currentImageNamePrefixes=_currentImageNamePrefixes - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) NSString * indicatorEntryKey; 
@property (nonatomic,readonly) BOOL isTemplateImage; 
@property (nonatomic,readonly) BOOL flipsForRightToLeftLayoutDirection; 
-(_UIStatusBarImageView *)imageView;
-(void)setImageView:(_UIStatusBarImageView *)arg1 ;
-(BOOL)flipsForRightToLeftLayoutDirection;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)imageForUpdate:(id)arg1 ;
-(NSString *)indicatorEntryKey;
-(id)systemImageNameForUpdate:(id)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)imageNameForUpdate:(id)arg1 ;
-(BOOL)shouldUpdateIndicatorForIdentifier:(id)arg1 ;
-(BOOL)isTemplateImage;
-(void)_create_imageView;
-(void)setCurrentImageNamePrefixes:(NSArray *)arg1 ;
-(NSArray *)currentImageNamePrefixes;
@end


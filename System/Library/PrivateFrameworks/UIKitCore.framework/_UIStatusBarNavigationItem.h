/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

@interface _UIStatusBarNavigationItem : _UIStatusBarItem {

	_UIStatusBarStringView* _nameView;

}

@property (nonatomic,retain) _UIStatusBarStringView * nameView;              //@synthesize nameView=_nameView - In the implementation block
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(_UIStatusBarStringView *)nameView;
-(void)_create_nameView;
-(void)setNameView:(_UIStatusBarStringView *)arg1 ;
@end


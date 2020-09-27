/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:37 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class NSHashTable, NSMapTable;

@interface TSKBaseTableViewCell : UITableViewCell {

	NSHashTable* _textLabels;
	NSHashTable* _detailLabels;
	NSMapTable* _accessoriesAndSelectors;
	NSMapTable* _titleAccessoriesAndSelectors;

}

@property (nonatomic,readonly) NSHashTable * textLabels;                               //@synthesize textLabels=_textLabels - In the implementation block
@property (nonatomic,readonly) NSHashTable * detailLabels;                             //@synthesize detailLabels=_detailLabels - In the implementation block
@property (nonatomic,readonly) NSMapTable * accessoriesAndSelectors;                   //@synthesize accessoriesAndSelectors=_accessoriesAndSelectors - In the implementation block
@property (nonatomic,readonly) NSMapTable * titleAccessoriesAndSelectors;              //@synthesize titleAccessoriesAndSelectors=_titleAccessoriesAndSelectors - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_textColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_accessoryColor;
-(id)_detailColor;
-(void)registerAccessoryForAppearanceUpdates:(id)arg1 selector:(SEL)arg2 ;
-(void)_updateDetailLabels;
-(void)_updateAccessoryColors;
-(void)_updateTextLabels;
-(void)_updateTitleAccessories;
-(void)registerTextLabelForAppearanceUpdates:(id)arg1 ;
-(void)registerDetailLabelForAppearanceUpdates:(id)arg1 ;
-(void)registerTitleAccessoryForAppearanceUpdates:(id)arg1 selector:(SEL)arg2 ;
-(NSHashTable *)textLabels;
-(NSHashTable *)detailLabels;
-(NSMapTable *)accessoriesAndSelectors;
-(NSMapTable *)titleAccessoriesAndSelectors;
@end


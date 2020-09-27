/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol AMSUINotificationInAppSettingsTableViewCellDelegate;
@class AMSNotificationSettingsItem, UISwitch;

@interface AMSUINotificationSettingsTableViewCell : UITableViewCell {

	id<AMSUINotificationInAppSettingsTableViewCellDelegate> _delegate;
	AMSNotificationSettingsItem* _item;
	UISwitch* _itemSwitch;

}

@property (nonatomic,retain) UISwitch * itemSwitch;                                                                //@synthesize itemSwitch=_itemSwitch - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUINotificationInAppSettingsTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AMSNotificationSettingsItem * item;                                                   //@synthesize item=_item - In the implementation block
-(id<AMSUINotificationInAppSettingsTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<AMSUINotificationInAppSettingsTableViewCellDelegate>)arg1 ;
-(void)setItem:(AMSNotificationSettingsItem *)arg1 ;
-(AMSNotificationSettingsItem *)item;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)switchToggled:(id)arg1 ;
-(UISwitch *)itemSwitch;
-(void)setItemSwitch:(UISwitch *)arg1 ;
@end

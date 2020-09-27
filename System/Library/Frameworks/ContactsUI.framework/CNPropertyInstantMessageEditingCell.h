/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleEditingCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class CNInstantMessageAddress, NSString;

@interface CNPropertyInstantMessageEditingCell : CNPropertySimpleEditingCell <CNPickerControllerDelegate>

@property (nonatomic,readonly) CNInstantMessageAddress * imAddress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNInstantMessageAddress *)imAddress;
-(void)pickerDidCancel:(id)arg1 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)labelButtonClicked:(id)arg1 ;
@end

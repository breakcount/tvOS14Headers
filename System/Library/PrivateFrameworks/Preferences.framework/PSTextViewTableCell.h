/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UITextContentViewDelegate.h>

@class PSTextView, NSString;

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate> {

	PSTextView* _textView;

}

@property (nonatomic,retain) PSTextView * textView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setValue:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(PSTextView *)textView;
-(void)setTextView:(PSTextView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)cellRemovedFromView;
-(BOOL)canBecomeFirstResponder;
-(void)_adjustTextView:(id)arg1 updateTable:(BOOL)arg2 withSpecifier:(id)arg3 ;
-(void)textContentViewDidEndEditing:(id)arg1 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(void)drawTitleInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
@end


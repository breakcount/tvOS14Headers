/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIPassthroughScrollInteractionDelegate.h>

@class UILongPressGestureRecognizer, _UIPassthroughScrollInteraction, UIView, UILabel, UITextField, _UIContentViewEditingConfiguration, _UIContentViewLabelConfiguration, NSString;

@interface _UIContentViewEditingController : NSObject <UITextFieldDelegate, UIGestureRecognizerDelegate, _UIPassthroughScrollInteractionDelegate> {

	UILongPressGestureRecognizer* _longPressRecognizer;
	_UIPassthroughScrollInteraction* _passthroughInteraction;
	BOOL _hasEdits;
	UIView* _contentView;
	UILabel* _editableLabel;
	UITextField* _textInputView;
	_UIContentViewEditingConfiguration* _editingConfiguration;
	_UIContentViewLabelConfiguration* _labelConfiguration;

}

@property (nonatomic,retain) UITextField * textInputView;                                              //@synthesize textInputView=_textInputView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * contentView;                                            //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UILabel * editableLabel;                                                //@synthesize editableLabel=_editableLabel - In the implementation block
@property (nonatomic,readonly) _UIContentViewEditingConfiguration * editingConfiguration;              //@synthesize editingConfiguration=_editingConfiguration - In the implementation block
@property (nonatomic,readonly) _UIContentViewLabelConfiguration * labelConfiguration;                  //@synthesize labelConfiguration=_labelConfiguration - In the implementation block
@property (getter=isDisplayingEditedText,nonatomic,readonly) BOOL displayingEditedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(UIView *)contentView;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)textInputView;
-(BOOL)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(CGPoint)arg2 withEvent:(id)arg3 ;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg1 ;
-(void)tearDownTextInputView;
-(void)updateTextInputViewFromLabelAttributes;
-(void)setupTextInputView;
-(void)setupGestureRecognizerIfNecessary;
-(void)removeGestureRecognizer;
-(void)longPressRecognizerChanged:(id)arg1 ;
-(BOOL)makeTextInputFirstResponder;
-(void)tearDownPassthroughInteraction;
-(void)setupPassthroughInteraction;
-(id)initWithContentView:(id)arg1 editableLabel:(id)arg2 ;
-(void)updateLabelConfiguration:(id)arg1 editingConfiguration:(id)arg2 ;
-(BOOL)isDisplayingEditedText;
-(UILabel *)editableLabel;
-(void)setTextInputView:(UITextField *)arg1 ;
-(_UIContentViewEditingConfiguration *)editingConfiguration;
-(_UIContentViewLabelConfiguration *)labelConfiguration;
@end


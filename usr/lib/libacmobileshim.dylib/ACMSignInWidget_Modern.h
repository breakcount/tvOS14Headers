/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/ACMSignInWidgetProtocol.h>

@protocol ACMSignInWidgetDelegate;
@class UIView, UIColor, UITextField, NSString, NSDictionary, UIButton;

@interface ACMSignInWidget_Modern : NSObject <UITextFieldDelegate, ACMSignInWidgetProtocol> {

	BOOL _shouldAuthenticateOnUserInput;
	BOOL _hideTopSeparator;
	BOOL _hideMargin;
	id<ACMSignInWidgetDelegate> _delegate;
	UIView* _view;
	UIColor* _backgroundColor;
	UITextField* _accountField;
	UITextField* _passwordField;
	NSString* _accountLabelText;
	NSDictionary* _placeholderAttributes;
	UIButton* _accountClearButton;
	UIButton* _passwordClearButton;
	CGPoint _position;

}

@property (nonatomic,retain) UIButton * accountClearButton;                     //@synthesize accountClearButton=_accountClearButton - In the implementation block
@property (nonatomic,retain) UIButton * passwordClearButton;                    //@synthesize passwordClearButton=_passwordClearButton - In the implementation block
@property (assign,nonatomic) BOOL hideTopSeparator;                             //@synthesize hideTopSeparator=_hideTopSeparator - In the implementation block
@property (assign,nonatomic) BOOL hideMargin;                                   //@synthesize hideMargin=_hideMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<ACMSignInWidgetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * view;                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) UITextField * accountField;                      //@synthesize accountField=_accountField - In the implementation block
@property (nonatomic,readonly) UITextField * passwordField;                     //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) NSString * accountLabelText;                       //@synthesize accountLabelText=_accountLabelText - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSDictionary * placeholderAttributes;              //@synthesize placeholderAttributes=_placeholderAttributes - In the implementation block
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput;                //@synthesize shouldAuthenticateOnUserInput=_shouldAuthenticateOnUserInput - In the implementation block
@property (assign,nonatomic) CGPoint position;                                  //@synthesize position=_position - In the implementation block
-(void)dealloc;
-(id<ACMSignInWidgetDelegate>)delegate;
-(void)setDelegate:(id<ACMSignInWidgetDelegate>)arg1 ;
-(CGPoint)position;
-(void)setPosition:(CGPoint)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIView *)view;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)passwordField;
-(double)leftMargin;
-(UITextField *)accountField;
-(NSString *)accountLabelText;
-(void)setAccountLabelText:(NSString *)arg1 ;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1 ;
-(UIButton *)accountClearButton;
-(UIButton *)passwordClearButton;
-(void)setAccountClearButton:(UIButton *)arg1 ;
-(void)setPasswordClearButton:(UIButton *)arg1 ;
-(BOOL)hideMargin;
-(BOOL)hideTopSeparator;
-(void)applyPlaceholderAttributes;
-(id)textFieldFont;
-(NSDictionary *)placeholderAttributes;
-(id)clearButtonImage;
-(void)clearTextField:(id)arg1 ;
-(void)touchIn:(id)arg1 ;
-(void)touchOut:(id)arg1 ;
-(id)createClearButtonForEditField:(id)arg1 ;
-(void)disableControls:(BOOL)arg1 ;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setPlaceholderAttributes:(NSDictionary *)arg1 ;
-(void)setHideTopSeparator:(BOOL)arg1 ;
-(void)setHideMargin:(BOOL)arg1 ;
@end


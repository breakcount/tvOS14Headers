/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactActionDelegate;
@class CNContact, NSString, UIColor, CNMutableContact;

@interface CNContactAction : NSObject {

	BOOL _destructive;
	id<CNContactActionDelegate> _delegate;
	CNContact* _contact;
	NSString* _title;
	id _target;
	SEL _selector;
	UIColor* _color;
	long long _transportType;

}

@property (assign,nonatomic,__weak) id<CNContactActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                      //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNMutableContact * mutableContact; 
@property (nonatomic,copy,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id target;                                              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                                           //@synthesize selector=_selector - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;                    //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) UIColor * color;                                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long transportType;                                  //@synthesize transportType=_transportType - In the implementation block
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)description;
-(SEL)selector;
-(id<CNContactActionDelegate>)delegate;
-(void)setDelegate:(id<CNContactActionDelegate>)arg1 ;
-(id)target;
-(NSString *)title;
-(long long)transportType;
-(void)setTransportType:(long long)arg1 ;
-(void)setDestructive:(BOOL)arg1 ;
-(BOOL)isDestructive;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(void)performActionWithSender:(id)arg1 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(CNMutableContact *)mutableContact;
@end


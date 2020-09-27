/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@protocol RUIPresentationHandling, RUIAlertViewDelegate;
@class UIAlertController, RUIObjectModel, NSString;

@interface RUIAlertView : RUIElement {

	UIAlertController* _alertController;
	id<RUIPresentationHandling> _presentationContext;
	RUIObjectModel*<RUIAlertViewDelegate> _objectModel;
	NSString* _title;
	NSString* _message;
	long long _buttonIndex;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                                                           //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic,__weak) RUIObjectModel*<RUIAlertViewDelegate> objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                                                    //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) long long buttonIndex;                                               //@synthesize buttonIndex=_buttonIndex - In the implementation block
+(void)_enableTestMode;
-(void)dealloc;
-(id)completion;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)alertController;
-(long long)buttonIndex;
-(RUIObjectModel*<RUIAlertViewDelegate>)objectModel;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(void)setObjectModel:(RUIObjectModel*<RUIAlertViewDelegate>)arg1 ;
-(void)runAlertInController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissAlertController;
-(void)addButtonWithTitle:(id)arg1 URL:(id)arg2 style:(long long)arg3 attributes:(id)arg4 ;
@end


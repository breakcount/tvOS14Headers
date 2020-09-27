/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAlertView.h>

@interface _UIUserNotificationAlertView : UIAlertView {

	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _userNotificationRunLoopSource;
	id _strongDelegate;
	id _retainedSelf;

}
+(void)initialize;
-(void)dealloc;
-(BOOL)isVisible;
-(void)show;
-(void)setRemoteViewController:(id)arg1 ;
-(long long)addButtonWithTitle:(id)arg1 ;
-(id)textFieldAtIndex:(long long)arg1 ;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_removeObservervations;
-(void)cancelAlertView;
-(void)_cancelUserNotification;
-(void)setHostedWindow:(id)arg1 ;
@end


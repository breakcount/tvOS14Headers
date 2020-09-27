/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextLinkInteraction;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextItemInteractionInteraction, UIView;

@interface _UITextLinkInteractionSession : NSObject {

	UITextItemInteractionInteraction* _interaction;
	UIView*<UITextLinkInteraction> _linkInteractionView;

}
-(void)dealloc;
-(BOOL)_allowItemInteractions;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(id)initWithTextItemInteraction:(id)arg1 ;
-(BOOL)canInteractWithLinkAtPoint:(CGPoint)arg1 ;
@end


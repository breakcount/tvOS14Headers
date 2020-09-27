/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInterfaceActionVisualStyleViewState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIInterfaceAction;

@interface UIInterfaceActionViewState : UIInterfaceActionVisualStyleViewState <NSCopying> {

	BOOL _isHighlighted;
	BOOL _isPressed;
	BOOL _isFocused;
	BOOL _isPreferred;
	UIInterfaceAction* _action;
	id _actionViewStateContext;
	unsigned long long _visualCornerPosition;

}

@property (nonatomic,readonly) UIInterfaceAction * action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL isHighlighted;                                   //@synthesize isHighlighted=_isHighlighted - In the implementation block
@property (nonatomic,readonly) BOOL isPressed;                                       //@synthesize isPressed=_isPressed - In the implementation block
@property (nonatomic,readonly) BOOL isFocused;                                       //@synthesize isFocused=_isFocused - In the implementation block
@property (nonatomic,readonly) BOOL isPreferred;                                     //@synthesize isPreferred=_isPreferred - In the implementation block
@property (nonatomic,readonly) id actionViewStateContext;                            //@synthesize actionViewStateContext=_actionViewStateContext - In the implementation block
@property (nonatomic,readonly) unsigned long long visualCornerPosition;              //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
+(id)viewStateRepresentingDefaultAction;
+(id)viewStateRepresentingPreferredAction;
+(id)viewStateForActionRepresentationView:(id)arg1 action:(id)arg2 ;
+(id)_nullViewStateForActionType:(long long)arg1 ;
+(id)viewStateForActionRepresentationViewDescendantView:(id)arg1 action:(id)arg2 ;
+(id)viewStateForAlertControllerActionView:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIInterfaceAction *)action;
-(BOOL)isFocused;
-(BOOL)isHighlighted;
-(BOOL)isPreferred;
-(BOOL)isPressed;
-(id)actionViewStateContext;
-(unsigned long long)visualCornerPosition;
-(id)initWithPropertiesFromActionRepresentationView:(id)arg1 groupView:(id)arg2 action:(id)arg3 ;
-(void)_collectStateForDefaultState;
-(void)_collectStateFromActionRepresentationView:(id)arg1 ;
-(void)_collectStateFromAction:(id)arg1 ;
-(void)_collectStateFromActionViewState:(id)arg1 ;
-(BOOL)_stateEqualToActionViewState:(id)arg1 ;
@end


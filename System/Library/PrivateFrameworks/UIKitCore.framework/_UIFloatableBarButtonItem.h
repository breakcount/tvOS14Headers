/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIBarButtonItem.h>

@class UIView;

@interface _UIFloatableBarButtonItem : UIBarButtonItem {

	BOOL _floatable;
	BOOL _floating;
	UIView* _configuredFloatableView;
	UIView* _referenceView;

}

@property (assign,setter=_setFloatable:,getter=_isFloatable,nonatomic) BOOL _floatable;                          //@synthesize floatable=_floatable - In the implementation block
@property (assign,setter=_setFloating:,getter=_isFloating,nonatomic) BOOL _floating;                             //@synthesize floating=_floating - In the implementation block
@property (setter=_setConfiguredFloatableView:,nonatomic,retain) UIView * _configuredFloatableView;              //@synthesize configuredFloatableView=_configuredFloatableView - In the implementation block
@property (setter=_setReferenceView:,nonatomic,retain) UIView * _referenceView;                                  //@synthesize referenceView=_referenceView - In the implementation block
-(id)description;
-(BOOL)_isFloating;
-(UIView *)_referenceView;
-(BOOL)_isFloatable;
-(UIView *)_configuredFloatableView;
-(void)_setFloatable:(BOOL)arg1 ;
-(void)_setFloating:(BOOL)arg1 ;
-(void)_setConfiguredFloatableView:(id)arg1 ;
-(void)_setReferenceView:(id)arg1 ;
@end

